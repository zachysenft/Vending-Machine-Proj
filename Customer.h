#include <string>

using namespace std;



class Customer {
	
	
	private:
		float amount_money;
		string name;
		bool thirsty;
		
		
	public:
		Customer();
		Customer(string);
		void enter_money(float);
		int select_beverage(int);
		
		void setName(string);
		string getName();
		void setAmount(float);
		float getAmount();
		void setThirsty();
		bool getThirsty();
	
};
