#ifndef CAISSIER_H
#define CAISSIER_H

#include "Client.h"
#include <iostream>
using namespace std;
class Caissier{

protected:
	double _tempsMoyenService;
	int _nbClientsServis;
	int _tempsRestant;
	
public:
	Caissier(double);
	~Caissier();
	double tempsMoyenService();
	int nbClientsServis();
	double tauxOccupation();
	bool estLibre();
	void servir(Client*);
	void attendre();
	
};

#endif
