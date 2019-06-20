#ifndef _RUNSTATE_H
#define _RUNSTATE_H
#include "./state.h"

class RunState:public State{
private:
	string name;
	string next;
public:
	RunState(string n){next = n;name = n;};
	string getNext(){return next;};
	string getName(){return name;};
	void enter();
	void excute();
	void exit();
};

#endif
