#pragma once

#include <swpsdk/plugin/plugin_base.hpp>

class swp_template final : public swpsdk::plugin::base<swp_template>
{
public:
  auto main(void) const -> void override
  {
    spdlog::info("hello, world!");
  }
};