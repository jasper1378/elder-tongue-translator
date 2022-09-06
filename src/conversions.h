#pragma once

#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include <vector>
#include <string>

std::vector<std::vector<char>> phrase_to_array(const std::string& phrase);

std::string array_to_phrase(const std::vector<std::vector<char>>& phrase_array);

std::vector<std::vector<int>> char_to_int(const std::vector<std::vector<char>>& char_array);

std::vector<std::vector<char>> int_to_char(const std::vector<std::vector<int>>& int_array);

std::vector<std::vector<char>> check_if_upper(const std::vector<std::vector<char>>& no_check, const std::vector<std::vector<char>>& compare_to);

#endif
