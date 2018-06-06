/*	BOX.H
*	AUTHORS:
*		Andrea D'Arpa
*		Davide Balestra
*
*	DESCRIPTION:
*		Header file of Box's class.
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include "Mazzo.h"

using namespace std;

class Box{
protected:
	string name;						//nome della casella
	string description;					//descrizione del tipo di casella
	int id;							//intero che identifica il tipo di casella
	
public:
	char graphicBox[3];
	Box *prev;						//parametri next prev per la gestione del cammino dei pg sulla mappa
	Box *next;
	Carte *c;						//puntatore alla carta da pescare
	
//constructors
	Box();							//default constructor
	Box(string n, string d, int id);			//costruttore con parametri
	
	void action();						//interfaccia del metodo che verrà implementato nelle sottoclassi

//SETTER METHODS
	void setName(string n);
	void setDes(string n);
	void setId(int n);

//GETTER METHODS
	string getName();
	string getDes();
	int getId();
};

class Start : public Box{
	public:
		Start();
};

class End : public Box{
	public:
		End();
};

class Draw : public Box{
	public:
		Draw();
};

class Bridge : public Box{
	public:
		Bridge();
};

class Prison : public Box{
	public:
		Prison();
};

class Inn : public Box{
	public:
		Inn();
};

class Labirinth : public Box{
	public:
		Labirinth();
};

class Skull : public Box{
	public:
		Skull();
};
