# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masebast <masebast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 12:46:16 by masebast          #+#    #+#              #
#    Updated: 2022/05/26 17:45:09 by masebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client
CC = gcc
LIBFT = libft/libft.a
FLAG = -Wall -Wextra -Werror

all:		$(SERVER) $(CLIENT)

$(LIBFT):		
			make -C libft

$(SERVER):	$(LIBFT)
			$(CC) $(FLAG) server.c -o $(SERVER) $(LIBFT)

$(CLIENT):	$(LIBFT)
			$(CC) $(FLAG) client.c -o $(CLIENT) $(LIBFT)

clean:		
			rm -f server
			rm -f client

fclean:		clean
			make fclean -C libft

re:			fclean all

.PHONY:		all clean fclean re