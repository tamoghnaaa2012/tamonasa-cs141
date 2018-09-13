//include library
#include <iostream>
using namespace std;
//funtion that include cost of the single unit,no of units, and tax rate and returns the value for calling modules
void func1(int &unitCst,int &units,int &taxRt){
	cout<<"The cost of the single unit : ";
	cin>>unitCst;
	cout<<"The total number of units : ";
	cin>>units;
	cout<<"The tax rate of the unit : ";
	cin>>taxRt;
	cout<<endl;
}

//function receives cost of the single unit,no of units, and tax rate and returns to the calling module the sales Tax and total cost.
void func2(int unitCst,int units, int taxRt, int &salesTx ,int &totdue){
	salesTx = (unitCst*taxRt/100);
	totdue = (units*(unitCst+salesTx));
} 

//function receives cost of the single unit,no of units,tax rate ,the sales Tax and total cost and outputs in readable format
void func3(int unitCst,int units, int taxRt, int salesTx ,int totdue){
	cout<<"The cost of the single unit : "<<unitCst<<endl;
	cout<<"The total number of units : "<<units<<endl;
	cout<<"The tax rate of the unit : "<<taxRt<<endl;
	cout<<"The sales tax of the unit : "<<salesTx<<endl;
	cout<<"The total cost of the "<< units<<" unit : "<<totdue <<endl;
} 
//main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue.
int main(){
	int unitCst,units,taxRt,salesTx,totdue;	
	//declaring all variables
	func1(unitCst,units,taxRt);
	//calculating values for salesTx and totaldue
	func2(unitCst,units,taxRt,salesTx,totdue);
	//displaying all the values;
	func3(unitCst,units,taxRt,salesTx,totdue);
	return 0;
}
