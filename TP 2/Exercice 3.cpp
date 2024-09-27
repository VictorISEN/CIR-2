#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype> // Pour utiliser la fonction tolower()

int main() {
	// Déclaration des variables
	std::string texte;
	int nbLignes = 0;
	int nbMots = 0;
	int nbLettres = 0;
	std::string mot;

	// Tableau pour compter les occurrences des lettres (26 lettres de l'alphabet)
	int occurrences[26] = { 0 };

	// Ouverture du fichier
	std::ifstream fichier("texte.txt");

	// Vérification de l'ouverture du fichier
	if (fichier.is_open()) {
		// Lecture du fichier
		while (std::getline(fichier, texte)) {
			nbLignes++;
			std::stringstream ss(texte);
			while (ss >> mot) {
				nbMots++;
				for (char& c : mot) {
					if (isalpha(c)) { // Vérifie si c'est une lettre
						c = tolower(c); // Convertit en minuscule
						nbLettres++;
						occurrences[c - 'a']++; // Incrémente le compteur correspondant
					}
				}
			}
		}
		// Fermeture du fichier
		fichier.close();
	}
	else {
		std::cout << "Impossible d'ouvrir le fichier" << std::endl;
		return 1;
	}

	// Affichage des résultats
	std::cout << "Nombre de lignes : " << nbLignes << std::endl;
	std::cout << "Nombre de mots : " << nbMots << std::endl;
	std::cout << "Nombre de lettres : " << nbLettres << std::endl;

	// Affichage du nombre d'occurrences de chaque lettre
	std::cout << "Occurrences de chaque lettre :" << std::endl;
	for (int i = 0; i < 26; ++i) {
		std::cout << static_cast<char>('a' + i) << " : " << occurrences[i] << std::endl;
	}

	return 0;
}
