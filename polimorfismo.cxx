/* 
   - usem els accessors d'escriptura i de lectura de l'atribut _nom

   En resum hem apr�s:
   - com escriure per consola fent servir <iostream>
   - simbols de la libreria localitzats al namespace std::
   - les classes acaben en ;
   - el m�todes i atributs per defecte s�n private
   - com fer subclasses: "Sub : public Super"
   - perqu� serveixen els m�todes virtuals
   - polimorfisme
   - usar #ifndef als headers per evitar redefinicions
   - pas de par�metres per refer�ncia
   - col.leccions est�ndars vector i list
   - typdefs
   - iteradors
   - std::string
   - �s d'accessors
 */

#include <list>
#include "animals.hxx"
#include "enclouser.hxx"

int main(void)
{
	
	
	// introdu�m un de cada tipus

	Elefant unElefant;
	unElefant.nom("Jumbo l'Orellut");
	Earth Tierra;
	
	Tierra.addAnimal(unElefant);
	Tierra.printAnimals();


	
	


	// iterem fent servir iteradors
	/*for (Animals::iterator it=animals.begin(); it!=animals.end(); it++)
	{
		std::cout << "l'animal anomenat " << (*it)->nom() << " es de l'especie ";
		(*it)->escriuEspecie()

	}*/

	return 0;
}

