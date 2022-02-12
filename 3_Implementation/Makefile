# Name of the project
PROJECT_NAME = matrical
TEST_PROJ_NAME = Test_$(PROJECT_NAME)

# Output directory
BUILD = build

# Source path 
VPATH = SRC INCLUDE 
 
# All source code files
SRC = main.c\
src/matrical.c

# All test source files
TEST_SRC = src/matrical.c\
test/test_matrical.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out


# Default target built
$(PROJECT_NAME):all


all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

runtest:$(PROJECT_NAME)
	./$(TEST_OUTPUT)

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov


$(BUILD):
	mkdir build
