#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int a,int b){
	if(a<=0 || b<=0){
		cout << "Invalid input";
	}else{
	for(int k = 1; k <= a; k++){
		for(int m = 1; m <= b; m++){
			cout << "O";
		}
		cout << "\n";
	}
	}
	
}

int main(){
	

	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
