#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
	double Celcius;
	double C1, C2, C3;
	double Fahrenheit;
	double F1, F2, F3;
	
	cout << "Please enter your three temperature Celcius :" << endl;
	cin >> C1 >> C2 >> C3;
	cout << "Please enter your three temperature Fahrenheit :" << endl;
	cin >> F1 >> F2 >> F3;
	
	double FC1 = (9.0/5) * C1 + 32;
	double FC2 = (9.0/5) * C2 + 32;
	double FC3 = (9.0/5) * C3 + 32;
	
	double CF1 = (F1-32) * 5/9;
	double CF2 = (F2-32) * 5/9;
	double CF3 = (F3-32) * 5/9;
	
	cout <<       " Celcius           Fahrenheit              |           Fahrenheit                  Celcius" << endl;
	cout <<      " " << C1 <<"         " << FC1 << "          |           " << F1 << "              " <<  CF1  << endl;
	cout <<      " " << C2 <<"         " << FC2 << "          |           " << F2 << "              " <<  CF2  << endl;
	cout <<      " " << C3 <<"         " << FC3 << "          |           " << F3 << "              " <<  CF3  << endl;
	
	return 0;
}
