#ifndef _STOPSTATE_H
#define _STOPSTATE_H
#include "./state.h"

class StopState:public State{
private:
	string name;
	string next;
public:
	StopState(string n){next = n;name = n;};
	string getNext(){return next;};
	string getName(){return name;};
	void enter();
	void excute();
	void exit();
};

#endif
