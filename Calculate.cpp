//Program Done By Cebastian Santiago
//Simple calculator::
#include<iostream>
#include"calculator.h"
#include<cctype>

using namespace cacluate;
using namespace std;

int input_second(int&);
int input(int&);
int choose(int&);
void welcome();
void calculator(int&, int&, int&, Calculator);
char again(char);

int main() {
	char calc = '\0';
	int input_one = 0;
	int input_second = 0;
	int options = 0;
	Calculator A1;
	
	do {
		welcome();
		calculator(options, input_one, input_second, A1);


	} while (again(calc) == 'Y' );

	return 0;
}
char again(char tries) {
	cout << endl;
	cout << "Do you want to calculate something else?" << endl;;
	cout << "(Y for yes or N for No):? "<< ": ";
	cin >> tries;
	cout << endl;
	tries = toupper(tries);

	return tries;
}




void calculator(int& options, int& first, int& second, Calculator calculate) {
	choose(options);
	input(first);
	input_second(second);
	
	switch (options){
	case 1:calculate.adding(first, second);
		break;
	case 2:calculate.multiplication(first,second);
		break;
	case 3:calculate.divison(first,second);
		break;
	case 4:calculate.subtraction(first,second);
		break;
	}
}







int input_second(int& second) {
	
	cout << "Enter the second number: ";
	cin >> second;
	
	while (!cin) {
		cin.clear();
		cin.ignore(600, '\n');
		cout << "Not a number!" << endl;
		cout << "Enter the second number: ";
		cin >> second;
	}
	
	return second;
}



int input(int& input) {
	
	cout << "Enter the first number: ";
	cin >> input;
	
	while (!cin){
		cin.clear();
		cin.ignore(600, '\n');
		cout << "Not a number!" << endl;
		cout << "Enter the first number: ";
		cin >> input;
	}
	
	return input;
}


void welcome() {
	cout << "*********Welcome to Calculator 1.0*************\n" << endl;
}

int choose(int& choose) {

	cout << "Calculator Menu" << endl;
	cout << "1.ADDITION" << endl;
	cout << "2.Multiplication" << endl;
	cout << "3.Division" << endl;
	cout << "4.Subtraction" << endl;
	cout << endl;
	cout << endl;
	cout << "Pick one?: ";
	cin >> choose;

	while (choose < 1 || choose > 4 || !cin){
		cin.clear();
		cin.ignore(400, '\n');
		cout << "Not a correct answer ";
		cout << "Retype Please!" << endl;
		cout << "Pick one?: ";
		cin >> choose;
	}
	return choose;
}