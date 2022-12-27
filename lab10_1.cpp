#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{
	double loan, rate, payment;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	int year = 1;
	double interest, newBalance = loan, total;
	interest = loan * (rate / 100);
	total = newBalance + interest;
	newBalance = total - payment;

	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	cout << fixed << setprecision(2);
	while (loan > 0)
	{
		if(loan<=payment){
			payment = total;
			newBalance = 0;
		}
		cout << setw(13) << left << year;
		cout << setw(13) << left << loan;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << newBalance;
		cout << "\n";
		loan = newBalance;
		interest = newBalance * (rate / 100);
		total = newBalance + interest;

		year++;
		if (newBalance < payment)
		{
			payment = total;
		}
		newBalance = total - payment;
	}
	return 0;
}
