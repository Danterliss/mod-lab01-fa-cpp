// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>
#include <cmath>

unsigned int faStr1(const char *str) {
    int count = 0;
    bool inWord = false;
    bool hasD = false;
    while (*str) {
        if (*str != ' ' && inWord == false) {
            hasD = false;
            if (isdigit(*str)) hasD = true;
            inWord = true;
        } else if (inWord == true && isdigit(*str)) {
            hasD = true;
        } else if (*str == ' ' && inWord == true) {
            inWord = false;
            if (!hasD) count++;
        }
        str++;
    }
    return count;
}

unsigned int faStr2(const char *str) {
    int count = 0;
    bool inWord = false;
    bool plusFormat = true;
    while (*str) {
        if (*str != ' ' && inWord == false) {
            plusFormat = false;
            if (isupper(*str)) plusFormat = true;
            inWord = true;
        } else if (inWord == true && *str != ' ' && !islower(*str)) {
            plusFormat = false;
        } else if (*str == ' ' && inWord == true) {
            inWord = false;
            if (plusFormat) count++;
        }
        str++;
    }
    return count;
}

unsigned int faStr3(const char *str) {
    return 0;
}
