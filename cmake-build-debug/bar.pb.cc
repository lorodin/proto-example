// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bar.proto

#include "bar.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace Example2 {
class PBarDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PBar>
      _instance;
} _PBar_default_instance_;
}  // namespace Example2
namespace protobuf_bar_2eproto {
static void InitDefaultsPBar() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Example2::_PBar_default_instance_;
    new (ptr) ::Example2::PBar();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Example2::PBar::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PBar =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPBar}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_PBar.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Example2::PBar, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Example2::PBar, b_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Example2::PBar)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::Example2::_PBar_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "bar.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\tbar.proto\022\010Example2\"\021\n\004PBar\022\t\n\001b\030\001 \001(\002"
      "b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 48);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "bar.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_bar_2eproto
namespace Example2 {

// ===================================================================

void PBar::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PBar::kBFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PBar::PBar()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_bar_2eproto::scc_info_PBar.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:Example2.PBar)
}
PBar::PBar(const PBar& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  b_ = from.b_;
  // @@protoc_insertion_point(copy_constructor:Example2.PBar)
}

void PBar::SharedCtor() {
  b_ = 0;
}

PBar::~PBar() {
  // @@protoc_insertion_point(destructor:Example2.PBar)
  SharedDtor();
}

void PBar::SharedDtor() {
}

void PBar::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PBar::descriptor() {
  ::protobuf_bar_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_bar_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PBar& PBar::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_bar_2eproto::scc_info_PBar.base);
  return *internal_default_instance();
}


void PBar::Clear() {
// @@protoc_insertion_point(message_clear_start:Example2.PBar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  b_ = 0;
  _internal_metadata_.Clear();
}

bool PBar::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Example2.PBar)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float b = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(13u /* 13 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &b_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Example2.PBar)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Example2.PBar)
  return false;
#undef DO_
}

void PBar::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Example2.PBar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float b = 1;
  if (this->b() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->b(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Example2.PBar)
}

::google::protobuf::uint8* PBar::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Example2.PBar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float b = 1;
  if (this->b() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->b(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Example2.PBar)
  return target;
}

size_t PBar::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Example2.PBar)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // float b = 1;
  if (this->b() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PBar::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Example2.PBar)
  GOOGLE_DCHECK_NE(&from, this);
  const PBar* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PBar>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Example2.PBar)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Example2.PBar)
    MergeFrom(*source);
  }
}

void PBar::MergeFrom(const PBar& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Example2.PBar)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.b() != 0) {
    set_b(from.b());
  }
}

void PBar::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Example2.PBar)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PBar::CopyFrom(const PBar& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Example2.PBar)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PBar::IsInitialized() const {
  return true;
}

void PBar::Swap(PBar* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PBar::InternalSwap(PBar* other) {
  using std::swap;
  swap(b_, other->b_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PBar::GetMetadata() const {
  protobuf_bar_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_bar_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Example2
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::Example2::PBar* Arena::CreateMaybeMessage< ::Example2::PBar >(Arena* arena) {
  return Arena::CreateInternal< ::Example2::PBar >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
