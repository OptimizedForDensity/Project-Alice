#pragma once

#include "date_interface.hpp"
#include "dcon_generated.hpp"
#include "system_state.hpp"
#include <string_view>

namespace politics {

float vote_total(sys::state& state, dcon::nation_id nation);
float get_weighted_vote_size(sys::state& state, dcon::nation_id nation, dcon::pop_id pop);
float get_popular_support(sys::state& state, dcon::nation_id nation, dcon::issue_option_id issue_option);
float get_voter_support(sys::state& state, dcon::nation_id nation, dcon::issue_option_id issue_option);

bool can_appoint_ruling_party(sys::state& state, dcon::nation_id nation);
bool is_election_ongoing(sys::state& state, dcon::nation_id nation);
bool has_elections(sys::state& state, dcon::nation_id nation);
sys::date next_election_date(sys::state& state, dcon::nation_id nation);

dcon::reform_id get_reform_by_name(sys::state& state, std::string_view name);
dcon::issue_id get_issue_by_name(sys::state& state, std::string_view name);
bool reform_is_selected(sys::state& state, dcon::nation_id nation, dcon::reform_option_id reform_option);
bool issue_is_selected(sys::state& state, dcon::nation_id nation, dcon::issue_option_id issue_option);
bool can_enact_political_reform(sys::state& state, dcon::nation_id nation, dcon::issue_option_id issue_option);
bool can_enact_social_reform(sys::state& state, dcon::nation_id nation, dcon::issue_option_id issue_option);
bool can_enact_military_reform(sys::state& state, dcon::nation_id nation, dcon::reform_option_id reform_option);
bool can_enact_economic_reform(sys::state& state, dcon::nation_id nation, dcon::reform_option_id reform_option);
float get_military_reform_multiplier(sys::state& state, dcon::nation_id nation);
float get_economic_reform_multiplier(sys::state& state, dcon::nation_id nation);
bool political_party_is_active(sys::state& state, dcon::political_party_id p);

// sets upperhouse to 100% and changes ruling party to match the ideology
void force_nation_ideology(sys::state& state, dcon::nation_id n, dcon::ideology_id i);

// use this function for update flag, name, adjective, and color based on government type changes
void update_displayed_identity(sys::state& state, dcon::nation_id n);

void change_government_type(sys::state& state, dcon::nation_id n, dcon::government_type_id new_type);

// this function sets the upper house (for example, as when performing the yearly upper house update)
void recalculate_upper_house(sys::state& state, dcon::nation_id n);

void update_elections(sys::state& state);
void daily_party_loyalty_update(sys::state& state);

}