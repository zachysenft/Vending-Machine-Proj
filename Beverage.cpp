#include <iostream>
#include <string>

#include "Beverage.h"

using namespace std;

//Constructor
Beverage::Beverage(string nm, float pri, int left, int btn) {
	
	bev_name = nm;
	price = pri;
	num_left = left;
	button_no = btn;
	
	cout<<bev_name<<" created!"<<endl;
	
}

void Beverage::dispensed() {
	
	num_left--;
	
}

void Beverage::reloaded() {
	
	num_left++;
	
}

string Beverage::getName() {
	
	return bev_name;
	
}

