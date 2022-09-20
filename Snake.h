#ifndef SNAKE_H
#define SNAKE_H

#include "Reptile.h"
#include <string>
class Snake : public Reptile {
private:
	string skinColor;
public:
	Snake(string name, int weight, int height, int length, string skinColor);
	string getSkinColor()const;
	void setSkinColor(const string);
	virtual void move()const; //Bu fonksiyon ne kadar saf sanal olsa da(t�retilmi� s�n�f taraf�ndan ezilmeli) miras ald��� Reptile
								// bu fonksiyonu daha �nce ezdi�i i�in Reptile'�n move() fonksiyonu miras al�n�p kullan�labilir.
	virtual void info()const;
};
#endif
