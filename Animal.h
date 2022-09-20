#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
private:
	string name;
	int weight;
	int height;
public:
	Animal(string, int, int);
	string getName()const;
	void setName(const string);
	int getWeight()const;
	void setWeight(const int);
	int getHeight()const;
	void setHeight(const int);
	virtual void move()const = 0; // e�er bu fonksiyon alt s�n�fta ezilmezse alt s�n�fta soyut s�n�fa d�n���r.
	virtual void info()const;
	virtual ~Animal();
};

#endif // !
