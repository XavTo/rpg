/*
** EPITECH PROJECT, 2020
** blib
** File description:
** 24/03/2021
*/

#include "bstring.h"

int bstrcmp(const char *s1, const char *s2)
{
    int i = 0;

    for (; s1[i] == s2[i] && s1[i + 1] && s2[i + 1]; i++);
    return s1[i] - s2[i];
}
