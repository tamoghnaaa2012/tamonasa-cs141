//include the library
#include<iostream>
using namespace std;

//function to find maximum
int max(int a,int b){
	if (a>=b){
		return a;}
	else {
		return b;}

}

//void function
void maxR(int a,int b,int &maxm){
	maxm=max(a,b);
}
//main
int main(){
	int num1,num2;
	cout<<"Enter the first number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
	int max;
	maxR(num1,num2,max);
	cout<<"The maximum number is: "<<max<<endl;

	return 0;
} 
