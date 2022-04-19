// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/timestamp.proto

#include <google/protobuf/timestamp.pb.h>

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

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_NAMESPACE_OPEN
PROTOBUF_CONSTEXPR Timestamp::Timestamp(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.seconds_)*/int64_t{0}
  , /*decltype(_impl_.nanos_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct TimestampDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TimestampDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TimestampDefaultTypeInternal() {}
  union {
    Timestamp _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TimestampDefaultTypeInternal _Timestamp_default_instance_;
PROTOBUF_NAMESPACE_CLOSE
static ::_pb::Metadata file_level_metadata_google_2fprotobuf_2ftimestamp_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2ftimestamp_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2ftimestamp_2eproto = nullptr;

const uint32_t TableStruct_google_2fprotobuf_2ftimestamp_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PROTOBUF_NAMESPACE_ID::Timestamp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::PROTOBUF_NAMESPACE_ID::Timestamp, _impl_.seconds_),
  PROTOBUF_FIELD_OFFSET(::PROTOBUF_NAMESPACE_ID::Timestamp, _impl_.nanos_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::PROTOBUF_NAMESPACE_ID::Timestamp)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_._instance,
};

const char descriptor_table_protodef_google_2fprotobuf_2ftimestamp_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037google/protobuf/timestamp.proto\022\017googl"
  "e.protobuf\"+\n\tTimestamp\022\017\n\007seconds\030\001 \001(\003"
  "\022\r\n\005nanos\030\002 \001(\005B\205\001\n\023com.google.protobufB"
  "\016TimestampProtoP\001Z2google.golang.org/pro"
  "tobuf/types/known/timestamppb\370\001\001\242\002\003GPB\252\002"
  "\036Google.Protobuf.WellKnownTypesb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_google_2fprotobuf_2ftimestamp_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2ftimestamp_2eproto = {
    false, false, 239, descriptor_table_protodef_google_2fprotobuf_2ftimestamp_2eproto,
    "google/protobuf/timestamp.proto",
    &descriptor_table_google_2fprotobuf_2ftimestamp_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_google_2fprotobuf_2ftimestamp_2eproto::offsets,
    file_level_metadata_google_2fprotobuf_2ftimestamp_2eproto, file_level_enum_descriptors_google_2fprotobuf_2ftimestamp_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2ftimestamp_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fprotobuf_2ftimestamp_2eproto_getter() {
  return &descriptor_table_google_2fprotobuf_2ftimestamp_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fprotobuf_2ftimestamp_2eproto(&descriptor_table_google_2fprotobuf_2ftimestamp_2eproto);
PROTOBUF_NAMESPACE_OPEN

// ===================================================================

class Timestamp::_Internal {
 public:
};

Timestamp::Timestamp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.Timestamp)
}
Timestamp::Timestamp(const Timestamp& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  new (&_impl_) Impl_{
      decltype(_impl_.seconds_){}
    , decltype(_impl_.nanos_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.seconds_, &from._impl_.seconds_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.nanos_) -
    reinterpret_cast<char*>(&_impl_.seconds_)) + sizeof(_impl_.nanos_));
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Timestamp)
}

inline void Timestamp::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.seconds_){int64_t{0}}
    , decltype(_impl_.nanos_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Timestamp::~Timestamp() {
  // @@protoc_insertion_point(destructor:google.protobuf.Timestamp)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Timestamp::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Timestamp::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Timestamp::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Timestamp)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.seconds_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.nanos_) -
      reinterpret_cast<char*>(&_impl_.seconds_)) + sizeof(_impl_.nanos_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Timestamp::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 seconds = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.seconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 nanos = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.nanos_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Timestamp::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Timestamp)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 seconds = 1;
  if (this->_internal_seconds() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_seconds(), target);
  }

  // int32 nanos = 2;
  if (this->_internal_nanos() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_nanos(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Timestamp)
  return target;
}

size_t Timestamp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Timestamp)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 seconds = 1;
  if (this->_internal_seconds() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_seconds());
  }

  // int32 nanos = 2;
  if (this->_internal_nanos() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_nanos());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Timestamp::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Timestamp::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Timestamp::GetClassData() const { return &_class_data_; }

void Timestamp::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Timestamp *>(to)->MergeFrom(
      static_cast<const Timestamp &>(from));
}


void Timestamp::MergeFrom(const Timestamp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Timestamp)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_seconds() != 0) {
    _internal_set_seconds(from._internal_seconds());
  }
  if (from._internal_nanos() != 0) {
    _internal_set_nanos(from._internal_nanos());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Timestamp::CopyFrom(const Timestamp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Timestamp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Timestamp::IsInitialized() const {
  return true;
}

void Timestamp::InternalSwap(Timestamp* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Timestamp, _impl_.nanos_)
      + sizeof(Timestamp::_impl_.nanos_)
      - PROTOBUF_FIELD_OFFSET(Timestamp, _impl_.seconds_)>(
          reinterpret_cast<char*>(&_impl_.seconds_),
          reinterpret_cast<char*>(&other->_impl_.seconds_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Timestamp::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fprotobuf_2ftimestamp_2eproto_getter, &descriptor_table_google_2fprotobuf_2ftimestamp_2eproto_once,
      file_level_metadata_google_2fprotobuf_2ftimestamp_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::PROTOBUF_NAMESPACE_ID::Timestamp*
Arena::CreateMaybeMessage< ::PROTOBUF_NAMESPACE_ID::Timestamp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::PROTOBUF_NAMESPACE_ID::Timestamp >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
