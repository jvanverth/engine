# Recipe Changelog

### 23 Oct 2019

* Recipe Link: https://chromium-review.googlesource.com/c/chromium/tools/build/+/1875314
* Reason: Using `unopt` flutter_tester is slower than the optimized alternative.

### 21 Oct 2019

* Recipe Link: https://chromium-review.googlesource.com/c/chromium/tools/build/+/1872832
* Reason: `dart:kernel_compiler` is no longer a valid target after https://github.com/flutter/engine/pull/13158. This change is to account for that.
