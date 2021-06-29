#include <iostream>
#include <string>
#include <vector>

#include "Vending_Machine.h"
//#include "Customer.h"
//#include "Beverage.h"


using namespace std;

int main() {
	
	//Just try to create the objects first
	Beverage b1("Coke", 1.25, 10, 1);
	Beverage b2("Pepsi", 1.00, 10, 2);
	Beverage b3("Dr. Pepper", 0.75, 10, 3);
	Beverage b4("Sprite", 0.90, 10, 4);
	Beverage b5("Water", 0.50, 10, 5);
	cout<<"All Beverages created."<<endl<<endl;
	
	Customer c("Zach");
	Customer ci("Prof. Demasco");
	cout<<"All Customers are here."<<endl<<endl;
	
	Vending_Machine m;
	
	cout<<endl;
	m.initial_load(b1);
	m.initial_load(b2);
	m.initial_load(b3);
	m.initial_load(b4);
	m.initial_load(b5);
	cout<<"All Dispensing Columns have been filled."<<endl<<endl;
	
	m.bevs.push_back(b1);
	m.bevs.push_back(b2);
	m.bevs.push_back(b3);
	m.bevs.push_back(b4);
	m.bevs.push_back(b5);
	cout<<"There are "<<m.bevs.size()<<" drinks loaded."<<endl;
	
	//Set someone to thirsty so they use the machine
	ci.setThirsty();
	
	m.addUser(c, ci);
	
	
	//Have a user ready to utilize the vending machine now.
	cout<<"--------------------------------------------------"<<endl;
	cout<<m.user.getName()<<" is using the vending machine now."<<endl;
	
	//Display choices of drinks, buttons, and prices
	
	//prompt cin of how much money to enter
	
	//dispense drink and stuff
	
	//restart
	
	
	return 0;
}
