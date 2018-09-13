//include the library
#include<iostream>
using namespace std;

//function to find minimum
int min(int a,int b){
	if (a<=b){
		return a;}
	else {
		return b;}

}

//void function
void minR(int a,int b,int &minm){
	minm=min(a,b);
}
//main
int main(){
	int num1,num2;
	cout<<"Enter the first number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
	int min;
	minR(num1,num2,min);
	cout<<"The minimum number is: "<<min<<endl;

return 0;
}
