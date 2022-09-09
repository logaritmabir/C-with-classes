#include <string>
using namespace std;

#ifndef CONST_H
#define CONST_H
class Const {
private:
	string name;
	string surname;
	string ID;
	int age;
	string birthPlace;
	string accountCreateDate;
public:
	Const(string,string,string,int,string); // kurucular veya y�k�c�lar const olamaz.
	string getName();						// const bir nesnenin const OLMAYAN fonksiyonunu �a��rmak hata �retir.
	string getSurname();					//nesnenin bir de�i�kenini de�i�tiren fonksiyonu const tan�mlamak hata �retir.
	string getID();
	int getAge();
	string getBirthPlace();
	string getAccountCreateDate();
	
	void setName(string);
	void setSurname(string);
	void setID(string);
	void setAge(int);
	void setBirthPlace(string);
	void setAccountCreateDate();
	
	void printObject() const;
	void printObject(string param) const;
	void printForConstants() const;
	void printObject();
};
#endif
