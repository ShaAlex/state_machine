#include"stopstate.h"

void StopState::enter()
{
	name = "StopState";
};

void StopState::excute()
{
	name = "StopState";
	next = "GameOver";
};

void StopState::exit()
{
	name = "StopState";
};
