#ifndef Simulation_H
#define Simulation_H

#include <set>
#include "Evenement.h"
#include <iostream>

using namespace std;

class Evenement;

class Simulation{

protected:
	double _heureDebut;
	set<Evenement*> _evenements;

public:
	Simulation(double);
	~Simulation();
	void derouler();
	double heureDebut();
	double heure();
	void ajouter(Evenement*);

};
#endif
