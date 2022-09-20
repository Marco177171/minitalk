# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masebast <masebast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 09:14:53 by masebast          #+#    #+#              #
#    Updated: 2022/05/17 16:36:25 by masebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \
ft_lstmap.c

BONUS = ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstclear.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstlast.c \
ft_lstnew.c \
ft_lstsize.c

OBJS = $(SRCS:.c=.o)

OBJSBONUS = $(BONUS:.c=.o)

PRINTF_OBJS = ft_printf/*.o

GNL_SRCS = get_next_line/*.c

GNL_OBJS = get_next_line.o \
get_next_line2.o \
get_next_line_bonus.o \
get_next_line_utils.o \
get_next_line_utils_bonus.o

HDRS = libft.h

FLAGS = -Wall -Wextra -Werror

$(NAME):
		make -C ft_printf
		gcc -c $(FLAGS) -I $(HDRS) $(SRCS)
		gcc -c $(FLAGS) $(GNL_SRCS) -D BUFFER_SIZE=42
		ar rc $(NAME) $(OBJS) $(PRINTF_OBJS) $(GNL_OBJS)
		ranlib $(NAME)

all:	$(NAME)

bonus:
		make -C ft_printf
		gcc -c $(FLAGS) -I $(HDRS) $(SRCS) $(BONUS)
		gcc -c $(FLAGS) $(GNL_SRCS) -D BUFFER_SIZE=42
		ar rc $(NAME) $(OBJS) $(OBJSBONUS) $(PRINTF_OBJS) $(GNL_OBJS)
		ranlib $(NAME)

clean:
		rm -f $(OBJS) $(OBJSBONUS) $(PRINTF_OBJS) $(GNL_OBJS)

fclean:     clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
