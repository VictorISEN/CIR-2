#include <iostream>

using namespace std;

constexpr int multiplier(int a, int b) {
	return a * b;
}

int main(void)
{
	int a;
	int b;
	cout << "Entrez une valeur :" << endl;
	cin >> a;
	cout << "Entrez une autre valeur :" << endl;
	cin >> b;
	cout << multiplier(a + 1, b + 1) << endl;  // multiplier est maintenant une fonction constexpr
}
