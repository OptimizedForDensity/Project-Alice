#include "json.hpp"

using json = nlohmann::json;

namespace webui {

json format_color(sys::state& state, uint32_t c);

json format_nation(sys::state& state, dcon::nation_id n);

json format_nation(sys::state& state, dcon::national_identity_id n);

json format_state(sys::state& state, dcon::state_instance_id stid, int depth = 1);

json format_province(sys::state& state, dcon::province_id prov, int depth = 1);

json format_wargoal(sys::state& state, dcon::wargoal_id wid);

json format_wargoal(sys::state& state, sys::full_wg wid);

}
