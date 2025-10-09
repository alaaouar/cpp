NAME=Bureaucrat
SRC=Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
CPPFLAGS= -Wall -Werror -Wextra -std=c++98
CXX= c++
OBJ= ${SRC:.cpp=.o}
TREE= *_shrubbery

all: ${NAME}

${NAME}: ${OBJ}
	${CXX} ${CPPFLAGS} ${SRC} -o ${NAME}

clean : 
	rm -rf ${OBJ} ${TREE}

fclean: 
	rm -rf ${OBJ} ${NAME} ${TREE}

re: fclean all