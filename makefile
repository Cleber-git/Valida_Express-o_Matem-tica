CXX = g++ -w


CXXFLAGS = -o 

SRC = src/stack.cpp src/main.cpp src/validaExpressao.cpp

TARGATE = ./main

all:  exec run

exec:
	$(CXX) $(SRC) $(CXXFLAGS) $(TARGATE)

run:
	$(TARGATE)