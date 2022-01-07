// local
#include "../headers/swp_template.hpp"

// deps
#include <swpsdk/plugin/plugin_attach.hpp>

auto swpsdk::plugin::attach(void)->swpsdk::plugin::info* {
  return new swpsdk::plugin::info{
    .game_version = game::version{1, 4, 2, 3},
    .plugin_version = semver::version{},
    .instance = &swp_template::instance()
  };
}
