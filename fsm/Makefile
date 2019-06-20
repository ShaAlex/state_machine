OBJS = statemachine.o
INC_STATE = ../state
all: $(OBJS)

$(OBJS): statemachine.cpp
	g++ -o $@ -c $^

.PHONY:clean
clean:
	-rm -rf *.o
