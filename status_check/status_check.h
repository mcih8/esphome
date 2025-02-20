#pragma once

#include "esphome/core/component.h"

class StatusCheck : public esphome::Component {
 public:
  void loop() override;
};
