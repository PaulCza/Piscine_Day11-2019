/*
** EPITECH PROJECT, 2019
** sdszfzkf
** File description:
** dkqshfdegre
*/

int my_compute_square_root(int nb)
{
    int root = nb;
    int test = 1;
    int limite = 0.001;

    while ((root - test) > limite){
        root = (root + test)/2;
        test = nb/root;
    }
    if ((root * root) != nb){
        return (0);
    }
    return root;
}