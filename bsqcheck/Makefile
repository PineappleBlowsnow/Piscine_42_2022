SRCS		= ${*.c}
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
mp: mpgene
	perl mpgene 20 30 0.5 > map.txt
