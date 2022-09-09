#include <iostream>
#include "SavingsAccount.h"

using namespace std;

int SavingsAccount::annualInterestRate = 1;

SavingsAccount::SavingsAccount(int balance):currentBalance(balance){
	cout << "An account has been created with these values : " << endl
	<< "balance : " << getCurrentBalance() << endl
	<< "account's interest rate : " << getAnnualInterestRate() << endl;
}
int SavingsAccount::getCurrentBalance() const{
	return currentBalance;
}
int SavingsAccount::getAnnualInterestRate(){
	return annualInterestRate;
}
int SavingsAccount::calculateMonthlyInterest(){
	return (currentBalance * annualInterestRate/12);
}
void SavingsAccount::modifyInterestRate(int newRate){ // STAT�K FONKS�YON ��ER�S�NDE STAT�K OLMAYAN B�R DE���KEN KULLANMA AWK MALI SEN�
	annualInterestRate = newRate;			// fakat statik olmayan bir fonk i�inde statik kullanabilirsin.
}
void SavingsAccount::insertInterest(){
	currentBalance += calculateMonthlyInterest();
}
