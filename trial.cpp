#include<iostream>
using namespace std;
int main(){
	int n,d,r=0;
	cout<<"enter the no.:'";
	cin>>n;
	while(n>0){
	
	d=n%10;
	r=r*10+d;
	n=n/10;
}
	cout<<r;
	
	return 0;
}
