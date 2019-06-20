#ifndef _STARTSTATE_H
#define _STARTSTATE_H
#include "./state.h"

class StartState:public State{
private:
	string name;
	string next;
public:
	StartState(string n){next = n;name = n;};
	string getNext(){return next;};
	string getName(){return name;};
	void enter();
	void excute();
	void exit();
};

#endif
