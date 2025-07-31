# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pboorana <pboorana@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/27 20:47:14 by pboorana          #+#    #+#              #
#    Updated: 2025/07/27 21:07:33 by pboorana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
C_FLAGS =  -Wall -Wextra -Werror 

NAME := rush-02

$(NAME):
	$(CC) $(CFLAGS) main.c basic_libraly_1.c basic_libraly_2.c -o $(NAME)

clean:
	rm -f $(SRCS:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all