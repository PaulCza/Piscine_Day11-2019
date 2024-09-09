/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** nb
*/
void my_swap(int *a, int *b)
{
    int test = *a;
    *a = *b;
    *b = test;
}