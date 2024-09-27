#include <iostream>
#include <cmath>  // Pour utiliser sqrt et pow
#include <cstdlib> // Pour utiliser rand et srand
#include <ctime>   // Pour initialiser srand avec le temps

#include "Point3D.hpp" // Inclusion du header

// Constructeur par défaut (initialise x, y, z avec des valeurs aléatoires entre 0 et 100)
Point3D::Point3D() {
	srand(time(0));  // Initialisation de la graine pour les nombres aléatoires
	x = rand() % 101; // Valeur aléatoire entre 0 et 100
	y = rand() % 101;
	z = rand() % 101;
}

// Constructeur avec paramètres
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

// Méthode pour afficher les coordonnées du point
void Point3D::print() {
	std::cout << "Point3D(" << x << ", " << y << ", " << z << ")" << std::endl;
}

// Méthode pour calculer la distance entre deux points 3D
float Point3D::distanceTo(const Point3D& otherPoint) {
	return sqrt(pow(otherPoint.x - x, 2) + pow(otherPoint.y - y, 2) + pow(otherPoint.z - z, 2));
}
