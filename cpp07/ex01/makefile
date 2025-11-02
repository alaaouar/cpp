NAME=iter
SRC=main.cpp
CPPFLAGS= -Wall -Werror -Wextra -std=c++98
CXX= c++
OBJ= ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CPPFLAGS} ${SRC} -o ${NAME}

clean : 
	rm -rf ${OBJ}

fclean: 
	rm -rf ${OBJ} ${NAME}

re: fclean all