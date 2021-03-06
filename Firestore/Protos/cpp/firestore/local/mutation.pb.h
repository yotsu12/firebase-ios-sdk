/*
 * Copyright 2018 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: firestore/local/mutation.proto

#ifndef PROTOBUF_firestore_2flocal_2fmutation_2eproto__INCLUDED
#define PROTOBUF_firestore_2flocal_2fmutation_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/firestore/v1beta1/write.pb.h"
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)

namespace protobuf_firestore_2flocal_2fmutation_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsMutationQueueImpl();
void InitDefaultsMutationQueue();
void InitDefaultsWriteBatchImpl();
void InitDefaultsWriteBatch();
inline void InitDefaults() {
  InitDefaultsMutationQueue();
  InitDefaultsWriteBatch();
}
}  // namespace protobuf_firestore_2flocal_2fmutation_2eproto
namespace firestore {
namespace client {
class MutationQueue;
class MutationQueueDefaultTypeInternal;
extern MutationQueueDefaultTypeInternal _MutationQueue_default_instance_;
class WriteBatch;
class WriteBatchDefaultTypeInternal;
extern WriteBatchDefaultTypeInternal _WriteBatch_default_instance_;
}  // namespace client
}  // namespace firestore
namespace firestore {
namespace client {

// ===================================================================

class MutationQueue : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:firestore.client.MutationQueue) */ {
 public:
  MutationQueue();
  virtual ~MutationQueue();

  MutationQueue(const MutationQueue& from);

  inline MutationQueue& operator=(const MutationQueue& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MutationQueue(MutationQueue&& from) noexcept
    : MutationQueue() {
    *this = ::std::move(from);
  }

  inline MutationQueue& operator=(MutationQueue&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MutationQueue& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MutationQueue* internal_default_instance() {
    return reinterpret_cast<const MutationQueue*>(
               &_MutationQueue_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MutationQueue* other);
  friend void swap(MutationQueue& a, MutationQueue& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MutationQueue* New() const PROTOBUF_FINAL { return New(NULL); }

  MutationQueue* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MutationQueue& from);
  void MergeFrom(const MutationQueue& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MutationQueue* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes last_stream_token = 2;
  void clear_last_stream_token();
  static const int kLastStreamTokenFieldNumber = 2;
  const ::std::string& last_stream_token() const;
  void set_last_stream_token(const ::std::string& value);
  #if LANG_CXX11
  void set_last_stream_token(::std::string&& value);
  #endif
  void set_last_stream_token(const char* value);
  void set_last_stream_token(const void* value, size_t size);
  ::std::string* mutable_last_stream_token();
  ::std::string* release_last_stream_token();
  void set_allocated_last_stream_token(::std::string* last_stream_token);

  // int32 last_acknowledged_batch_id = 1;
  void clear_last_acknowledged_batch_id();
  static const int kLastAcknowledgedBatchIdFieldNumber = 1;
  ::google::protobuf::int32 last_acknowledged_batch_id() const;
  void set_last_acknowledged_batch_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:firestore.client.MutationQueue)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr last_stream_token_;
  ::google::protobuf::int32 last_acknowledged_batch_id_;
  mutable int _cached_size_;
  friend struct ::protobuf_firestore_2flocal_2fmutation_2eproto::TableStruct;
  friend void ::protobuf_firestore_2flocal_2fmutation_2eproto::InitDefaultsMutationQueueImpl();
};
// -------------------------------------------------------------------

class WriteBatch : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:firestore.client.WriteBatch) */ {
 public:
  WriteBatch();
  virtual ~WriteBatch();

  WriteBatch(const WriteBatch& from);

  inline WriteBatch& operator=(const WriteBatch& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  WriteBatch(WriteBatch&& from) noexcept
    : WriteBatch() {
    *this = ::std::move(from);
  }

  inline WriteBatch& operator=(WriteBatch&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const WriteBatch& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WriteBatch* internal_default_instance() {
    return reinterpret_cast<const WriteBatch*>(
               &_WriteBatch_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(WriteBatch* other);
  friend void swap(WriteBatch& a, WriteBatch& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline WriteBatch* New() const PROTOBUF_FINAL { return New(NULL); }

  WriteBatch* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const WriteBatch& from);
  void MergeFrom(const WriteBatch& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(WriteBatch* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .google.firestore.v1beta1.Write writes = 2;
  int writes_size() const;
  void clear_writes();
  static const int kWritesFieldNumber = 2;
  const ::google::firestore::v1beta1::Write& writes(int index) const;
  ::google::firestore::v1beta1::Write* mutable_writes(int index);
  ::google::firestore::v1beta1::Write* add_writes();
  ::google::protobuf::RepeatedPtrField< ::google::firestore::v1beta1::Write >*
      mutable_writes();
  const ::google::protobuf::RepeatedPtrField< ::google::firestore::v1beta1::Write >&
      writes() const;

  // .google.protobuf.Timestamp local_write_time = 3;
  bool has_local_write_time() const;
  void clear_local_write_time();
  static const int kLocalWriteTimeFieldNumber = 3;
  const ::google::protobuf::Timestamp& local_write_time() const;
  ::google::protobuf::Timestamp* release_local_write_time();
  ::google::protobuf::Timestamp* mutable_local_write_time();
  void set_allocated_local_write_time(::google::protobuf::Timestamp* local_write_time);

  // int32 batch_id = 1;
  void clear_batch_id();
  static const int kBatchIdFieldNumber = 1;
  ::google::protobuf::int32 batch_id() const;
  void set_batch_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:firestore.client.WriteBatch)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::firestore::v1beta1::Write > writes_;
  ::google::protobuf::Timestamp* local_write_time_;
  ::google::protobuf::int32 batch_id_;
  mutable int _cached_size_;
  friend struct ::protobuf_firestore_2flocal_2fmutation_2eproto::TableStruct;
  friend void ::protobuf_firestore_2flocal_2fmutation_2eproto::InitDefaultsWriteBatchImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MutationQueue

// int32 last_acknowledged_batch_id = 1;
inline void MutationQueue::clear_last_acknowledged_batch_id() {
  last_acknowledged_batch_id_ = 0;
}
inline ::google::protobuf::int32 MutationQueue::last_acknowledged_batch_id() const {
  // @@protoc_insertion_point(field_get:firestore.client.MutationQueue.last_acknowledged_batch_id)
  return last_acknowledged_batch_id_;
}
inline void MutationQueue::set_last_acknowledged_batch_id(::google::protobuf::int32 value) {
  
  last_acknowledged_batch_id_ = value;
  // @@protoc_insertion_point(field_set:firestore.client.MutationQueue.last_acknowledged_batch_id)
}

// bytes last_stream_token = 2;
inline void MutationQueue::clear_last_stream_token() {
  last_stream_token_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MutationQueue::last_stream_token() const {
  // @@protoc_insertion_point(field_get:firestore.client.MutationQueue.last_stream_token)
  return last_stream_token_.GetNoArena();
}
inline void MutationQueue::set_last_stream_token(const ::std::string& value) {
  
  last_stream_token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:firestore.client.MutationQueue.last_stream_token)
}
#if LANG_CXX11
inline void MutationQueue::set_last_stream_token(::std::string&& value) {
  
  last_stream_token_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:firestore.client.MutationQueue.last_stream_token)
}
#endif
inline void MutationQueue::set_last_stream_token(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  last_stream_token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:firestore.client.MutationQueue.last_stream_token)
}
inline void MutationQueue::set_last_stream_token(const void* value, size_t size) {
  
  last_stream_token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:firestore.client.MutationQueue.last_stream_token)
}
inline ::std::string* MutationQueue::mutable_last_stream_token() {
  
  // @@protoc_insertion_point(field_mutable:firestore.client.MutationQueue.last_stream_token)
  return last_stream_token_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MutationQueue::release_last_stream_token() {
  // @@protoc_insertion_point(field_release:firestore.client.MutationQueue.last_stream_token)
  
  return last_stream_token_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MutationQueue::set_allocated_last_stream_token(::std::string* last_stream_token) {
  if (last_stream_token != NULL) {
    
  } else {
    
  }
  last_stream_token_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), last_stream_token);
  // @@protoc_insertion_point(field_set_allocated:firestore.client.MutationQueue.last_stream_token)
}

// -------------------------------------------------------------------

// WriteBatch

// int32 batch_id = 1;
inline void WriteBatch::clear_batch_id() {
  batch_id_ = 0;
}
inline ::google::protobuf::int32 WriteBatch::batch_id() const {
  // @@protoc_insertion_point(field_get:firestore.client.WriteBatch.batch_id)
  return batch_id_;
}
inline void WriteBatch::set_batch_id(::google::protobuf::int32 value) {
  
  batch_id_ = value;
  // @@protoc_insertion_point(field_set:firestore.client.WriteBatch.batch_id)
}

// repeated .google.firestore.v1beta1.Write writes = 2;
inline int WriteBatch::writes_size() const {
  return writes_.size();
}
inline const ::google::firestore::v1beta1::Write& WriteBatch::writes(int index) const {
  // @@protoc_insertion_point(field_get:firestore.client.WriteBatch.writes)
  return writes_.Get(index);
}
inline ::google::firestore::v1beta1::Write* WriteBatch::mutable_writes(int index) {
  // @@protoc_insertion_point(field_mutable:firestore.client.WriteBatch.writes)
  return writes_.Mutable(index);
}
inline ::google::firestore::v1beta1::Write* WriteBatch::add_writes() {
  // @@protoc_insertion_point(field_add:firestore.client.WriteBatch.writes)
  return writes_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::google::firestore::v1beta1::Write >*
WriteBatch::mutable_writes() {
  // @@protoc_insertion_point(field_mutable_list:firestore.client.WriteBatch.writes)
  return &writes_;
}
inline const ::google::protobuf::RepeatedPtrField< ::google::firestore::v1beta1::Write >&
WriteBatch::writes() const {
  // @@protoc_insertion_point(field_list:firestore.client.WriteBatch.writes)
  return writes_;
}

// .google.protobuf.Timestamp local_write_time = 3;
inline bool WriteBatch::has_local_write_time() const {
  return this != internal_default_instance() && local_write_time_ != NULL;
}
inline const ::google::protobuf::Timestamp& WriteBatch::local_write_time() const {
  const ::google::protobuf::Timestamp* p = local_write_time_;
  // @@protoc_insertion_point(field_get:firestore.client.WriteBatch.local_write_time)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Timestamp*>(
      &::google::protobuf::_Timestamp_default_instance_);
}
inline ::google::protobuf::Timestamp* WriteBatch::release_local_write_time() {
  // @@protoc_insertion_point(field_release:firestore.client.WriteBatch.local_write_time)
  
  ::google::protobuf::Timestamp* temp = local_write_time_;
  local_write_time_ = NULL;
  return temp;
}
inline ::google::protobuf::Timestamp* WriteBatch::mutable_local_write_time() {
  
  if (local_write_time_ == NULL) {
    local_write_time_ = new ::google::protobuf::Timestamp;
  }
  // @@protoc_insertion_point(field_mutable:firestore.client.WriteBatch.local_write_time)
  return local_write_time_;
}
inline void WriteBatch::set_allocated_local_write_time(::google::protobuf::Timestamp* local_write_time) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(local_write_time_);
  }
  if (local_write_time) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast< ::google::protobuf::MessageLite*>(local_write_time)->GetArena();
    if (message_arena != submessage_arena) {
      local_write_time = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, local_write_time, submessage_arena);
    }
    
  } else {
    
  }
  local_write_time_ = local_write_time;
  // @@protoc_insertion_point(field_set_allocated:firestore.client.WriteBatch.local_write_time)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace client
}  // namespace firestore

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_firestore_2flocal_2fmutation_2eproto__INCLUDED
