#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H
namespace cacluate {
	class Calculator {
	public:
		void divison(int,int);
		void subtraction(int,int);
		void adding(int,int);
		void multiplication(int,int);
		Calculator();
	private:
		int first_input;
		int second_input;
	};
}
#endif
#include"calculator.cpp"
namespace cacluate {
	Calculator::Calculator() {
		first_input = 0;
		second_input = 0;
	}

	void Calculator::multiplication(int multpliy_f, int multpliy_s) {
		int soultion = 0;
		first_input = multpliy_f;
		second_input = multpliy_s;

		soultion = first_input * second_input;
		std::cout <<"The answer is:"<< soultion << std::endl;
	}

	void Calculator::adding(int addf_input, int adds_input) {
		int add_s = 0;
		first_input = addf_input;
		second_input = adds_input;
		add_s = first_input + second_input;
		std::cout << "The answer is:" << add_s << std::endl;
	}

	void Calculator::subtraction(int f, int s) {
		int sub_s = 0;
		first_input = f;
		second_input = s;
		sub_s = first_input - second_input;
		std::cout << "The answer is:" << sub_s <<std::endl;

	}

	void Calculator::divison(int first, int second) {
		int slove = 0;
		first_input = first;
		second_input = second;
		slove = first_input / second_input;

		std::cout << "The answer is:" << slove << std::endl;
	}
}