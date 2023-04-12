#include "swp_template.hpp"

auto swpsdk::plugin::get_info(info& _info) -> void
{
	_info.game_version = version{ 1, 4, 2, 3 };
	_info.plugin_version = version{ 1 };
	_info.instance = &swp_template::plugin::instance();
}
