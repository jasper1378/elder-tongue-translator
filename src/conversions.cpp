#include "conversions.h"

#include "array_tools.h"
#include "enums.h"

#include <iostream>
#include <string>
#include <vector>

std::vector<std::vector<char>> phrase_to_array(const std::string& phrase)
{
    std::vector<std::vector<char>> phrase_array;
    std::vector<char> current_word;

    for (int i{ 0 }; i < phrase.size(); ++i)
    {
        if (phrase[i] == ' ')
        {
            phrase_array.push_back(current_word);
            current_word.clear();
        }
        else
        {
            current_word.push_back(phrase[i]);
        }
    }
    phrase_array.push_back(current_word);
    current_word.clear();

    return phrase_array;
}

std::string array_to_phrase(const std::vector<std::vector<char>>& phrase_array)
{
    std::vector<char> phrase_array_1D;

    for (int i{ 0 }; i < phrase_array.size(); ++i)
    {
        for (int j{ 0 }; j < phrase_array[i].size(); ++j)
        {
            phrase_array_1D.push_back(phrase_array[i][j]);
        }

        if (i != (phrase_array.size() - 1))
        {
            phrase_array_1D.push_back(' ');
        }
    }

    std::string phrase{ phrase_array_1D.begin(), phrase_array_1D.end() };

    return phrase;
}

std::vector<std::vector<int>> char_to_int(const std::vector<std::vector<char>>& char_array)
{
    std::vector<std::vector<int>> int_array{ new_empty_array<int, char>(char_array) };

    for (int i{ 0 }; i < char_array.size(); ++i)
    {
        for (int j{ 0 }; j < char_array[i].size(); ++j)
        {
            switch (char_array[i][j])
            {
                case 'a':
                case 'A':
                    int_array[i][j] = letters::a;
                    break;
                case 'b':
                case 'B':
                    int_array[i][j] = letters::b;
                    break;
                case 'c':
                case 'C':
                    int_array[i][j] = letters::c;
                    break;
                case 'd':
                case 'D':
                    int_array[i][j] = letters::d;
                    break;
                case 'e':
                case 'E':
                    int_array[i][j] = letters::e;
                    break;
                case 'f':
                case 'F':
                    int_array[i][j] = letters::f;
                    break;
                case 'g':
                case 'G':
                    int_array[i][j] = letters::g;
                    break;
                case 'h':
                case 'H':
                    int_array[i][j] = letters::h;
                    break;
                case 'i':
                case 'I':
                    int_array[i][j] = letters::i;
                    break;
                case 'j':
                case 'J':
                    int_array[i][j] = letters::j;
                    break;
                case 'k':
                case 'K':
                    int_array[i][j] = letters::k;
                    break;
                case 'l':
                case 'L':
                    int_array[i][j] = letters::l;
                    break;
                case 'm':
                case 'M':
                    int_array[i][j] = letters::m;
                    break;
                case 'n':
                case 'N':
                    int_array[i][j] = letters::n;
                    break;
                case 'o':
                case 'O':
                    int_array[i][j] = letters::o;
                    break;
                case 'p':
                case 'P':
                    int_array[i][j] = letters::p;
                    break;
                case 'q':
                case 'Q':
                    int_array[i][j] = letters::q;
                    break;
                case 'r':
                case 'R':
                    int_array[i][j] = letters::r;
                    break;
                case 's':
                case 'S':
                    int_array[i][j] = letters::s;
                    break;
                case 't':
                case 'T':
                    int_array[i][j] = letters::t;
                    break;
                case 'u':
                case 'U':
                    int_array[i][j] = letters::u;
                    break;
                case 'v':
                case 'V':
                    int_array[i][j] = letters::v;
                    break;
                case 'w':
                case 'W':
                    int_array[i][j] = letters::w;
                    break;
                case 'x':
                case 'X':
                    int_array[i][j] = letters::x;
                    break;
                case 'y':
                case 'Y':
                    int_array[i][j] = letters::y;
                    break;
                case 'z':
                case 'Z':
                    int_array[i][j] = letters::z;
                    break;

                case '1':
                    int_array[i][j] = numbers::number_1;
                    break;
                case '2':
                    int_array[i][j] = numbers::number_2;
                    break;
                case '3':
                    int_array[i][j] = numbers::number_3;
                    break;
                case '4':
                    int_array[i][j] = numbers::number_4;
                    break;
                case '5':
                    int_array[i][j] = numbers::number_5;
                    break;
                case '6':
                    int_array[i][j] = numbers::number_6;
                    break;
                case '7':
                    int_array[i][j] = numbers::number_7;
                    break;
                case '8':
                    int_array[i][j] = numbers::number_8;
                    break;
                case '9':
                    int_array[i][j] = numbers::number_9;
                    break;
                case '0':
                    int_array[i][j] = numbers::number_0;
                    break;

                case '!':
                    int_array[i][j] = special_characters::exclamation;
                    break;
                case '"':
                    int_array[i][j] = special_characters::double_quote;
                    break;
                case '#':
                    int_array[i][j] = special_characters::octothorpe;
                    break;
                case '$':
                    int_array[i][j] = special_characters::dollar;
                    break;
                case '%':
                    int_array[i][j] = special_characters::percent;
                    break;
                case '&':
                    int_array[i][j] = special_characters::ampersand;
                    break;
                case '\'':
                    int_array[i][j] = special_characters::single_quote;
                    break;
                case '(':
                    int_array[i][j] = special_characters::left_parenthesis;
                    break;
                case ')':
                    int_array[i][j] = special_characters::right_parenthesis;
                    break;
                case '*':
                    int_array[i][j] = special_characters::asterisk;
                    break;
                case '+':
                    int_array[i][j] = special_characters::plus;
                    break;
                case ',':
                    int_array[i][j] = special_characters::comma;
                    break;
                case '-':
                    int_array[i][j] = special_characters::dash;
                    break;
                case '.':
                    int_array[i][j] = special_characters::period;
                    break;
                case '/':
                    int_array[i][j] = special_characters::slash;
                    break;
                case ':':
                    int_array[i][j] = special_characters::colon;
                    break;
                case ';':
                    int_array[i][j] = special_characters::semicolon;
                    break;
                case '<':
                    int_array[i][j] = special_characters::less_than;
                    break;
                case '=':
                    int_array[i][j] = special_characters::equal;
                    break;
                case '>':
                    int_array[i][j] = special_characters::greater_than;
                    break;
                case '?':
                    int_array[i][j] = special_characters::question;
                    break;
                case '@':
                    int_array[i][j] = special_characters::at;
                    break;
                case '[':
                    int_array[i][j] = special_characters::left_square_bracket;
                    break;
                case '\\':
                    int_array[i][j] = special_characters::backslash;
                    break;
                case ']':
                    int_array[i][j] = special_characters::right_square_bracket;
                    break;
                case '^':
                    int_array[i][j] = special_characters::caret;
                    break;
                case '_':
                    int_array[i][j] = special_characters::underscore;
                    break;
                case '`':
                    int_array[i][j] = special_characters::tick;
                    break;
                case '{':
                    int_array[i][j] = special_characters::left_curly_bracket;
                    break;
                case '|':
                    int_array[i][j] = special_characters::pipe;
                    break;
                case '}':
                    int_array[i][j] = special_characters::right_curly_bracket;
                    break;
                case '~':
                    int_array[i][j] = special_characters::tilde;
                    break;

                default:
                    std::cerr << "Unsupported character!\n";
                    std::exit(1);
                    break;
            }
        }
    }

    return int_array;
}

std::vector<std::vector<char>> int_to_char(const std::vector<std::vector<int>>& int_array)
{
    std::vector<std::vector<char>> char_array{ new_empty_array<char, int>(int_array) };

    for (int i{ 0 }; i < int_array.size(); ++i)
    {
        for (int j{ 0 }; j < int_array[i].size(); ++j)
        {
            switch (int_array[i][j])
            {
                case letters::a:
                    char_array[i][j] = 'a';
                    break;
                case letters::b:
                    char_array[i][j] = 'b';
                    break;
                case letters::c:
                    char_array[i][j] = 'c';
                    break;
                case letters::d:
                    char_array[i][j] = 'd';
                    break;
                case letters::e:
                    char_array[i][j] = 'e';
                    break;
                case letters::f:
                    char_array[i][j] = 'f';
                    break;
                case letters::g:
                    char_array[i][j] = 'g';
                    break;
                case letters::h:
                    char_array[i][j] = 'h';
                    break;
                case letters::i:
                    char_array[i][j] = 'i';
                    break;
                case letters::j:
                    char_array[i][j] = 'j';
                    break;
                case letters::k:
                    char_array[i][j] = 'k';
                    break;
                case letters::l:
                    char_array[i][j] = 'l';
                    break;
                case letters::m:
                    char_array[i][j] = 'm';
                    break;
                case letters::n:
                    char_array[i][j] = 'n';
                    break;
                case letters::o:
                    char_array[i][j] = 'o';
                    break;
                case letters::p:
                    char_array[i][j] = 'p';
                    break;
                case letters::q:
                    char_array[i][j] = 'q';
                    break;
                case letters::r:
                    char_array[i][j] = 'r';
                    break;
                case letters::s:
                    char_array[i][j] = 's';
                    break;
                case letters::t:
                    char_array[i][j] = 't';
                    break;
                case letters::u:
                    char_array[i][j] = 'u';
                    break;
                case letters::v:
                    char_array[i][j] = 'v';
                    break;
                case letters::w:
                    char_array[i][j] = 'w';
                    break;
                case letters::x:
                    char_array[i][j] = 'x';
                    break;
                case letters::y:
                    char_array[i][j] = 'y';
                    break;
                case letters::z:
                    char_array[i][j] = 'z';
                    break;

                case numbers::number_1:
                    char_array[i][j] = '1';
                    break;
                case numbers::number_2:
                    char_array[i][j] = '2';
                    break;
                case numbers::number_3:
                    char_array[i][j] = '3';
                    break;
                case numbers::number_4:
                    char_array[i][j] = '4';
                    break;
                case numbers::number_5:
                    char_array[i][j] = '5';
                    break;
                case numbers::number_6:
                    char_array[i][j] = '6';
                    break;
                case numbers::number_7:
                    char_array[i][j] = '7';
                    break;
                case numbers::number_8:
                    char_array[i][j] = '8';
                    break;
                case numbers::number_9:
                    char_array[i][j] = '9';
                    break;
                case numbers::number_0:
                    char_array[i][j] = '0';
                    break;

                case special_characters::exclamation:
                    char_array[i][j] = '!';
                    break;
                case special_characters::double_quote:
                    char_array[i][j] = '"';
                    break;
                case special_characters::octothorpe:
                    char_array[i][j] = '#';
                    break;
                case special_characters::dollar:
                    char_array[i][j] = '$';
                    break;
                case special_characters::percent:
                    char_array[i][j] = '%';
                    break;
                case special_characters::ampersand:
                    char_array[i][j] = '&';
                    break;
                case special_characters::single_quote:
                    char_array[i][j] = '\'';
                    break;
                case special_characters::left_parenthesis:
                    char_array[i][j] = '(';
                    break;
                case special_characters::right_parenthesis:
                    char_array[i][j] = ')';
                    break;
                case special_characters::asterisk:
                    char_array[i][j] = '*';
                    break;
                case special_characters::plus:
                    char_array[i][j] = '+';
                    break;
                case special_characters::comma:
                    char_array[i][j] = ',';
                    break;
                case special_characters::dash:
                    char_array[i][j] = '-';
                    break;
                case special_characters::period:
                    char_array[i][j] = '.';
                    break;
                case special_characters::slash:
                    char_array[i][j] = '/';
                    break;
                case special_characters::colon:
                    char_array[i][j] = ':';
                    break;
                case special_characters::semicolon:
                    char_array[i][j] = ';';
                    break;
                case special_characters::less_than:
                    char_array[i][j] = '<';
                    break;
                case special_characters::equal:
                    char_array[i][j] = '=';
                    break;
                case special_characters::greater_than:
                    char_array[i][j] = '>';
                    break;
                case special_characters::question:
                    char_array[i][j] = '?';
                    break;
                case special_characters::at:
                    char_array[i][j] = '@';
                    break;
                case special_characters::left_square_bracket:
                    char_array[i][j] = '[';
                    break;
                case special_characters::backslash:
                    char_array[i][j] = '\\';
                    break;
                case special_characters::right_square_bracket:
                    char_array[i][j] = ']';
                    break;
                case special_characters::caret:
                    char_array[i][j] = '^';
                    break;
                case special_characters::underscore:
                    char_array[i][j] = '_';
                    break;
                case special_characters::tick:
                    char_array[i][j] = '`';
                    break;
                case special_characters::left_curly_bracket:
                    char_array[i][j] = '{';
                    break;
                case special_characters::pipe:
                    char_array[i][j] = '|';
                    break;
                case special_characters::right_curly_bracket:
                    char_array[i][j] = '}';
                    break;
                case special_characters::tilde:
                    char_array[i][j] = '~';
                    break;

                default:
                    std::cerr << "Unsupported character!\n";
                    std::exit(1);
                    break;
            }
        }
    }

    return char_array;
}

std::vector<std::vector<char>> check_if_upper(const std::vector<std::vector<char>>& no_check, const std::vector<std::vector<char>>& compare_to)
{
    std::vector<std::vector<char>> checked{ new_empty_array<char, char>(no_check) };

    for (int i{ 0 }; i < no_check.size(); ++i)
    {
        for (int j{ 0 }; j < no_check[i].size(); ++j)
        {
            if (std::isupper(compare_to[i][j]))
            {
                checked[i][j] = std::toupper(no_check[i][j]);
            }

            else
            {
                checked[i][j] = no_check[i][j];
            }
        }
    }

    return checked;
}
