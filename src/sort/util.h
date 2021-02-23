#pragma once
#include <strlib.h>
#include <mydefines.h>
#include "../data.h"

#define T Record

namespace Sort
{
    template<typename Iterator, typename Comparator>
    bool is_sorted(Iterator begin, Iterator end, Comparator compare_func)
    {
        if (begin == end || begin + 1 == end || begin + 2 == end) return true;

        auto current = begin;

        while (current + 1 != end)
        {
            if (compare_func(&*current, &*(current + 1)) > 0)
            {
                return false;
            }
            current++;
        }
        return true;
    }
    
    s32 compare_ints(int* a, int* b)
    {
        printf("Comparing (%i) to (%i)\n", *a, *b);
        return *a - *b;
    }
}
#undef T