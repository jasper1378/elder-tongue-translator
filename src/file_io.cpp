#include "file_io.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> read_file(const std::string& file_name)
{
    std::ifstream input_file{ file_name };

    if (!input_file)
    {
        std::cerr<< "Unable to open " << file_name << " for reading!\n";
        std::exit(1);
    }

    std::vector<std::string> lines_of_input_file;

    while (input_file)
    {
        std::string current_line;
        std::getline(input_file, current_line);
        lines_of_input_file.push_back(current_line);
    }

    lines_of_input_file.pop_back();

    return lines_of_input_file;
}

void write_file(std::string file_name, const std::vector<std::string>& lines_to_write)
{
    std::ofstream output_file{ file_name };

    if (!output_file)
    {
        std::cerr << "Unable to open " << file_name << " for writing!\n";
        std::exit(1);
    }

    for (int i{ 0 }; i < lines_to_write.size(); ++i)
    {
        output_file << lines_to_write[i] << '\n';
    }
}
