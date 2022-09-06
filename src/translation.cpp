#include "translation.h"

#include "array_tools.h"
#include "constants.h"
#include "conversions.h"
#include "file_io.h"
#include "io.h"
#include "enums.h"

#include <iostream>
#include <string>
#include <vector>

void init_translation(const bool& verbose, const translation_direction& direction, const std::vector<std::string>& input_text, const std::vector<std::string>& input_files, const std::vector<std::string>& output_files)
{
    if (direction == translation_direction::no_direction)
    {
        std::cerr << "No translation direction specified!\n";
        std::exit(1);
    }

    std::vector<std::string> all_input;

    if (input_text.size() > 0)
    {
        for (int i{ 0 }; i < input_text.size(); ++i)
        {
            all_input.push_back(input_text[i]);
        }
    }

    if (input_files.size() > 0)
    {
        for (int i{ 0 }; i < input_files.size(); ++i)
        {
            std::vector<std::string> current_file_contents{ read_file(input_files[i]) };

            for (int j{ 0 }; j < current_file_contents.size(); ++j)
            {
                all_input.push_back(current_file_contents[j]);
            }
        }
    }

    std::vector<std::string> all_output;

    if (verbose)
        std::cout << '\n';

    for (int i{ 0 }; i < all_input.size(); ++i)
    {
        switch (direction)
        {
            case translation_direction::english_to_elder_tongue:
                all_output.push_back(english_to_elder_tongue(all_input[i]));
                break;

            case translation_direction::elder_tongue_to_english:
                all_output.push_back(elder_tongue_to_english(all_input[i]));
                break;
        }

        if (verbose)
        {
            print_progress((i+1), static_cast<int>(all_input.size()));
        }
    }

    if (output_files.size() > 0)
    {
        for (int i{ 0 }; i < output_files.size(); ++i)
        {
            write_file(output_files[i], all_output);
        }
    }

    else
    {
        for (int i{ 0 }; i < all_output.size(); ++i)
        {
            print_output(all_output[i]);
        }
    }
}

std::string english_to_elder_tongue(const std::string& input_text)
{
    std::vector<std::vector<char>> input_text_as_char{ phrase_to_array(input_text) };

    std::vector<std::vector<int>> input_text_as_int{ char_to_int(input_text_as_char) };
    input_text_as_int = add_array<int, int, int>(input_text_as_int, constants::g_pi);
    input_text_as_int = modulo_array<int, int>(input_text_as_int, constants::g_alphabet_length);

    std::vector<std::vector<char>> output_text_as_char{ int_to_char(input_text_as_int) };
    output_text_as_char = check_if_upper(output_text_as_char, input_text_as_char);

    std::string output_text{ array_to_phrase(output_text_as_char) };

    return output_text;
}

std::string elder_tongue_to_english(const std::string& input_text)
{
    std::vector<std::vector<char>> input_text_as_char{ phrase_to_array(input_text) };

    std::vector<std::vector<int>> input_text_as_int{ char_to_int(input_text_as_char) };
    input_text_as_int = subtract_array<int, int, int>(input_text_as_int, constants::g_pi);
    input_text_as_int = modulo_array_reverse<int, int>(input_text_as_int, constants::g_alphabet_length);

    std::vector<std::vector<char>> output_text_as_char{ int_to_char(input_text_as_int) };
    output_text_as_char = check_if_upper(output_text_as_char, input_text_as_char);

    std::string output_text{ array_to_phrase(output_text_as_char) };

    return output_text;
}
