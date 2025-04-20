NAME = I_don’t_want_to_set_the_world_on_fire

SRC = cpp_files/Animal.cpp \
	  cpp_files/Cat.cpp \
	  cpp_files/Dog.cpp \
	  cpp_files/WrongAnimal.cpp \
	  cpp_files/WrongCat.cpp \
	  cpp_files/Brain.cpp \
	  Main.cpp

OBJ = ${SRC:.cpp=.o}

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${CPPFLAGS} ${SRC} -o ${NAME}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re                          