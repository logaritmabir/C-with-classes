#include <iostream>
#include <string>
#include "Destructor.h"

Destructor des5(5,"CS105"); //Nerede tan�mland���ndan ba��ms�z olarak global de�i�kenler main fonksiyon �al��maya
							//ba�lamadan �nce kurulur,main fonksiyon i�ini bitirdikten SONRA y�k�l�rlar. bknz.des5,des6
static Destructor des7(7,"CS107");

int main(int argc, char** argv) {
	cout << "main function has started.." << endl; //Bir nesne �al��t��� kapsam� terk etti�inde (parantezler aras�) 
	Destructor des1(1,"CS101");					   // �zdevimli olarak par�alan�r.
	Destructor des2(2,"CS102");
	Destructor des3(3,"CS103");
	Destructor des4(4,"CS104");
	cout << "main function has done its mission.." << endl;
}

Destructor des6(6,"CS106");
static Destructor des8(8,"CS108"); //global ve static de�i�kenler yap�ld�klar� s�ran�n tersiyle yok edilir.stack?
