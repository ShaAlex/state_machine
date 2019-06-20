#include"runstate.h"
#include<iostream>
using namespace std;

void RunState::enter()
{
	name = "RunState";
};

void RunState::excute()
{
	next = "StopState";
	cout << "Run->Stop" << endl;
};

void RunState::exit()
{
	name = "RunState";
};
