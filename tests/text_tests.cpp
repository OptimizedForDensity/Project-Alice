#include "catch.hpp"
#include "text.hpp"
/*
TEST_CASE("text from csv", "[parsers]") {
	SECTION("sample_lines") {

		std::unique_ptr<sys::state> state = std::make_unique<sys::state>();

		parsers::error_handler err("sample_lines");
		text::consume_csv_file(*state, 2, RANGE_SZ("#klajdlkjasd\nLABEL;Text$d$more"), err);
		REQUIRE(err.fatal == false);

		REQUIRE(state->text_components.size() == size_t(3));
		REQUIRE(state->text_sequences.size() == size_t(1));

		auto key = state->key_to_text_sequence.find(std::string_view("label"))->second;
		REQUIRE(bool(key) == true);
		REQUIRE(state->text_sequences[key].component_count == 3);
		REQUIRE(state->to_string_view(
		            state->text_components[state->text_sequences[key].starting_component + 2].data.text_key) == "more");
	}
	SECTION("multiple_lines") {
		std::unique_ptr<sys::state> state = std::make_unique<sys::state>();

		parsers::error_handler err("multiple_lines");
		text::consume_csv_file(*state, 2, RANGE_SZ("#klajdlkjasd\nLABEL;Text$d$more\r\nBBB;extra;;;;\nCCC;last;;"), err);
		REQUIRE(err.fatal == false);

		REQUIRE(state->text_components.size() == size_t(5));
		REQUIRE(state->text_sequences.size() == size_t(3));

		{
			auto key = state->key_to_text_sequence.find(std::string_view("label"))->second;
			REQUIRE(bool(key) == true);
			REQUIRE(state->text_sequences[key].component_count == 3);
			REQUIRE(state->to_string_view(
			            state->text_components[state->text_sequences[key].starting_component + 2].data.text_key) == "more");
		}
		{
			auto key = state->key_to_text_sequence.find(std::string_view("ccc"))->second;
			REQUIRE(bool(key) == true);
			REQUIRE(state->text_sequences[key].component_count == 1);
			REQUIRE(state->to_string_view(
			            state->text_components[state->text_sequences[key].starting_component].data.text_key) == "last");
		}
	}
}

#ifndef IGNORE_REAL_FILES_TESTS
TEST_CASE("text game files parsing", "[parsers]") {
	SECTION("empty_file_with_types") {
		std::unique_ptr<sys::state> state = std::make_unique<sys::state>();

		add_root(state->common_fs, NATIVE("."));

		parsers::error_handler err("");
		text::load_text_data(*state, 2, err);

		{
			REQUIRE(state->text_components.size() > size_t(100));
			REQUIRE(state->text_sequences.size() > size_t(100));

			auto it = state->key_to_text_sequence.find(std::string_view("player_lost_desc"));
			REQUIRE(it != state->key_to_text_sequence.end());
			auto key = it->second;
			REQUIRE(bool(key) == true);
			REQUIRE(state->text_sequences[key].component_count == 3);
			REQUIRE(state->to_string_view(
			            state->text_components[state->text_sequences[key].starting_component + 2].data.text_key) == " disconnected. Choose your action.");
		}
	}
}
#endif

*/
