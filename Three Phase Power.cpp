#include<iostream>
#include<cmath>

using namespace std;

int main ()
{
	double V = 0, I = 0, PF;
	char connection;

	cout << " Three Phase Power";


	cout << "Enter a connection type ( Y for Star, D for Delta ) : ";
	cin >> connection;


	while (V <= 0)
	{
		cout << "Enter the value of Voltage (V) : ";
		cin >> V;
	}

	while (I <= 0)
	{
		cout << "Enter the value of Current (I) : ";
		cin >> I;
	}

	cout << "Enter the value of Power factor ( 0 to 1) : ";
	cin >> PF;

	while (PF < 0 || PF > 1)
	{
		cout << "Enter the value of Power factor ( 0 to 1) : ";
		cin >> PF;
	}
	// Calculation 

	double P, Q, S;

	S = sqrt(3) * V * I;
	P = S * PF;
	Q = S * sqrt(1 - PF * PF);

	cout << "\n Result \n";
	cout << "Apparent power : " << S << " VA \n";
	cout << "Active power : " << P << " W \n";
	cout << "Reactive power : " << Q << " VAR \n";

	return 0;

}