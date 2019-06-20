#ifndef _STATEMACHINE_H
#define _STATEMACHINE_H
#include "../state/state.h"
#include<map>
#include<iostream>
using namespace std;

class FSM{
private:
State* state;
map<string, State*> m_mapState;
//string m_curState;
bool isRunning;
public:
FSM():state(NULL){isRunning = false;};
void setState(State* st){state = st;};
void addState(State* st)
{
	m_mapState[st->getName()] = st;
};
bool getRunning(){return isRunning;};
bool start();

void update();
};

#endif
