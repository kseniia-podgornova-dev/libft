# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpodgorn <kpodgorn@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/13 23:03:06 by kpodgorn          #+#    #+#              #
#    Updated: 2026/11/14 01:06:54 by kpodgorn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ************ VARIABLES ************ #

NAME	=	libft.a # Nome final da biblioteca

# Compilador e flags obrigatorias
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f # Variavel para remove forced

# Para copiar logo todos os ficheiros ls ft_*.c | pbcopy
SRCS	=	ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_toupper.c \


# Para transformar todos os ficheiros .c para .o (binario)
OBJS	=	$(SRCS:.c=.o)

# ************ RULES ************ #

all:		$(NAME)

$(NAME):	$(OBJS) # Cria a biblioteca estatica libft.a juntando todos os ficheiros .o compilados
			ar rcs $(NAME) $(OBJS) 
# comando ar (archiver) para empacotar todos os ficheiros numa unica biblioteca .a
# r (replace) insere ficheiros, substituindo versoes antigas se ja la estiveram
# c (create) cria o ficheiro libft.h
# s (symbol index) cria um indice interno para compilador encontrar as funcoes mais rapido

%.o:%.c # Compilation rule
			$(CC) $(CFLAGS) -c $< -o $@
# -c diz ao cc para compilar codigo sem procurar por uma funcao main
# $< atalho automatico para primeiro ficheiro ficheiro .c
# $@ atalho automatico para o ficheiro .o

clean:
			$(RM) $(OBJS)
			
fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re