#ifndef FINSERVICE_H
#define FINSERVICE_H

#include "Evenement.h"
#include "Simulation.h"
#include <iostream>

using namespace std;

class FinService: public Evenement{

public:	
	FinService(double,Simulation*);
	~FinService();
	void traiter();
};

#endif
