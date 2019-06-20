SRC = ${wildcard *.cpp}
OBJS = ${patsubst %.cpp, %.o, $(SRC)}
all: $(OBJS)

%.o: %.cpp
	g++ -o $@ -c $^

.PHONY:clean
clean:
	-rm -rf *.o
