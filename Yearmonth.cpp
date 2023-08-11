#include <iostream>
using namespace std;
int main(){
int a;
	cout << "Enter a Number Between 1 - 12\n";
	cout << "This programs tells the month and last date of that month\n";
	cout << "Enter a number : ";
	cin>>a;
		if ((a>=1)&&(a<=12)){
			if (a==1){
				cout<<"January : 31\n";}
			else if (a==2){
				cout<<"February : 28\n";}
			else if (a==3){
				cout<<"March : 31\n";}
			else if (a==4){
				cout<<"April : 31\n";}
			else if (a==5){
				cout<<"May : 31\n";}
			else if (a==6){
				cout<<"June : 31\n";}
			else if (a==7){
				cout<<"July : 31\n";}
			else if (a==8){
				cout<<"August : 31\n";}
			else if (a==9){
				cout<<"September : 31\n";}
			else if (a==10){
				cout<<"Octuber : 31\n";}
			else if (a==11){
				cout<<"November : 31\n";}
			else {
				cout<<"December: 31\n";}}
		else {
			cout <<"Invalid\n";}
return 0;
}
