#include <iostream>
#include <string>
#include <vector>

#include "Customer.h"
#include "Beverage.h"


using namespace std;

class Vending_Machine {
	
	
	private:
		float money_entered;
		float change_due;
		int check;
		
		
	public:
		Customer user;
		Vending_Machine();
		vector<Beverage> bevs;
		float return_money();
		void dispense(int);
		void initial_load(Beverage);
		
		//not in UML
		void addUser(Customer, Customer);
		
	
	
	
};
