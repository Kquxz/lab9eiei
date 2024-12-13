#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double all(double ton,double bae,double payment){
	double ka = ton;
	double newb = 0;
	int i = 1;
	while(ka > 0){

		double interest = ka*(bae/100);
		double total = ka+interest;
		if(payment > total){
			payment = total;
		}
		newb = total-payment;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i;
		i++;
		cout << setw(13) << left << ka;
		if(newb < ka){
			ka = newb;
		}
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << newb;
		cout << "\n";
		
	}
	return 0;
}

int main(){
	double t;
	double b;
	double p;
	cout << "Enter initial loan: ";
	cin >> t;
	cout << "Enter interest rate per year (%): ";
	cin >> b;
	cout << "Enter amount you can pay per year: ";
	cin >> p;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	all(t,b,p);

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	//cout << setw(13) << left << "EndOfYear#"; 
	//cout << setw(13) << left << "PrevBalance"; 
	//cout << setw(13) << left << "Interest"; 
	//cout << setw(13) << left << "Total";
	//cout << setw(13) << left << "Payment";
	//cout << setw(13) << left << "NewBalance";
	//cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	//cout << fixed << setprecision(2); 
	//cout << setw(13) << left << 1; 
	//cout << setw(13) << left << 1000.0;
	//cout << setw(13) << left << 50.0;
	//cout << setw(13) << left << 1050.0;
	//cout << setw(13) << left << 100.0;
	//cout << setw(13) << left << 950.0;
	//cout << "\n";	
	
	return 0;
}