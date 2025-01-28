#include <iostream>

using namespace std;

// By default private
class exampleClass {
	private: // Default; not neccessary
		int x;
	public: // Not default; neccessary
		// Mutator function sets x value
		void setX(){
			x = 5;
		}
		// Accessor function uses x variable
		void print(){
			cout << "X from class member function: " << x << endl;
		}
};
// By default public
struct classAsStruct {
	private: // Not default; neccessary
		int x;
	public: // Default; still neccessary
		// Mutator function sets x value
		void setX(){
			x = 5;
		}
		// Accessor function uses x variable
		void print(){
			cout << "X from struct member function: " << x << endl;
		}
};

int main() {
	exampleClass exClass;
	classAsStruct exStruct;

	exClass.setX();
	exClass.print();
	exStruct.setX();
	exStruct.print();

	return 0;
}