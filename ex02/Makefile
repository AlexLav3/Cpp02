NAME = Fixed
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra

SOURCES = main.cpp Fixed.cpp fixedOverloads.cpp minMax.cpp
		
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all