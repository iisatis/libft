# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pflorent <pflorent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/09 14:16:58 by pflorent          #+#    #+#              #
#    Updated: 2021/01/12 18:47:25 by pflorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_is.c ft_itoa.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_put_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
		ft_strndup.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_to.c

BONUS	= ft_lstnew.c ft_lstadd_front.c

HEAD	= libft.h

OBJS	= ${SRCS:.c=.o}

OBJSBONUS	= ${BONUS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

bonus:		${OBJS} ${OBJSBONUS}
			ar rc ${NAME} ${OBJS} ${OBJSBONUS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJSBONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
