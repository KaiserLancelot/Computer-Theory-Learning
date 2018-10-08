//
// Created by kaiser on 18-10-8.
//

#include "../config.h"
#include <stddef.h>
#include <stdbool.h>

bool any_odd_one(unsigned x) {
    for (size_t i = 1; i < INT_BIT; i += 2) {
        if (((x >> i) & 1) == 0)
            return false;
    }
    return true;
}