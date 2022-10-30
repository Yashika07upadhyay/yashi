#include<iostream>
using namespace std;
class Base{
	public:
		void print(){
			cout<<"base function"<<endl;
		}
};
class Derived:public Base{
	public:
	
		void print(){
			cout<<"derived fumction"<<endl;
			Base::print();
		}
};
int main(){
	
	Derived derived;
	derived.print();
		
	return 0;

}
