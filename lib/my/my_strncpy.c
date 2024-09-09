/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** dazdfzaf
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;
    i = 0;

    while (i < n || dest[i] != '\0' ) {
        dest[i] = src[i];
        i = i + 1;
    }    
    return dest;
}
