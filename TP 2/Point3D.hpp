#ifndef POINT3D_HPP
#define POINT3D_HPP

class Point3D {
private:
	float x, y, z;  // Attributs priv�s pour stocker les coordonn�es

public:
	// Constructeurs
	Point3D();  // Constructeur par d�faut qui initialise x, y, z avec des valeurs al�atoires (de 0 � 100)
	Point3D(const float& newx, const float& newy, const float& newz);  // Constructeur avec param�tres

	// Setters
	void setXYZ(const float& newx, const float& newy, const float& newz);  // Met � jour x, y, z
	void setX(const float& newx);  // Met � jour uniquement x
	void setY(const float& newy);  // Met � jour uniquement y
	void setZ(const float& newz);  // Met � jour uniquement z

	// Getters
	float getX();  // Renvoie x
	float getY();  // Renvoie y
	float getZ();  // Renvoie z

	// Autres m�thodes
	void print();  // Affiche les coordonn�es du point
	float distanceTo(const Point3D& otherPoint);  // Calcule la distance � un autre point 3D
};

#endif
