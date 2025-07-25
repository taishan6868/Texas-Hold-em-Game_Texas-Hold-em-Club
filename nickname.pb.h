// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nickname.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_nickname_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_nickname_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_nickname_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_nickname_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_nickname_2eproto;
namespace NicknameProto {
class ListNickNameRandomReq;
class ListNickNameRandomReqDefaultTypeInternal;
extern ListNickNameRandomReqDefaultTypeInternal _ListNickNameRandomReq_default_instance_;
class ListNickNameRandomResp;
class ListNickNameRandomRespDefaultTypeInternal;
extern ListNickNameRandomRespDefaultTypeInternal _ListNickNameRandomResp_default_instance_;
}  // namespace NicknameProto
PROTOBUF_NAMESPACE_OPEN
template<> ::NicknameProto::ListNickNameRandomReq* Arena::CreateMaybeMessage<::NicknameProto::ListNickNameRandomReq>(Arena*);
template<> ::NicknameProto::ListNickNameRandomResp* Arena::CreateMaybeMessage<::NicknameProto::ListNickNameRandomResp>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace NicknameProto {

// ===================================================================

class ListNickNameRandomReq :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NicknameProto.ListNickNameRandomReq) */ {
 public:
  ListNickNameRandomReq();
  virtual ~ListNickNameRandomReq();

  ListNickNameRandomReq(const ListNickNameRandomReq& from);
  ListNickNameRandomReq(ListNickNameRandomReq&& from) noexcept
    : ListNickNameRandomReq() {
    *this = ::std::move(from);
  }

  inline ListNickNameRandomReq& operator=(const ListNickNameRandomReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline ListNickNameRandomReq& operator=(ListNickNameRandomReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ListNickNameRandomReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ListNickNameRandomReq* internal_default_instance() {
    return reinterpret_cast<const ListNickNameRandomReq*>(
               &_ListNickNameRandomReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ListNickNameRandomReq& a, ListNickNameRandomReq& b) {
    a.Swap(&b);
  }
  inline void Swap(ListNickNameRandomReq* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ListNickNameRandomReq* New() const final {
    return CreateMaybeMessage<ListNickNameRandomReq>(nullptr);
  }

  ListNickNameRandomReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ListNickNameRandomReq>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ListNickNameRandomReq& from);
  void MergeFrom(const ListNickNameRandomReq& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ListNickNameRandomReq* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NicknameProto.ListNickNameRandomReq";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_nickname_2eproto);
    return ::descriptor_table_nickname_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCountFieldNumber = 1,
  };
  // sint32 count = 1;
  void clear_count();
  ::PROTOBUF_NAMESPACE_ID::int32 count() const;
  void set_count(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:NicknameProto.ListNickNameRandomReq)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 count_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_nickname_2eproto;
};
// -------------------------------------------------------------------

class ListNickNameRandomResp :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NicknameProto.ListNickNameRandomResp) */ {
 public:
  ListNickNameRandomResp();
  virtual ~ListNickNameRandomResp();

  ListNickNameRandomResp(const ListNickNameRandomResp& from);
  ListNickNameRandomResp(ListNickNameRandomResp&& from) noexcept
    : ListNickNameRandomResp() {
    *this = ::std::move(from);
  }

  inline ListNickNameRandomResp& operator=(const ListNickNameRandomResp& from) {
    CopyFrom(from);
    return *this;
  }
  inline ListNickNameRandomResp& operator=(ListNickNameRandomResp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ListNickNameRandomResp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ListNickNameRandomResp* internal_default_instance() {
    return reinterpret_cast<const ListNickNameRandomResp*>(
               &_ListNickNameRandomResp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ListNickNameRandomResp& a, ListNickNameRandomResp& b) {
    a.Swap(&b);
  }
  inline void Swap(ListNickNameRandomResp* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ListNickNameRandomResp* New() const final {
    return CreateMaybeMessage<ListNickNameRandomResp>(nullptr);
  }

  ListNickNameRandomResp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ListNickNameRandomResp>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ListNickNameRandomResp& from);
  void MergeFrom(const ListNickNameRandomResp& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ListNickNameRandomResp* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NicknameProto.ListNickNameRandomResp";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_nickname_2eproto);
    return ::descriptor_table_nickname_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNicknameFieldNumber = 2,
    kResultCodeFieldNumber = 1,
  };
  // repeated string nickname = 2;
  int nickname_size() const;
  void clear_nickname();
  const std::string& nickname(int index) const;
  std::string* mutable_nickname(int index);
  void set_nickname(int index, const std::string& value);
  void set_nickname(int index, std::string&& value);
  void set_nickname(int index, const char* value);
  void set_nickname(int index, const char* value, size_t size);
  std::string* add_nickname();
  void add_nickname(const std::string& value);
  void add_nickname(std::string&& value);
  void add_nickname(const char* value);
  void add_nickname(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& nickname() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_nickname();

  // sint32 resultCode = 1;
  void clear_resultcode();
  ::PROTOBUF_NAMESPACE_ID::int32 resultcode() const;
  void set_resultcode(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:NicknameProto.ListNickNameRandomResp)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> nickname_;
  ::PROTOBUF_NAMESPACE_ID::int32 resultcode_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_nickname_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ListNickNameRandomReq

// sint32 count = 1;
inline void ListNickNameRandomReq::clear_count() {
  count_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ListNickNameRandomReq::count() const {
  // @@protoc_insertion_point(field_get:NicknameProto.ListNickNameRandomReq.count)
  return count_;
}
inline void ListNickNameRandomReq::set_count(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  count_ = value;
  // @@protoc_insertion_point(field_set:NicknameProto.ListNickNameRandomReq.count)
}

// -------------------------------------------------------------------

// ListNickNameRandomResp

// sint32 resultCode = 1;
inline void ListNickNameRandomResp::clear_resultcode() {
  resultcode_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ListNickNameRandomResp::resultcode() const {
  // @@protoc_insertion_point(field_get:NicknameProto.ListNickNameRandomResp.resultCode)
  return resultcode_;
}
inline void ListNickNameRandomResp::set_resultcode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  resultcode_ = value;
  // @@protoc_insertion_point(field_set:NicknameProto.ListNickNameRandomResp.resultCode)
}

// repeated string nickname = 2;
inline int ListNickNameRandomResp::nickname_size() const {
  return nickname_.size();
}
inline void ListNickNameRandomResp::clear_nickname() {
  nickname_.Clear();
}
inline const std::string& ListNickNameRandomResp::nickname(int index) const {
  // @@protoc_insertion_point(field_get:NicknameProto.ListNickNameRandomResp.nickname)
  return nickname_.Get(index);
}
inline std::string* ListNickNameRandomResp::mutable_nickname(int index) {
  // @@protoc_insertion_point(field_mutable:NicknameProto.ListNickNameRandomResp.nickname)
  return nickname_.Mutable(index);
}
inline void ListNickNameRandomResp::set_nickname(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:NicknameProto.ListNickNameRandomResp.nickname)
  nickname_.Mutable(index)->assign(value);
}
inline void ListNickNameRandomResp::set_nickname(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:NicknameProto.ListNickNameRandomResp.nickname)
  nickname_.Mutable(index)->assign(std::move(value));
}
inline void ListNickNameRandomResp::set_nickname(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  nickname_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:NicknameProto.ListNickNameRandomResp.nickname)
}
inline void ListNickNameRandomResp::set_nickname(int index, const char* value, size_t size) {
  nickname_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:NicknameProto.ListNickNameRandomResp.nickname)
}
inline std::string* ListNickNameRandomResp::add_nickname() {
  // @@protoc_insertion_point(field_add_mutable:NicknameProto.ListNickNameRandomResp.nickname)
  return nickname_.Add();
}
inline void ListNickNameRandomResp::add_nickname(const std::string& value) {
  nickname_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:NicknameProto.ListNickNameRandomResp.nickname)
}
inline void ListNickNameRandomResp::add_nickname(std::string&& value) {
  nickname_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:NicknameProto.ListNickNameRandomResp.nickname)
}
inline void ListNickNameRandomResp::add_nickname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  nickname_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:NicknameProto.ListNickNameRandomResp.nickname)
}
inline void ListNickNameRandomResp::add_nickname(const char* value, size_t size) {
  nickname_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:NicknameProto.ListNickNameRandomResp.nickname)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ListNickNameRandomResp::nickname() const {
  // @@protoc_insertion_point(field_list:NicknameProto.ListNickNameRandomResp.nickname)
  return nickname_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ListNickNameRandomResp::mutable_nickname() {
  // @@protoc_insertion_point(field_mutable_list:NicknameProto.ListNickNameRandomResp.nickname)
  return &nickname_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace NicknameProto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_nickname_2eproto
