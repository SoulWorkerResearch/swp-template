// local
#include "../headers/swp_template.hpp"

// deps
#include <swpsdk/plugin/attach.hpp>

auto swpsdk::plugin::attach(void)->swpsdk::plugin::info* {
  return new swpsdk::plugin::info{
    .game_version = version{1, 4, 2, 3},
    .plugin_version = version{},
    .instance = &swp_template::plugin::instance()
  };
}
