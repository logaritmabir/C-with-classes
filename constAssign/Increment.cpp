#include "Increment.h"
#include <iostream>

using namespace std;

void Increment::addIncrement(){
	count += increment;
}
Increment::Increment(int c, int i):count(c),increment(i){} //ba�lat�c� listesi kurucudan �nce �al���r.
void Increment::print() const {
	cout << "number : " << count << " artt�r�m " << increment << endl;
}
