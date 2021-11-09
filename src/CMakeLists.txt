cmake_minimum_required(VERSION 3.15)
project(kaikosdk)

include(FetchContent)

set(CMAKE_POLICY_DEFAULT_CMP0077 NEW) # required to make sure sets are taken into account

set(gRPC_INSTALL OFF)
set(gRPC_BUILD_GRPC_CPP_PLUGIN OFF)
set(gRPC_BUILD_GRPC_CSHARP_PLUGIN OFF)
set(gRPC_BUILD_GRPC_NODE_PLUGIN OFF)
set(gRPC_BUILD_GRPC_OBJECTIVE_C_PLUGIN OFF)
set(gRPC_BUILD_GRPC_PHP_PLUGIN OFF)
set(gRPC_BUILD_GRPC_PYTHON_PLUGIN OFF)
set(gRPC_BUILD_GRPC_RUBY_PLUGIN OFF)
set(gRPC_BUILD_CSHARP_EXT OFF)
set(gRPC_BUILD_CODEGEN OFF)

# see https://github.com/grpc/grpc/tree/master/examples/cpp/
FetchContent_Declare(
        grpc
        GIT_REPOSITORY "https://github.com/grpc/grpc"
        GIT_TAG "v1.41.1"
)

FetchContent_MakeAvailable(grpc)

set(_PROTOBUF_LIBPROTOBUF libprotobuf)
set(_GRPC_GRPCPP grpc++)

# check for enabling inclusion in other cmake-based project
if(EXISTS "${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake")
  include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
endif()

FILE(GLOB_RECURSE Sources ${PROJECT_SOURCE_DIR}/*.cc)
add_library(kaikosdk ${Sources})
target_include_directories(kaikosdk PUBLIC ${PROJECT_SOURCE_DIR}) #include headers on export

## split cmake setup (cmake >=3.1.2)
if(EXISTS "${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake")
  # conan_basic_setup(TARGETS) # TARGETS forces link.txt to include full path libraries
  # target_link_libraries(kaikosdk CONAN_PKG::grpc) # see build/release/CMakeFiles/app.dir/link.txt for output

  # this config is for not making transitive dependency part of default linking
  # you have to explicitely link against CONAN_PKG::grpc if this option is chosen
  # target_link_libraries(kaikosdk PRIVATE CONAN_PKG::grpc)
  
  target_link_libraries(kaikosdk PRIVATE ${_PROTOBUF_LIBPROTOBUF} ${_GRPC_GRPCPP})
  target_link_libraries(app PRIVATE kaikosdk ${_GRPC_GRPCPP})

  # https://cmake.org/cmake/help/latest/command/target_link_libraries.html
  # Libraries and targets following PUBLIC are linked to, and are made part of the link interface. Libraries and targets following PRIVATE are linked to, but are not made part of the link interface.
  # Library dependencies are transitive by default
  # Basically, nothing = transitive, PUBLIC/PRIVATE means you have to add it final executable "target_link_libraries"
endif()

set_target_properties(kaikosdk PROPERTIES CXX_STANDARD 11) # protobuf requirement
set_target_properties(kaikosdk PROPERTIES LINKER_LANGUAGE CXX)

# IDEs should put the headers in a nice place
source_group(
  TREE "${PROJECT_SOURCE_DIR}"
  PREFIX "Header Files"
  FILES ${HSources})

