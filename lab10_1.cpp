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


	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	cout << fixed << setprecision(2);

	int year = 1;
	double preBalance=loan,interest, newBalance, total;
	interest = loan * (rate / 100);
	total = preBalance + interest;
	newBalance = total - payment;

	while (newBalance > 0 && payment < loan)
	{

		cout << setw(13) << left << year;
		cout << setw(13) << left << preBalance;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << newBalance;
		cout << "\n";
		preBalance = newBalance;
		interest = preBalance * (rate / 100);
		total = preBalance + interest;
		newBalance = total - payment;
		year++;
	}
		cout << setw(13) << left << year;
		cout << setw(13) << left << preBalance;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		payment = total;
		cout << setw(13) << left << payment;
		newBalance=total-payment;
		cout << setw(13) << left << newBalance;

	return 0;
}
