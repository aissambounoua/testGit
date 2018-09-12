#ifndef ARRIVEE_H
#define ARRIVEE_H

#include "Evenement.h"
#include "Simulation.h"
#include <iostream>

using namespace std;

class Arrivee: public Evenement{

public:	
	Arrivee(double,Simulation*);
	~Arrivee();
	void traiter();
};

#endif
