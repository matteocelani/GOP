/* Authors:	Davide Balestra	0000789078
 *		Andrea D'Arpa	0000803520
 *		Matteo Celani	0000000000
 *
 * Date: 05-06-2018
 * Description: Header file of class Player
 */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include "box.h"

using namespace std;

class Player{
	private:
		string name;
		int age;
		int turn;
				
	public:
		Player *next;		//gestore lista giocatori
		Player *pNext;		//lista di trabocco dei giocatori sulla stessa casella
		Box *position;		//current position on map
		//Constructors
		Player();
		Player(string n, int a, Box *p);

		//setters methods
		void setName(string n);
		void setAge(int n);
		void setTurn(int n);
		//declare here the set for cells
	
		//Getters methods
		string getName();
		int getAge();
		int getTurn();
		//Declare here the get for cells

		//Game Methods
		//int dice();	//throw the dice
		//void Turn();	//manage the turn of the current player
};

