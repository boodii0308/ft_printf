# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/29 15:53:53 by tebatsai          #+#    #+#              #
#    Updated: 2019/09/06 15:06:46 by tebatsai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDES = -I$(HEADER_DIRECTORY) -I$(LIBFT_DIRECTORY)

LIBFT_DIRECTORY = ./libft/
LIBFT = $(LIBFT_DIRECTORY)libft.a

HEADER_DIRECTORY = ./includes/
HEADER_LIST = ft_printf.h
HEADER = $(addprefix $(HEADER_DIRECTORY), $(HEADER_LIST))

SRCS_DIRECTORY = ./srcs/
SRCS_LIST = make_hex.c make_octal.c\
			make_digit.c make_length.c\
			make_char.c make_string.c\
			make_pointer.c make_unsign.c\
			ft_printf.c ft_get.c ft_should.c
SRCS = $(addprefix $(SRCS_DIRECTORY), $(SRCS_LIST))

OBJECTS_DIRECTORY = object/
OBJECT_LIST = $(patsubst %.c, %.o, $(SRCS_LIST))
OBJECTS = $(addprefix $(OBJECTS_DIRECTORY), $(OBJECT_LIST))

CC = gcc
FLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME):$(OBJECTS_DIRECTORY) $(OBJECTS)
	@make -C $(LIBFT_DIRECTORY)
	@cp $(LIBFT) ./$(NAME)
	@ar rcs $(NAME) $(OBJECTS)
	@ranlib $(NAME)

$(OBJECTS_DIRECTORY):
	@mkdir -p $(OBJECTS_DIRECTORY)

$(OBJECTS_DIRECTORY)%.o :$(SRCS_DIRECTORY)%.c $(HEADER)
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@

norm:
	norminette $(SRCS) $(HEADER)

clean:
	@/bin/rm -rf $(OBJECTS_DIRECTORY)
	@make -C $(LIBFT_DIRECTORY) clean

fclean: clean
	@/bin/rm -rf $(NAME)
	@make fclean -C $(LIBFT_DIRECTORY)

re: fclean all
