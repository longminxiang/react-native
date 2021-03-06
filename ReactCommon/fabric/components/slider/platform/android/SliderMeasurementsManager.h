/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <react/core/ConcreteComponentDescriptor.h>
#include <react/core/LayoutConstraints.h>
#include <react/uimanager/ContextContainer.h>

namespace facebook {
namespace react {

/**
 * Class that manages slider measurements across platforms.
 * On iOS it is a noop, since the height is passed in from JS on iOS only.
 */
class SliderMeasurementsManager {
 public:
  SliderMeasurementsManager(const SharedContextContainer &contextContainer)
      : contextContainer_(contextContainer) {}
  const bool shouldMeasureSlider() const;
  Size measure(LayoutConstraints layoutConstraints) const;

 private:
  const SharedContextContainer contextContainer_;
};

} // namespace react
} // namespace facebook
