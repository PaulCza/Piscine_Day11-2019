/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** dqsdq
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int taille;
    int i;
    i = 0;

    taille = my_strlen(dest);
    while(i < nb && src[i]) {
    dest[taille + i] = src[i];
    i = i + 1;
    }
    dest[taille + i] = '\0';
    my_putstr(dest);
    return dest;
}
