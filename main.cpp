#include <iostream>

using namespace std;


int main(){
	int money, tip, quarter, dime, nickel, penny, cent;
	cout << "What is the total of you bill?" << endl;
	cin >> money;
	
	tip = money * .15;
	
	cent = money * 100;
	quarter = cent / 25;
	cent = cent % 25;
	dime = cent / 10;
	cent = cent % 10;
	nickel = cent / 5;
	penny = cent % 1;
	
	
	cout << "The 15% tip would be " << tip << ". The change is " << quarter << " quarter" 
	<< dime << " dimes " << nickel << " nickels and " << penny << " pennies.";
	
	
	
	return 0;
}
