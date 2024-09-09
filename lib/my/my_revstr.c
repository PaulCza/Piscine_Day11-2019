/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** dfezfzesfe
*/

char *my_revstr(char *str)
{
    char a[1000];
    int debut; int fin; int count = 0; int i;
    i = 0;

    while (str[count] != '\0') {
    count = count + 1;
    fin = count - 1;
    }
    while (str[i] != '\0') {
    a[i] = str[i];
    i = i + 1;
    }
    for (debut = 0; debut < count; debut++){
    str[debut] = a[fin];
    fin = fin - 1;
    }
    return str;
}
