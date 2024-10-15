NAME = megaphone
SRC = megaphone.cpp
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = g++
PRINTF = printf
DIC_OBJ = obj
OBJ = $(addprefix $(DIC_OBJ)/, $(SRC:.cpp=.o))

all : $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $@
	@$(PRINTF) "PROCESO TERMINADO\n"

$(DIC_OBJ)/%.o:	%.cpp | $(DIC_OBJ)
	@$(CC) -c $< -o $@

$(DIC_OBJ):
	@mkdir -p $(DIC_OBJ)

clean:
	@$(RM) -r $(DIC_OBJ)
	@$(PRINTF) "OBJETOS ELIMINADOS\n"

fclean: clean
	@$(RM) $(NAME)

re: fclean
	@make all