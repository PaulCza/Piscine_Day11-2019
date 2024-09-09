/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** sqfkzfsd
*/

int my_is_prime(int nb)
{
    int b;
    int c;
    
    if (nb <= 1) {
        return (0);
    }
    for (b = 2; b <= nb / 2; b++) {
        if ((nb % b) == 0){
            c = 1;
        }
    }
    if (c = 0) {
        return (1);
    } else {
        return (0);
        }
}
