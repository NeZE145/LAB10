#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double loan,rate,payment,newbalance;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << endl;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << endl;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;
	cout << endl;


	
	cout << setw(12) << left << "EndOfYear#"; 
	cout << setw(12) << left << "PrevBalance"; 
	cout << setw(12) << left << "Interest"; 
	cout << setw(12) << left << "Total";
	cout << setw(12) << left << "Payment";
	cout << setw(12) << left << "NewBalance";
	cout << "\n";
	


	int b=1;
	 
	do{
		cout<<endl;
		cout << fixed << setprecision(2);
		cout << setw(12) << left << b; 
		cout << setw(12) << left << loan;
		cout << setw(12) << left << (loan*rate)/100;
		double a=(loan*rate)/100;
		
		cout << setw(12) << left << a+loan;
		if(payment > a+loan){
			payment = a+loan;
			cout << setw(12) << left << payment;
			cout << setw(12) << left << (a+loan)-payment;
			break;
			}
		cout << setw(12) << left << payment;
		cout << setw(12) << left << (a+loan)-payment;
		
		cout << "\n";
		newbalance = (a+loan)-payment;
		loan = newbalance;
		
		if (newbalance < payment){
			b++;
			payment = newbalance;
			cout<<endl;
			cout << setw(12) << left << b; 
			cout << setw(12) << left << loan;
			cout << setw(12) << left << (loan*rate)/100;
			double a=(loan*rate)/100;
			cout << setw(12) << left << a+loan;
			payment = a+loan;
			cout << setw(12) << left << payment;
			cout << setw(12) << left << (a+loan)-payment;
			cout << "\n";
			break;
		}
		b++;
	}while(payment != 0);
	
	return 0;
}
