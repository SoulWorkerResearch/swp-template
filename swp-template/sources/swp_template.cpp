#include "swp_template.hpp"

namespace swp_template
{
	auto plugin::main(void) const -> int32_t
	{
		spdlog::info("hello, world!");
		return EXIT_SUCCESS;
	}
};
