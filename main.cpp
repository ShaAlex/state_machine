#include "state/state.h"
#include "state/startstate.h"
#include "state/stopstate.h"
#include "state/runstate.h"
#include "fsm/statemachine.h"

int main(int argc, char** argv)
{
	StartState* start = new StartState("StartState");
	RunState* run = new RunState("RunState");
	StopState* stop = new StopState("StopState");
	FSM fsm;
	fsm.addState(start);
	fsm.addState(run);
	fsm.addState(stop);
	fsm.setState(start);
	fsm.start();
	while(fsm.getRunning())
	{
		fsm.update();
	}

	return 0;
}
