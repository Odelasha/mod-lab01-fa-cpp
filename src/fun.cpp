// Copyright 2022 UNN-IASR
#include "math.h"
#include "fun.h"

unsigned int faStr1(const char* str) {
    unsigned int count = 0;
    for (size_t i = 0; str[i] != '\0'; ++i) {
        if (str[i] != ' ') {
            bool flag = true;
            while (str[i] != ' ' && str[i] != '\0') {
                if (str[i] >= '0' && str[i] <= '9') {
                    flag = false;
                }
                ++i;
            }
            if (flag)
                ++count;
        }
    }
    return count;
}

unsigned int faStr2(const char* str) {
    unsigned int count = 0;
    for (size_t i = 0; str[i] != '\0'; ++i) {
        if (str[i] != ' ') {
            bool flag = true;
            if (str[i] < 'A' || str[i] > 'Z') {
                flag = false;
            }
            ++i;
            while (str[i] != ' ' && str[i] != '\0') {
                if (str[i] < 'a' || str[i] > 'z')
                    flag = false;
                ++i;
            }
            if (flag)
                ++count;
        }
    }
    return count;
}

unsigned int faStr3(const char* str) {
    unsigned int count = 0;
    float len = 0;
    for (size_t i = 0; str[i] != '\0'; ++i) {
        if (str[i] != ' ') {
            while (str[i] != ' ' && str[i] != '\0') {
                ++len;
                ++i;
            }
            ++count;
        }
    }
    return (unsigned int)roundf(len / count);
}
