// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: greetpb/greet.proto

#include "greetpb/greet.pb.h"

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

namespace greet {
PROTOBUF_CONSTEXPR Greeting::Greeting(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.firstname_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.lastname_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GreetingDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GreetingDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GreetingDefaultTypeInternal() {}
  union {
    Greeting _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GreetingDefaultTypeInternal _Greeting_default_instance_;
PROTOBUF_CONSTEXPR GreetRequest::GreetRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.greeting_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GreetRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GreetRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GreetRequestDefaultTypeInternal() {}
  union {
    GreetRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GreetRequestDefaultTypeInternal _GreetRequest_default_instance_;
PROTOBUF_CONSTEXPR GreetResponse::GreetResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.result_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GreetResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GreetResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GreetResponseDefaultTypeInternal() {}
  union {
    GreetResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GreetResponseDefaultTypeInternal _GreetResponse_default_instance_;
}  // namespace greet
static ::_pb::Metadata file_level_metadata_greetpb_2fgreet_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_greetpb_2fgreet_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_greetpb_2fgreet_2eproto = nullptr;

const uint32_t TableStruct_greetpb_2fgreet_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::greet::Greeting, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::greet::Greeting, _impl_.firstname_),
  PROTOBUF_FIELD_OFFSET(::greet::Greeting, _impl_.lastname_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::greet::GreetRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::greet::GreetRequest, _impl_.greeting_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::greet::GreetResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::greet::GreetResponse, _impl_.result_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::greet::Greeting)},
  { 8, -1, -1, sizeof(::greet::GreetRequest)},
  { 15, -1, -1, sizeof(::greet::GreetResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::greet::_Greeting_default_instance_._instance,
  &::greet::_GreetRequest_default_instance_._instance,
  &::greet::_GreetResponse_default_instance_._instance,
};

const char descriptor_table_protodef_greetpb_2fgreet_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023greetpb/greet.proto\022\005greet\"/\n\010Greeting"
  "\022\021\n\tfirstName\030\001 \001(\t\022\020\n\010lastName\030\002 \001(\t\"1\n"
  "\014GreetRequest\022!\n\010greeting\030\001 \001(\0132\017.greet."
  "Greeting\"\037\n\rGreetResponse\022\016\n\006result\030\001 \001("
  "\t2D\n\014GreetService\0224\n\005Greet\022\023.greet.Greet"
  "Request\032\024.greet.GreetResponse\"\000B\017Z\rgreet"
  "pb.greetb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_greetpb_2fgreet_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_greetpb_2fgreet_2eproto = {
    false, false, 256, descriptor_table_protodef_greetpb_2fgreet_2eproto,
    "greetpb/greet.proto",
    &descriptor_table_greetpb_2fgreet_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_greetpb_2fgreet_2eproto::offsets,
    file_level_metadata_greetpb_2fgreet_2eproto, file_level_enum_descriptors_greetpb_2fgreet_2eproto,
    file_level_service_descriptors_greetpb_2fgreet_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_greetpb_2fgreet_2eproto_getter() {
  return &descriptor_table_greetpb_2fgreet_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_greetpb_2fgreet_2eproto(&descriptor_table_greetpb_2fgreet_2eproto);
namespace greet {

// ===================================================================

class Greeting::_Internal {
 public:
};

Greeting::Greeting(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:greet.Greeting)
}
Greeting::Greeting(const Greeting& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Greeting* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.firstname_){}
    , decltype(_impl_.lastname_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.firstname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.firstname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_firstname().empty()) {
    _this->_impl_.firstname_.Set(from._internal_firstname(), 
      _this->GetArenaForAllocation());
  }
  _impl_.lastname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.lastname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_lastname().empty()) {
    _this->_impl_.lastname_.Set(from._internal_lastname(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:greet.Greeting)
}

inline void Greeting::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.firstname_){}
    , decltype(_impl_.lastname_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.firstname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.firstname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.lastname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.lastname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Greeting::~Greeting() {
  // @@protoc_insertion_point(destructor:greet.Greeting)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Greeting::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.firstname_.Destroy();
  _impl_.lastname_.Destroy();
}

void Greeting::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Greeting::Clear() {
// @@protoc_insertion_point(message_clear_start:greet.Greeting)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.firstname_.ClearToEmpty();
  _impl_.lastname_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Greeting::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string firstName = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_firstname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "greet.Greeting.firstName"));
        } else
          goto handle_unusual;
        continue;
      // string lastName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_lastname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "greet.Greeting.lastName"));
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

uint8_t* Greeting::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:greet.Greeting)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string firstName = 1;
  if (!this->_internal_firstname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_firstname().data(), static_cast<int>(this->_internal_firstname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "greet.Greeting.firstName");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_firstname(), target);
  }

  // string lastName = 2;
  if (!this->_internal_lastname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_lastname().data(), static_cast<int>(this->_internal_lastname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "greet.Greeting.lastName");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_lastname(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:greet.Greeting)
  return target;
}

size_t Greeting::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:greet.Greeting)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string firstName = 1;
  if (!this->_internal_firstname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_firstname());
  }

  // string lastName = 2;
  if (!this->_internal_lastname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_lastname());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Greeting::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Greeting::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Greeting::GetClassData() const { return &_class_data_; }


void Greeting::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Greeting*>(&to_msg);
  auto& from = static_cast<const Greeting&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:greet.Greeting)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_firstname().empty()) {
    _this->_internal_set_firstname(from._internal_firstname());
  }
  if (!from._internal_lastname().empty()) {
    _this->_internal_set_lastname(from._internal_lastname());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Greeting::CopyFrom(const Greeting& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:greet.Greeting)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Greeting::IsInitialized() const {
  return true;
}

void Greeting::InternalSwap(Greeting* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.firstname_, lhs_arena,
      &other->_impl_.firstname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.lastname_, lhs_arena,
      &other->_impl_.lastname_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Greeting::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_greetpb_2fgreet_2eproto_getter, &descriptor_table_greetpb_2fgreet_2eproto_once,
      file_level_metadata_greetpb_2fgreet_2eproto[0]);
}

// ===================================================================

class GreetRequest::_Internal {
 public:
  static const ::greet::Greeting& greeting(const GreetRequest* msg);
};

const ::greet::Greeting&
GreetRequest::_Internal::greeting(const GreetRequest* msg) {
  return *msg->_impl_.greeting_;
}
GreetRequest::GreetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:greet.GreetRequest)
}
GreetRequest::GreetRequest(const GreetRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GreetRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.greeting_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_greeting()) {
    _this->_impl_.greeting_ = new ::greet::Greeting(*from._impl_.greeting_);
  }
  // @@protoc_insertion_point(copy_constructor:greet.GreetRequest)
}

inline void GreetRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.greeting_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GreetRequest::~GreetRequest() {
  // @@protoc_insertion_point(destructor:greet.GreetRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GreetRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.greeting_;
}

void GreetRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GreetRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:greet.GreetRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.greeting_ != nullptr) {
    delete _impl_.greeting_;
  }
  _impl_.greeting_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GreetRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .greet.Greeting greeting = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_greeting(), ptr);
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

uint8_t* GreetRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:greet.GreetRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .greet.Greeting greeting = 1;
  if (this->_internal_has_greeting()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::greeting(this),
        _Internal::greeting(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:greet.GreetRequest)
  return target;
}

size_t GreetRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:greet.GreetRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .greet.Greeting greeting = 1;
  if (this->_internal_has_greeting()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.greeting_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GreetRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GreetRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GreetRequest::GetClassData() const { return &_class_data_; }


void GreetRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GreetRequest*>(&to_msg);
  auto& from = static_cast<const GreetRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:greet.GreetRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_greeting()) {
    _this->_internal_mutable_greeting()->::greet::Greeting::MergeFrom(
        from._internal_greeting());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GreetRequest::CopyFrom(const GreetRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:greet.GreetRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GreetRequest::IsInitialized() const {
  return true;
}

void GreetRequest::InternalSwap(GreetRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.greeting_, other->_impl_.greeting_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GreetRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_greetpb_2fgreet_2eproto_getter, &descriptor_table_greetpb_2fgreet_2eproto_once,
      file_level_metadata_greetpb_2fgreet_2eproto[1]);
}

// ===================================================================

class GreetResponse::_Internal {
 public:
};

GreetResponse::GreetResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:greet.GreetResponse)
}
GreetResponse::GreetResponse(const GreetResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GreetResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.result_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.result_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.result_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_result().empty()) {
    _this->_impl_.result_.Set(from._internal_result(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:greet.GreetResponse)
}

inline void GreetResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.result_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.result_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.result_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GreetResponse::~GreetResponse() {
  // @@protoc_insertion_point(destructor:greet.GreetResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GreetResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.result_.Destroy();
}

void GreetResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GreetResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:greet.GreetResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.result_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GreetResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_result();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "greet.GreetResponse.result"));
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

uint8_t* GreetResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:greet.GreetResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string result = 1;
  if (!this->_internal_result().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_result().data(), static_cast<int>(this->_internal_result().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "greet.GreetResponse.result");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_result(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:greet.GreetResponse)
  return target;
}

size_t GreetResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:greet.GreetResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string result = 1;
  if (!this->_internal_result().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_result());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GreetResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GreetResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GreetResponse::GetClassData() const { return &_class_data_; }


void GreetResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GreetResponse*>(&to_msg);
  auto& from = static_cast<const GreetResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:greet.GreetResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_result().empty()) {
    _this->_internal_set_result(from._internal_result());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GreetResponse::CopyFrom(const GreetResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:greet.GreetResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GreetResponse::IsInitialized() const {
  return true;
}

void GreetResponse::InternalSwap(GreetResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.result_, lhs_arena,
      &other->_impl_.result_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata GreetResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_greetpb_2fgreet_2eproto_getter, &descriptor_table_greetpb_2fgreet_2eproto_once,
      file_level_metadata_greetpb_2fgreet_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace greet
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::greet::Greeting*
Arena::CreateMaybeMessage< ::greet::Greeting >(Arena* arena) {
  return Arena::CreateMessageInternal< ::greet::Greeting >(arena);
}
template<> PROTOBUF_NOINLINE ::greet::GreetRequest*
Arena::CreateMaybeMessage< ::greet::GreetRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::greet::GreetRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::greet::GreetResponse*
Arena::CreateMaybeMessage< ::greet::GreetResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::greet::GreetResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
