#pragma once

#ifndef TRANSLATION_H
#define TRANSLATION_H

#include "enums.h"

#include <string>
#include <vector>

void init_translation(const bool& verbose, const translation_direction& direction, const std::vector<std::string>& input_text, const std::vector<std::string>& input_files, const std::vector<std::string>& output_files);

std::string english_to_elder_tongue(const std::string& input_text);

std::string elder_tongue_to_english(const std::string& input_text);

#endif

