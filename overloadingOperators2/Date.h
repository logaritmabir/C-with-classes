#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date{
	friend ostream& operator<<(ostream &,const Date&);
	public:
		Date(int,int,int);
		void setDate(int,int,int);
		Date operator++(int);  //�okomelli buras�
		Date &operator++();
	private:
		int day;
		int month;
		int year;
};

#endif
