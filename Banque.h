#ifndef BANQUE_H
#define BANQUE_H

#include "Simulation.h"
#include "Arrivee.h"
#include "Caissier.h"
#include "Client.h"
#include <iostream>
using namespace std;


class Banque : public Simulation{

protected:
	double _dureeHeure;
	int _nbCaissiers;
	double _tempsMoyenArrivee;	
	Caissier** _caissiers;	
	List *_fileAttente; // ???
public:
	Banque();
	~Banque();
	double dureeHeure();
	int nbClients();
	int nbCaissiers();
	double tempsMoyenArrivee();
	double dureeReelle();
	Caissier* caissierEstLibre();
	List* fileAttente();
};

#endif
