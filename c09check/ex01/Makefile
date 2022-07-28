SRCS 		= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c 
OBJS 		= ${SRCS:.c=.o}
CFLAGS		= -Wall -Wextra -Werror
CC			= gcc
INC			= -I./includes
SRC_DIRS    =./srcs
NAME 		= libft.a 
RM          = rm -f
COM			= ar rc

.c.o:		
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} ${INC}

${NAME}: 	${OBJS:%=${SRC_DIRS}/%}
			${COM} ${NAME} ${OBJS:%=${SRC_DIRS}/%}
			
all:		${NAME}

clean:		
			${RM} ${OBJS:%=${SRC_DIRS}/%}

fclean:		clean
			${RM} ${NAME}

re:         fclean all
