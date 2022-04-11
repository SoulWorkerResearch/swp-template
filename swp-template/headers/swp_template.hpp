#pragma once

#include <swpsdk/plugin/base.hpp>

namespace swp_template
{
  class plugin final : public swpsdk::plugin::base<plugin>
  {
  public:
    auto main(void) const -> void override;
  };
}
