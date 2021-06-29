#include <iostream>
#include <string>

#include "Vending_Machine.h"

using namespace std;

Vending_Machine::Vending_Machine() {
	
	money_entered = 0.0;
	change_due = 0.0;
	
	cout<<"Vending Machine Created"<<endl;
	
}

//Vending Machine methods section
void Vending_Machine::dispense(int i) {
	
	//Beverage b;
	
	cout<<"Dispensed - Not Done"<<endl;
	
	
	
}

void Vending_Machine::initial_load(Beverage b) {
	
	for(int i = 0; i < 10; i++) {
		b.reloaded();
	}
	
	cout<<b.getName()<<" reloaded by 10"<<endl;
	
}

void Vending_Machine::addUser(Customer one, Customer two) {
	
	if(one.getThirsty()) {
		user = one;
		cout<<one.getName()<<" is thirsty and will use the vending machine."<<endl;
	}
	else if(two.getThirsty()) {
		user = two;
		cout<<two.getName()<<" is thirsty and will use the vending machine."<<endl;
	}
	else {
		cout<<"Nobody is thirsty."<<endl;
	}
	
}


