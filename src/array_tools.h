#pragma once

#ifndef ARRAY_TOOLS_H
#define ARRAY_TOOLS_H

#include <vector>

template <typename T>
void print_array(const std::vector<std::vector<T>>& array);

template <typename T, typename U>
std::vector<std::vector<T>> new_empty_array(const std::vector<std::vector<U>>& old_array);

template <typename T, typename U, typename V>
std::vector<std::vector<T>> add_array(const std::vector<std::vector<U>>& array1, const std::vector<V>& array2);

template <typename T, typename U, typename V>
std::vector<std::vector<T>> subtract_array(const std::vector<std::vector<U>>& array1, const std::vector<V>& array2);

template <typename T, typename U, typename V>
std::vector<std::vector<T>> modulo_array(const std::vector<std::vector<U>>& array1, const V& modulo);

template <typename T, typename U, typename V>
std::vector<std::vector<T>> modulo_array_reverse(const std::vector<std::vector<U>>& array1, const V& modulo);

#endif
