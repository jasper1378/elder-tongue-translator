#include "io.h"

#include "translation.h"
#include "enums.h"

#include <iostream>
#include <string>
#include <unistd.h>

void no_commandline_arguments()
{
    print_help();
}

void handle_commandline_arguments(const std::vector<std::string>& argument_vector)
{
    bool verbose{};
    translation_direction direction{ translation_direction::no_direction };
    std::vector<std::string> input_text;
    std::vector<std::string> input_files;
    std::vector<std::string> output_files;

    for (int i{ 0 }; i < argument_vector.size(); ++i)
    {

        if (argument_vector[i] == "./elder-tongue-translator" || argument_vector[i] == "elder-tongue-translator")
        {
            //
        }

        else if (argument_vector[i] == "-h" || argument_vector[i] == "--help")
        {
            print_help();
            return;
        }

        else if (argument_vector[i] == "-p" || argument_vector[i] == "--progress")
        {
            verbose = true;
        }

        else if (argument_vector[i]== "-1" || argument_vector[i] == "--english-to-elder-tongue")
        {
            direction = translation_direction::english_to_elder_tongue;
        }

        else if (argument_vector[i] == "-2" || argument_vector[i] == "--elder-tongue-to-english")
        {
            direction = translation_direction::elder_tongue_to_english;
        }

        else if (argument_vector[i] == "-it" || argument_vector[i] == "--input-text")
        {
            input_text.push_back(argument_vector[i+1]);
        }

        else if (argument_vector[i] == "-if" || argument_vector[i] == "--input-file")
        {
            input_files.push_back(argument_vector[i+1]);
        }

        else if (argument_vector[i] == "-of" || argument_vector[i] == "--output-file")
        {
            output_files.push_back(argument_vector[i+1]);
        }

        else
        {
            //
        }
    }

    init_translation(verbose, direction, input_text, input_files, output_files);
}

void print_help()
{
    std::cout << "Jasper's Elder Tongue Translator\n";
    std::cout << '\n';

    std::cout << "Usage: elder-tongue-translator [options]\n";
    std::cout << "Options:\n";
    std::cout << '\n';

    std::cout << '\t' << "-h\n" ;
    std::cout << '\t' << "--help\n";
    std::cout << '\t' << "Will print this help message.\n\n";

    std::cout << '\t' << "-v\n";
    std::cout << '\t' << "--verbose\n";
    std::cout << '\t' << "Translate in verbose mode.\n";
    std::cout << '\n';

    std::cout << '\t' << "-1\n";
    std::cout << '\t' << "--english-to-elder-tongue\n";
    std::cout << '\t' << "Translate from English to Elder Tongue.\n";
    std::cout << '\n';

    std::cout << '\t' << "-2\n";
    std::cout << '\t' << "--elder-tongue-to-english\n";
    std::cout << '\t' << "Translate from Elder Tongue to English\n";
    std::cout << '\n';

    std::cout << '\t' << "-it \"Lorem ipsum\"\n";
    std::cout << '\t' << "--input-text \"Lorem ipsum\"\n";
    std::cout << '\t' << "Specify the phrase to translate. Make sure that \"Lorem ipsum\" is in double quotes.\n";
    std::cout << '\t' << "Optional if reading from file.\n";
    std::cout << '\n';

    std::cout << '\t' << "-if \"file.txt\"\n";
    std::cout << '\t' << "--input-file \"file.txt\"\n";
    std::cout << '\t' << "Specify a file to read from. Make sure that your file has one phrase per line.\n";
    std::cout << '\t' << "Optional if providing phrase directly.\n";
    std::cout << '\n';

    std::cout << '\t' << "-of \"file.txt\"\n";
    std::cout << '\t' << "--output-file \"file.txt\"\n";
    std::cout << '\t' << "Specify a file to write to. The file will have one phrase per line.\n";
    std::cout << '\t' << "Optional if you wish to print output to terminal.\n";
    std::cout << '\n';

    std::cout << "To report a bug, please create an issue on github (https://github.com/jasper1378/elder-tongue-translator/issues)\n";
}

void print_progress(const int& current, const int& total)
{
    if ((total < 100) || (current % (total/100) == 0))
    {
        std::cout << "\r\033[F" << '[' << "Translating " << current << " of " << total << ']' << '\n' << std::flush;
    }
}

void print_output(const std::string& output_phrase)
{
    std::cout << output_phrase << '\n';
}
