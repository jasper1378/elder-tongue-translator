#pragma once

#ifndef IO_H
#define IO_H

#include <string>
#include <vector>

void no_commandline_arguments();

void handle_commandline_arguments(const std::vector<std::string>& argument_vector);

void print_help();

void print_progress(const int& current, const int& total);

void print_output(const std::string& output_phrase);

#endif
