// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/core/sort_criteria.proto

#include "sdk/core/sort_criteria.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace kaikosdk {
}  // namespace kaikosdk
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_sdk_2fcore_2fsort_5fcriteria_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fcore_2fsort_5fcriteria_2eproto = nullptr;
const uint32_t TableStruct_sdk_2fcore_2fsort_5fcriteria_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_sdk_2fcore_2fsort_5fcriteria_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034sdk/core/sort_criteria.proto\022\010kaikosdk"
  "*3\n\014SortCriteria\022\020\n\014SORT_UNKNOWN\020\000\022\007\n\003AS"
  "C\020\001\022\010\n\004DESC\020\002BS\n\022com.kaiko.sdk.coreP\001Z+g"
  "ithub.com/kaikodata/kaiko-go-sdk/core;co"
  "re\252\002\rKaikoSdk.Coreb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fcore_2fsort_5fcriteria_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fcore_2fsort_5fcriteria_2eproto = {
  false, false, 186, descriptor_table_protodef_sdk_2fcore_2fsort_5fcriteria_2eproto, "sdk/core/sort_criteria.proto", 
  &descriptor_table_sdk_2fcore_2fsort_5fcriteria_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_sdk_2fcore_2fsort_5fcriteria_2eproto::offsets,
  nullptr, file_level_enum_descriptors_sdk_2fcore_2fsort_5fcriteria_2eproto, file_level_service_descriptors_sdk_2fcore_2fsort_5fcriteria_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fcore_2fsort_5fcriteria_2eproto_getter() {
  return &descriptor_table_sdk_2fcore_2fsort_5fcriteria_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fcore_2fsort_5fcriteria_2eproto(&descriptor_table_sdk_2fcore_2fsort_5fcriteria_2eproto);
namespace kaikosdk {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SortCriteria_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_sdk_2fcore_2fsort_5fcriteria_2eproto);
  return file_level_enum_descriptors_sdk_2fcore_2fsort_5fcriteria_2eproto[0];
}
bool SortCriteria_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
