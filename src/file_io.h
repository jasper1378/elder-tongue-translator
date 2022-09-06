#pragma once

#ifndef FILE_IO_H
#define FILE_IO_H

#include <vector>
#include <string>

std::vector<std::string> read_file(const std::string& file_name);
void write_file(std::string file_name, const std::vector<std::string>& lines_to_write);

#endif
