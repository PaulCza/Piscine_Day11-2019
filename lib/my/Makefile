##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oh bordel
##

SRC	=	my_compute_power_rec.c	\
		my_showstr.c		\
		my_str_isupper.c	\
		my_compute_square_root.c \
		my_show_word_array.c	\
		my_strlen.c		\
		my_find_prime_sup.c	\
		my_sort_int_array.c	\
		my_strlowcase.c		\
		my_getnbr.c		\
		my_strcapitalize.c	\
		my_strncat.c		\
		my_isneg.c		\
		my_strcat.c		\
		my_strncmp.c		\
		my_is_prime.c		\
		my_strcmp.c		\
		my_strncpy.c		\
		my_putchar.c		\
		my_strcpy.c		\
		my_strstr.c		\
		my_put_nbr.c		\
		my_str_isalpha.c	\
		my_str_to_word_array.c	\
		my_putstr.c		\
		my_str_islower.c	\
		my_strupcase.c		\
		my_revstr.c		\
		my_str_isnum.c		\
		my_swap.c		\
		my_showmem.c		\
		my_str_isprintable.c	\

NAME	= libmy.a

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../
	cp my.h ../../include/
	cp mylist.h ../../include/
	rm -f *.o

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

