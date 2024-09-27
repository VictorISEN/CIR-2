#include <iostream>
#include "Point3D.hpp"
 // Inclusion du fichier header

int main() {
	// Cr�ation d'un point avec le constructeur par d�faut (valeurs al�atoires)
	Point3D point1;
	std::cout << "Point 1 (aleatoire) : ";
	point1.print();

	// Cr�ation d'un point avec des valeurs sp�cifiques
	Point3D point2(10.0f, 20.0f, 30.0f);
	std::cout << "Point 2 (initialise � 10, 20, 30) : ";
	point2.print();

	// Test des setters pour modifier les coordonn�es
	point2.setX(15.0f);
	point2.setY(25.0f);
	point2.setZ(35.0f);
	std::cout << "Point 2 apres modification (15, 25, 35) : ";
	point2.print();

	// Test de la m�thode setXYZ
	point2.setXYZ(50.0f, 60.0f, 70.0f);
	std::cout << "Point 2 apres setXYZ (50, 60, 70) : ";
	point2.print();

	// Test des getters
	std::cout << "Coordonnee X de Point 2 : " << point2.getX() << std::endl;
	std::cout << "Coordonnee Y de Point 2 : " << point2.getY() << std::endl;
	std::cout << "Coordonnee Z de Point 2 : " << point2.getZ() << std::endl;

	// Test de la m�thode distanceTo
	float distance = point1.distanceTo(point2);
	std::cout << "Distance entre Point 1 et Point 2 : " << distance << std::endl;

	return 0;
}
