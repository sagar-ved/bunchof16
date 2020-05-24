#include<iostream>
using namespace std;
int main(){
	//simple interest
	int rate,principal,time;
	float interest;
	cout<<"enter principal:";
	cin>>principal;
	cout<<"enter rate of interest:";
	cin>>rate;
	cout<<"enter time:";
	cin>>time;
	
	interest=(principal*rate*time)/100;
	cout<<"calculated simple interest is: "<<interest;
	return 0;
	}
