SRC = box.cpp\
	test_IPAddress.cpp

INC = IPAddress.h\

run:$(SRC)
	g++ $(SRC) $(INC) -lgtest -lgtest_main -lpthread -o all.out

test:
	./all.out
