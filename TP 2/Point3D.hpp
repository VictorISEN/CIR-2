#ifndef POINT3D_HPP
#define POINT3D_HPP

class Point3D {
private:
	float x, y, z;  // Attributs privés pour stocker les coordonnées

public:
	// Constructeurs
	Point3D();  // Constructeur par défaut qui initialise x, y, z avec des valeurs aléatoires (de 0 à 100)
	Point3D(const float& newx, const float& newy, const float& newz);  // Constructeur avec paramètres

	// Setters
	void setXYZ(const float& newx, const float& newy, const float& newz);  // Met à jour x, y, z
	void setX(const float& newx);  // Met à jour uniquement x
	void setY(const float& newy);  // Met à jour uniquement y
	void setZ(const float& newz);  // Met à jour uniquement z

	// Getters
	float getX();  // Renvoie x
	float getY();  // Renvoie y
	float getZ();  // Renvoie z

	// Autres méthodes
	void print();  // Affiche les coordonnées du point
	float distanceTo(const Point3D& otherPoint);  // Calcule la distance à un autre point 3D
};

#endif
