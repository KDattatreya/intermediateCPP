run:shape_test.cpp shape.cpp
	g++ shape_test.cpp shape.cpp circle.h polygon.h rectangle.h shape.h triangle.h -lgtest -lgtest_main -lpthread -o all.out

test:
	./all.out
