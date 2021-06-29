
using namespace std;

class Beverage {
	
	
	private:
		string bev_name;
		float price;
		int num_left;
		int button_no;
		
	public:
		Beverage(string, float, int, int);
		void dispensed();
		void reloaded();
		
		//Added not in UML
		string getName();		
		
	
	
};
