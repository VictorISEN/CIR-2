#include <iostream>
using namespace std;
constexpr int multiplier(int a, int b) {
	return a * b;
}
int main(){
	cout << "Un chiffre entre 1 et 9 ?" << endl ;
	int a; 
	cin >>  a ;
	for (int i = 1; i <= 9; i++) {

	cout << "le produit de " << " "<< a <<" "<< "et" <<" "<< i <<" "<< "est" << " "<<multiplier(a, i) << endl;
}	



}