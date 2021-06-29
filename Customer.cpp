#include <iostream>
#include <string>

#include "Customer.h"

using namespace std;




//Constructor - construct it with default parameters
Customer::Customer() {
	
	name = "default";
	amount_money = 0.00;
	thirsty = false;
	
}

Customer::Customer(string nm) {
	
	name = nm;
	amount_money = 5.00;
	thirsty = false;
	
	cout<<nm<<" is here!"<<endl;
	
}


void Customer::setName(string nm) {
	
	name = nm;
	
}

string Customer::getName() {
	
	return name;
	
}

void Customer::setAmount(float amt) {
	
	amount_money = amt;
	
}

float Customer::getAmount() {
	
	return amount_money;
	
}

void Customer::setThirsty() {
	
	thirsty = true;
	
}

bool Customer::getThirsty() {
	
	return thirsty;
	
}

void Customer::enter_money(float amt) {
	
	amount_money -= amt;
	
}









