##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## A Makefile that compiles the libmy.
##

INCLUDES	=	../../include/my.h

OTHERS	=	./others/

STDLIB	=	./stdlib/

UNISTD	=	./unistd/

STDARG	=	./stdarg/

SRC	=	$(OTHERS)a_sort_int.c	\
		$(OTHERS)n_convert_s.c	\
		$(OTHERS)n_prime.c	\
		$(OTHERS)n_isprime.c	\
		$(OTHERS)n_power.c	\
		$(OTHERS)n_revbase.c	\
		$(OTHERS)n_size.c	\
		$(OTHERS)s_acompare.c	\
		$(OTHERS)s_compare.c	\
		$(OTHERS)s_copy.c	\
		$(OTHERS)s_lower.c	\
		$(OTHERS)s_upper.c	\
		$(OTHERS)s_ncompare.c	\
		$(OTHERS)s_ncopy.c	\
		$(OTHERS)s_pattern.c	\
		$(OTHERS)s_reverse.c	\
		$(OTHERS)s_search.c	\
		$(OTHERS)s_size.c	\
		$(OTHERS)s_count.c	\
		$(OTHERS)a_size.c	\
		$(STDLIB)l_add.c	\
		$(STDLIB)l_convert_a.c	\
		$(STDLIB)l_display.c	\
		$(STDLIB)l_free.c	\
		$(STDLIB)l_merge.c	\
		$(STDLIB)l_size.c	\
		$(STDLIB)l_remove.c	\
		$(STDLIB)l_reverse.c	\
		$(STDLIB)l_sort.c	\
		$(STDLIB)n_base.c	\
		$(STDLIB)s_convert_f.c	\
		$(STDLIB)s_convert_n.c	\
		$(STDLIB)s_dup.c	\
		$(STDLIB)s_extract.c	\
		$(STDLIB)s_merge.c	\
		$(STDLIB)s_remove.c	\
		$(STDLIB)a_free.c	\
		$(STDLIB)a_convert_s.c	\
		$(STDLIB)a_dup.c	\
		$(UNISTD)a_display_n.c	\
		$(UNISTD)a_display_s.c	\
		$(UNISTD)my_putchar.c	\
		$(UNISTD)my_putstr.c	\
		$(UNISTD)my_putnbr.c	\
		$(STDARG)my_printf.c	\

OBJ_OTHERS	=	a_sort_int.o	\
				n_convert_s.o	\
				n_prime.o	\
				n_isprime.o	\
				n_power.o	\
				n_revbase.o	\
				n_size.o	\
				s_acompare.o	\
				s_compare.o	\
				s_copy.o	\
				s_lower.o	\
				s_upper.o	\
				s_ncompare.o	\
				s_ncopy.o	\
				s_pattern.o	\
				s_reverse.o	\
				s_search.o	\
				s_size.o	\
				s_count.o	\
				a_size.o	\

OBJ_STDLIB	=	l_add.o	\
				l_convert_a.o	\
				l_display.o	\
				l_free.o	\
				l_merge.o	\
				l_size.o	\
				l_remove.o	\
				l_reverse.o	\
				l_sort.o	\
				n_base.o	\
				s_convert_f.o	\
				s_convert_n.o	\
				s_dup.o	\
				s_extract.o	\
				s_merge.o	\
				s_remove.o	\
				a_free.o	\
				a_convert_s.o	\
				a_dup.o	\

OBJ_UNISTD	=	a_display_n.o	\
				a_display_s.o	\
				my_putchar.o	\
				my_putstr.o	\
				my_putnbr.o	\

OBJ_STDARG	=	my_printf.o	\

NAME	=	libmy.a

all:
	gcc -c $(SRC) -include $(INCLUDES)
	ar rc $(NAME) $(OBJ_OTHERS) $(OBJ_STDARG) $(OBJ_STDLIB) $(OBJ_UNISTD)
	find -name "*.o" -delete -o -name "*.gch" -delete
	cp $(NAME) ../..

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
