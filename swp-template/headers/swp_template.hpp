#pragma once

namespace swp_template
{
	class plugin final : public swpsdk::plugin::base<plugin>
	{
	public:
		auto main(void) const->int32_t override;
	};
}
