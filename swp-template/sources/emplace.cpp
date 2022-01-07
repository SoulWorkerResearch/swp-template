// local
#include "../headers/swp_template.hpp"

// deps
#include <sdk/plugin/plugin_emplace.hpp>

auto sdk::plugin::emplace(void)->sdk::plugin::info* {
  return new sdk::plugin::info{
    .game_version = semver::version(),
    .plugin_version = semver::version(),
    .instance = &swp_template::instance()
  };
}
