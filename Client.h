#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
using namespace std;
class Client{

	protected:
		double _heureArrivee;
	public:
		Client(double);
		~Client();
		
		double heureArrivee() const;
};

#endif
