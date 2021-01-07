// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <stdint.h>

namespace ax {

namespace mojom {

// https://www.w3.org/TR/wai-aria-1.1/#aria-rowcount
// https://www.w3.org/TR/wai-aria-1.1/#aria-colcount
// If the total number of (rows|columns) is unknown, authors MUST set the
// value of aria-(rowcount|colcount) to -1 to indicate that the value should not
// be calculated by the user agent.
// See: AXTableInfo
const int32_t kUnknownAriaColumnOrRowCount = -1;

}  // namespace mojom

}  // namespace ax