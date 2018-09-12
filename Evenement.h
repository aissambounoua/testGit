#ifndef EVENEMENT_H
#define EVENEMENT_H

#include "Simulation.h"
#include <iostream>

using namespace std;
class Simulation;

class Evenement{

protected:
	const double _heure;
	Simulation* _simulation;	

public:
	Evenement(double heure,Simulation* simulation) : _heure(heure){
		_simulation=simulation;
	}
	double heure() {
		return _heure;
	}
	virtual void traiter()=0;   // methode abstraite

};
#endif
