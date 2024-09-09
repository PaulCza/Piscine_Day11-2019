/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** popopo
*/

int my_isneg(int n)
{
    if (n >= 0) {
        char Positive = 'P';
        my_putchar(Positive);
    } else {
        
        char Negative = 'N';
        my_putchar(Negative);
    }
}
