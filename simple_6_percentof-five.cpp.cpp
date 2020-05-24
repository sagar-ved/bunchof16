#include<iostream>
using namespace std;
int main(){
int i,marks=0,arr[5];
double percent;
for(i=0;i<5;i++){
cout<<"enter "<<i+1 <<" subject:";
cin>>arr[i];
marks +=arr[i];

}
cout<<"totle marks: "<< marks<<endl;
percent=(marks*100)/500;

cout<<"percent marks: "<<percent<<" %"<<endl;
return 0;

}
