// local
#include "../headers/swp_template.hpp"

// deps
#include <sdk/plugin/plugin_emplace.hpp>

namespace sdk::plugin
{
  auto emplace(void)->info* {
    return new sdk::plugin::info{
      .game_version = semver::version(),
      .plugin_version = semver::version(),
      .instance = &swp_template::instance()
    };
  }
}