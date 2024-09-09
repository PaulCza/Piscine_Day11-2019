/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** zadzf
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int c = 0;
    int a = 0;
    int d;
    while(src[i ]!= '\0') {
        i = i + 1;
    }
    while(src[a] != '\0') {
        a = a + 1;
    }
    d = a + 1;
    while(i <= d) {
        dest[i] = src[c];
        i = i + 1;
        c = c + 1;
    }
    return dest;
}
