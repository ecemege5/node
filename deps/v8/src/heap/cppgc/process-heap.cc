// Copyright 2020 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "include/cppgc/internal/process-heap.h"

namespace cppgc {
namespace internal {

AtomicEntryFlag ProcessHeap::concurrent_marking_flag_;

}  // namespace internal
}  // namespace cppgc
