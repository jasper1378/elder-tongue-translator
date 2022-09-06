#pragma once

#ifndef ENUMS_H
#define ENUMS_H

enum class translation_direction
{
    no_direction = 0,
    english_to_elder_tongue = 1,
    elder_tongue_to_english = 2,
};

namespace letters
{
    enum letters
    {
        min_letter = 0,
        a = 1,
        b = 2,
        c = 3,
        d = 4,
        e = 5,
        f = 6,
        g = 7,
        h = 8,
        i = 9,
        j = 10,
        k = 11,
        l = 12,
        m = 13,
        n = 14,
        o = 15,
        p = 16,
        q = 17,
        r = 18,
        s = 19,
        t = 20,
        u = 21,
        v = 22,
        w = 23,
        x = 24,
        y = 25,
        z = 26,
        max_letter = 27,
    };
};

namespace numbers
{
    enum numbers
    {
        min_number = 1000,
        number_1 = 1001,
        number_2 = 1002,
        number_3 = 1003,
        number_4 = 1004,
        number_5 = 1005,
        number_6 = 1006,
        number_7 = 1007,
        number_8 = 1008,
        number_9 = 1009,
        number_0 = 1010,
        max_number = 1011,
    };
};

namespace special_characters
{
    enum special_characters
    {
        min_character = 2000,
        exclamation = 2001,
        double_quote = 2002,
        octothorpe = 2003,
        dollar = 2004,
        percent = 2005,
        ampersand = 2006,
        single_quote = 2007,
        left_parenthesis = 2008,
        right_parenthesis = 2009,
        asterisk = 2010,
        plus = 2011,
        comma = 2012,
        dash = 2013,
        period = 2014,
        slash = 2015,
        colon = 2016,
        semicolon = 2017,
        less_than = 2018,
        equal = 2019,
        greater_than = 2020,
        question = 2021,
        at = 2022,
        left_square_bracket = 2023,
        backslash = 2024,
        right_square_bracket = 2025,
        caret = 2026,
        underscore = 2027,
        tick = 2028,
        left_curly_bracket = 2029,
        pipe = 2030,
        right_curly_bracket = 2031,
        tilde = 2032,
        max_character = 2033,
    };
};

#endif
