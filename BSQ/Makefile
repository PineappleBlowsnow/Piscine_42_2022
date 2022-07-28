SRCS		= ft_putchar.c    ft_read_map.c  ft_str_is_numeric.c    ft_strcmp.c   ft_swap.c\
ft_putstr.c     ft_solve.c     ft_str_is_printable.c  main.c\
ft_read_data.c  ft_split.c     ft_strcat.c            ft_strlen.c
CFLAGS		= -Wall -Wextra -Werror
CC			= gcc
INC			= -I./includes
SRC_DIRS 	= ./srcs
BUILD_DIR   = ./builds
RM= rm -rf
OBJS =${SRCS:.c=.o}
NAME = bsq

${BUILD_DIR}/%.o:${SRC_DIRS}/%.c
	mkdir -p ${BUILD_DIR}
	${CC} ${CFLAGS}  -c $< -o $@ ${INC}

all: ${NAME}

${NAME}: ${OBJS:%=${BUILD_DIR}/%}
		${CC} ${CFLAGS} -o $@ ${OBJS:%=${BUILD_DIR}/%}
clean: 
	${RM} ${OBJS:%=${BUILD_DIR}/%}
fclean: clean
	${RM} ${NAME}
re: fclean all
mp: generator.pl
	perl generator.pl 20 30 0.5 > map.txt
