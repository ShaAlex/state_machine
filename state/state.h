#ifndef _STATE_H
#define _STATE_H
#include<string>
using namespace std;

class State{
public:
	virtual string getNext() = 0;
	virtual string getName() = 0;
	virtual void exit() = 0;
	virtual void excute() = 0;
	virtual void enter() = 0;
};

#endif
