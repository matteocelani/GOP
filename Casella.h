/* ------------------------------------------------------------------
 * Author: Davide Balestra
 * Date: 20-03-2018
 * Descrption: header of class casella and his derivates
 * 		decrvibes the types of cells
 * ------------------------------------------------------------------
 */

#ifndef CELL_H
#define CELL_H

class Casella {
	protected:
		int type; //type of cell
		string name, description; //name and description of the type
		Personaggio *p; //pointer to character overflow list
		Casella *next; //next cell in the map
		Casella *prec; //previous cell in the map
	public:
		//Default Constructor
		Casella();
		//set methods
		void set_type(int t);
		void set_name(string n);
		void set_desc(string d);
		void set_p(personaggio *p);
		void set_next(casella *n);
		void set_prec(casella *p);
		//get methods
		int get_type();
		string get_name();
		string get_desc();
		Personaggio *get_p();
		Casella *get_next();
		Casella *get_prec();
		//display
		void display();
};

class Start:public Casella{
	public:
		Start(int t, string n, string d);
		void action(Personaggio *p);
};

class Bridge:public Casella{
	public:
		Bridge(int t, string n, string d);
		void action(Personaggio *p);
};

class Inn:public Casella{
	public:
		Inn(int t, string n, string d);
		void action(Personaggio *p);
};

class Prision:public Casella{
	public:
		Prision(int t, string n, string d);
		void action(Personaggio *p);
};

class Labirinth:public Casella{
	public:
		Labirinth(int t, string n, string d);
		void action(Persionaggio *p);
};

class Skull:public Casella{
	public:
		Skull(int t, string n, string d);
		void action(Personaggio *p);
}

class End:public Casella{
	public: 
		End(int t, string n, string d);
		void action(Personaggio *p);
};
