#include <iostream>

using namespace std;

class withFunctions{
	private:
		int x;
	public:
		// Mutator function sets x value
		void setX(){
			x = 5;
		}
		// Accessor function uses x variable
		void print(){
			cout << "X from class member function: " << x << endl;
		}
};
class withoutFunctions{
	public:
		int x;
};

int main() {
	withFunctions wf;
	wf.setX(); // sets x to 5
	wf.print(); // uses x from class member function
	
	withoutFunctions wf2;
	wf2.x = 10; // sets x to 10
	// uses x from class public variable
	cout << "X without member functions: " << wf2.x << endl;
}