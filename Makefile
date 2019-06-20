INC_STATE = ./state
INC_FSM = ./fsm
SRC_STATE = ${wildcard $(INC_STATE)/*.cpp}
SRC_FSM = ${wildcard $(INC_FSM)/*.cpp}
OBJS_STATE = ${patsubst %.cpp, %.o, $(SRC_STATE)}
OBJS_FSM = ${patsubst %.cpp, %.o, $(SRC_FSM)}

all: main
main:main.cpp $(OBJS_STATE) $(OBJS_FSM)
	g++ -o $@ $^

$(OBJS_STATE):
	make -C state

$(OBJS_FSM): 
	make -C fsm

.PHONY: clean
clean:
	find . -name *.o|xargs rm -f
