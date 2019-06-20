#include"startstate.h"
#include<iostream>
using namespace std;

void StartState::enter()
{
	name = "StartState";
};

void StartState::excute()
{
	next = "RunState";
	cout << "Start->Run" << endl;
};

void StartState::exit()
{
	name = "StartState";
};
