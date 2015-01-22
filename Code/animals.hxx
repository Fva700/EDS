#ifndef animals_hxx
#define animals_hxx

/*
   - ara afegim un nou atribut a la base de tipus std::string
   - afegim accessors d'escriptura i de lectura
 */

#include <iostream>
#include <string>

using namespace std;
class Animal
{
public:
	virtual void escriuEspecie() const
	{
		cout << "...indefinida..." << endl;
	}
	void nom(string elNom)
	{
		_nom = elNom;
	}
		string& nom()
	{
		return _nom;
	}

private:
	string _nom;
};

class Elefant : public Animal
{
public:
	virtual void escriuEspecie() const
	{
		cout << "elefant" <<endl;
	}
};

class Granota : public Animal
{
public:
	virtual void escriuEspecie() const
	{
		cout << "granota" <<endl;
	}
};

class Gat : public Animal
{
public:
	virtual void escriuEspecie() const
	{
		cout << "gat" << endl;
	}
};

#endif

