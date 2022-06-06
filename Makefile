##
## EPITECH PROJECT, 2022
## SFMLgame
## File description:
## Makefile
##

# -----------------------------------------------------------
# Target

NAME = Game

#------------------------------------------------------------
# COLOUR

CYAN = '\033[1;36m'
GREEN = '\033[1;32m'
RED = '\033[1;31m'
BLUE = '\033[1;34m'

RESET = '\033[0m'

#------------------------------------------------------------
# IN-MAKEFILE

CURR_RULE = all
CPP := g++

#------------------------------------------------------------
# SRC

SRCDIR := src/

SRC := main.cpp	\
	Rpg.cpp	\
	create_window.cpp	\
	while_open.cpp	\
	event.cpp
SRC := $(addprefix $(SRCDIR),$(SRC))

OBJ := $(SRC:%.cpp=%.o)

#------------------------------------------------------------
# FLAGS

CPPFLAGS = -I./include/ -Wall -Wextra -Wpedantic -lsfml-system -lsfml-window -lsfml-graphics -lsfml-audio -g3

#------------------------------------------------------------
# MAIN

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) $^ -c -o $@
	@echo -e $(BLUE)'compil : $(notdir $^) -> $(notdir $@)'$(RESET)

#------------------------------------------------------------
# Make the name

.PHONY: all
all: CURR_RULE = all
all: init $(OBJ)
	@$(MAKE) $(NAME) -s
	@echo -e $(GREEN)'-> [finished]: $(NAME): all'$(RESET)

$(NAME): CURR_RULE = $(NAME)
$(NAME): init $(OBJ)
	@$(CPP) $(OBJ) $(MAIN_OBJ) -o $(NAME) $(CPPFLAGS)
	@echo -e $(GREEN)'-> [finished]: $(NAME): $(NAME)'$(RESET)

#------------------------------------------------------------
# Clean

.PHONY : clean
clean:
	@$(RM) $(OBJ) $(TOBJ)
	@$(RM) $(TOBJ:.o=.gcno) $(TOBJ:.o=.gcda) $(OBJ:.o=.gcno) $(OBJ:.o=.gcda)
	@$(RM) vgcore.*

#------------------------------------------------------------
# fclean

.PHONY: fclean
fclean: CURR_RULE = fclean
fclean: init clean
	@$(RM) $(NAME) $(TNAME)
	@echo -e $(GREEN)'-> [finished]: $(NAME): $(CURR_RULE)'$(RESET)

#------------------------------------------------------------
# Re

.PHONY: re
re:		CURR_RULE = re
re:		init
	@$(MAKE) fclean -s
	@$(MAKE) all -s
	@echo -e $(GREEN)'-> [finished]: $(NAME): $(CURR_RULE)'$(RESET)

#------------------------------------------------------------
# Print

.PHONY: init
init:
	@echo -e $(CYAN)'-> [starting]: $(NAME): make $(CURR_RULE)'$(RESET)