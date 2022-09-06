#include "array_tools.h"

#include "constants.h"
#include "enums.h"

#include <iostream>
#include <vector>

template <typename T>
void print_array(const std::vector<std::vector<T>>& array)
{
    for (int i{ 0 }; i < array.size(); ++i)
    {
        for (int j{ 0 }; j < array[i].size(); ++j)
        {
            std::cout << array[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << "----------";
}
template void print_array<int>(const std::vector<std::vector<int>>& array);
template void print_array<char>(const std::vector<std::vector<char>>& array);

template <typename T, typename U>
std::vector<std::vector<T>> new_empty_array(const std::vector<std::vector<U>>& old_array)
{
    std::vector<std::vector<T>> new_array(old_array.size());

    for (int i{ 0 }; i < old_array.size(); ++i)
    {
        new_array[i] = std::vector<T>(old_array[i].size());
    }

    return new_array;
}
template std::vector<std::vector<int>> new_empty_array<int, int>(const std::vector<std::vector<int>>& old_array);
template std::vector<std::vector<char>> new_empty_array<char, char>(const std::vector<std::vector<char>>& old_array);
template std::vector<std::vector<int>> new_empty_array<int, char>(const std::vector<std::vector<char>>& old_array);
template std::vector<std::vector<char>> new_empty_array<char, int>(const std::vector<std::vector<int>>& old_array);

template <typename T, typename U, typename V>
std::vector<std::vector<T>> add_array(const std::vector<std::vector<U>>& array1, const std::vector<V>& array2)
{
    std::vector<std::vector<T>> sum{ new_empty_array<T, U>(array1) };

    for (int i{ 0 }; i < array1.size(); ++i)
    {
        int array2_index{ 0 };

        for (int j{ 0 }; j < array1[i].size(); ++j)
        {
            if (array1[i][j] > letters::min_letter && array1[i][j] < letters::max_letter)
            {
                sum[i][j] = array1[i][j] + array2[array2_index];
                ++array2_index;
            }

            else
            {
                sum[i][j] = array1[i][j];
            }
        }
    }

    return sum;
}
template std::vector<std::vector<int>> add_array<int, int, int>(const std::vector<std::vector<int>>& array1, const std::vector<int>& array2);

template <typename T, typename U, typename V>
std::vector<std::vector<T>> subtract_array(const std::vector<std::vector<U>>& array1, const std::vector<V>& array2)
{
    std::vector<std::vector<T>> difference{ new_empty_array<T, U>(array1) };

    for (int i{ 0 }; i < array1.size(); ++i)
    {
        int array2_index{ 0 };

        for (int j{ 0 }; j < array1[i].size(); ++j)
        {
            if (array1[i][j] > letters::min_letter && array1[i][j] < letters::max_letter)
            {
                difference[i][j] = array1[i][j] - array2[array2_index];
                ++array2_index;
            }

            else
            {
                difference[i][j] = array1[i][j];
            }
        }
    }

    return difference;
}
template std::vector<std::vector<int>> subtract_array<int, int, int>(const std::vector<std::vector<int>>& array11, const std::vector<int>& array2);

template <typename T, typename U, typename V>
std::vector<std::vector<T>> modulo_array(const std::vector<std::vector<U>>& array1, const V& modulo)
{
    std::vector<std::vector<T>> result{ new_empty_array<T, U>(array1) };

    for (int i{ 0 }; i < array1.size(); ++i)
    {
        for (int j{ 0 }; j < array1[i].size(); ++j)
        {
            if ((array1[i][j] > letters::min_letter) && (array1[i][j] < (letters::max_letter + constants::g_max_pi_digit)) && (array1[i][j] > constants::g_alphabet_length))
            {
                result[i][j] = array1[i][j] % modulo;
            }

            else
            {
                result[i][j] = array1[i][j];
            }
        }
    }

    return result;
}
template std::vector<std::vector<int>> modulo_array<int, int, int>(const std::vector<std::vector<int>>& array1, const int& modulo);

template <typename T, typename U, typename V>
std::vector<std::vector<T>> modulo_array_reverse(const std::vector<std::vector<U>>& array1, const V& modulo)
{
    std::vector<std::vector<T>> result{ new_empty_array<T, U>(array1) };

    for (int i{ 0 }; i < array1.size(); ++i)
    {
        for (int j{ 0 }; j < array1[i].size(); ++j)
        {
            if (array1[i][j] <= letters::min_letter)
            {
                result[i][j] = array1[i][j] + modulo;
            }

            else
            {
                result[i][j] = array1[i][j];
            }
        }
    }

    return result;
}
template std::vector<std::vector<int>> modulo_array_reverse<int, int, int>(const std::vector<std::vector<int>>& array1, const int& modulo);
