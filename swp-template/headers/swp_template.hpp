#pragma once

#include <sdk/plugin/plugin_base.hpp>

class swp_template final : public sdk::plugin::base<swp_template>
{
public:
  virtual auto main(void) const -> void 
  {
    spdlog::info("hello, world!");
  }
};