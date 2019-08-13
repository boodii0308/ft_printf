# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tebatsai <tebatsai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/29 15:53:53 by tebatsai          #+#    #+#              #
#    Updated: 2019/08/11 12:06:20 by tebatsai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = print

INCLUDES = -I$(HEADER_DIRECTORY) -I$(LIBFT_DIRECTORY)

LIBFT_DIRECTORY = ./libft/
LIBFT = $(LIBFT_DIRECTORY)libft.a

HEADER_DIRECTORY = ./includes/
HEADER_LIST = ft_printf.h
HEADER = $(addprefix $(HEADER_DIRECTORY), $(HEADER_LIST))

SRCS_DIRECTORY = ./srcs/
SRCS_LIST = main.c
SRCS = $(addprefix $(SRCS_DIRECTORY), $(SRCS_LIST))

OBJECTS_DIRECTORY = build/
OBJECT_LIST = $(patsubst %.c, %.o, $(SRCS_LIST))
OBJECTS = $(addprefix $(OBJECTS_DIRECTORY), $(OBJECT_LIST))

CC = gcc
FLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME):$(LIBFT) $(OBJECTS_DIRECTORY) $(OBJECTS)
	@$(CC) $(FLAGS) $(LIBFT) $(INCLUDES) $(OBJECTS) -o $(NAME)

$(OBJECTS_DIRECTORY):
	mkdir -p $(OBJECTS_DIRECTORY)

$(OBJECTS_DIRECTORY)%.o :$(SRCS_DIRECTORY)%.c $(HEADER)
	@$(CC) $(FLAGS) -g -c $(INCLUDES) $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIRECTORY)

norm:
	norminette $(SRCS) $(HEADER)

clean:
	make -C $(LIBFT_DIRECTORY) clean
	/bin/rm -rf $(OBJECTS_DIRECTORY)

fclean: clean
	/bin/rm -rf $(LIBFT)
	/bin/rm -rf $(NAME)

re: fclean all
