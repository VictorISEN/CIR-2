#include <iostream>
#include <cmath>  // Pour utiliser sqrt et pow
#include <cstdlib> // Pour utiliser rand et srand
#include <ctime>   // Pour initialiser srand avec le temps

#include "Point3D.hpp" // Inclusion du header

// Constructeur par d�faut (initialise x, y, z avec des valeurs al�atoires entre 0 et 100)
Point3D::Point3D() {
	srand(time(0));  // Initialisation de la graine pour les nombres al�atoires
	x = rand() % 101; // Valeur al�atoire entre 0 et 100
	y = rand() % 101;
	z = rand() % 101;
}

// Constructeur avec param�tres
Point3D::Point3D(const float& newx, const float& newy, const float& newz) {
	x = newx;
	y = newy;
	z = newz;
}

// Setters
void Point3D::setXYZ(const float& newx, const float& newy, const float& newz) {
	x = newx;
	y = newy;
	z = newz;
}

void Point3D::setX(const float& newx) {
	x = newx;
}

void Point3D::setY(const float& newy) {
	y = newy;
}

void Point3D::setZ(const float& newz) {
	z = newz;
}

// Getters
float Point3D::getX() {
	return x;
}

float Point3D::getY() {
	return y;
}

float Point3D::getZ() {
	return z;
}

// M�thode pour afficher les coordonn�es du point
void Point3D::print() {
	std::cout << "Point3D(" << x << ", " << y << ", " << z << ")" << std::endl;
}

// M�thode pour calculer la distance entre deux points 3D
float Point3D::distanceTo(const Point3D& otherPoint) {
	return sqrt(pow(otherPoint.x - x, 2) + pow(otherPoint.y - y, 2) + pow(otherPoint.z - z, 2));
}
