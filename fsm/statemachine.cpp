#include "statemachine.h"
#include <iostream>
using namespace std;

bool FSM::start()
{
	if(isRunning == true)
	{
		return false;
	}
	else
	{
		isRunning = true;
		if(state->getName() == "StartState")
		{
			state->enter();
		}
		return true;
	}
};

void FSM::update()
{
	if(state != NULL)
	{
		state->excute();
	}
	if(state->getNext() == "GameOver")
	{
		cout << "GameOver" << endl;
		isRunning = false;
	}
	else if(state->getNext() != state->getName())
	{
		state->exit();
		state = m_mapState[state->getNext()];
		state->enter();
	}
};
