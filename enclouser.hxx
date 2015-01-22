#ifndef enclouser_hxx
#define enclouser_hxx

#include <iostream>
#include <list>
#include "animals.hxx"

using namespace std;
typedef std::list<Animal*> Animals;

class Enclouser
{

public:	
	

	
	void addAnimal( Animal &animal){
		animals.push_back(&animal);	
	}

	
	void delAnimal( Animal &animal){
		
	}	
	
	virtual void printAnimals(){
		
		for (Animals::iterator it=animals.begin(); it!=animals.end(); it++){
		cout << "l'animal anomenat " << (*it)->nom() << " es de l'especie ";
		(*it)->escriuEspecie();
		cout<< "esta en Indefinido"<<endl;
		}
		
	}
protected:
	Animals animals;
	
	
};


class Earth : public Enclouser
{
	
public:
	virtual void printAnimals(){
		
		for (Animals::iterator it=animals.begin(); it!=animals.end(); it++){
		std::cout << "l'animal anomenat " << (*it)->nom() << " es de l'especie ";
		(*it)->escriuEspecie();
		cout<< "esta en Earth"<<endl;
		}
		
	}
	

};

class Water : public Enclouser
{
	virtual void writeEnclouser() const
	{
		cout << "Water" <<endl;
	}
};

class Snow : public Enclouser
{
	virtual void writeEnclouser() const
	{
		cout << "Snow" <<endl;
	}
};

#endif




