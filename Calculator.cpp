// Calculator.cpp : 
//nazaroveg@yandex.ru

#include <iostream>
#include <string>
class calculator
{
public:
	
	double num_1;
	double num_2;
	double result;
	std::string sign;

	bool set_num1(double &num_1)
	{
		return (num_1 == 0 || num_1 != 0) ? true : false;
	}
	
	
	
	double add(double num_1, double num_2) //+
	{
		result = num_1 + num_2;
		return result;
	}
	double multiply(double num_1, double num_2) //*
	{
		result = num_1 * num_2;
		return result;
	}
	double subtract_1_2(double num_1, double num_2) // b-a
	{
		result = num_2 - num_1;
		return result;
	}
	double subtract_2_1(double num_1, double num_2) // a-b
	{
		result = num_1 - num_2;
		return result;
	}
	double divide_1_2(double num_1, double num_2)  // a/b
	{
		result = num_1 / num_2;
		return result;
	}
	double divide_2_1(double num_1, double num_2)  // b/a
	{
		result = num_2 / num_1;
		return result;
	}


	void print(std::string sign, double result)
	{
		std::cout << "num_1 " << sign << " num_2 = " << result << std::endl;
	}
	void print_2(std::string sign, double result)
	{
		std::cout << "num_2 " << sign << " num_1 = " << result << std::endl;
	}
	void read(double& num_1, double& num_2)
	{
		std::cout << "Введите num1: \n";
		std::cin >> num_1;
		std::cout << "Введите num2: \n";
		std::cin >> num_2;
	}
		

	
	

private:


};





int main()
{
	setlocale(LC_ALL, "RUS");
	calculator calc{}, calc_2{};

	for (;;)
	{
		calc.read(calc.num_1, calc_2.num_2);  //read keyboard
		calc.set_num1(calc.num_1);
		
		

		calc.add(calc.num_1, calc_2.num_2); //+
		calc.sign = "+";
		calc.print(calc.sign, calc.result);
		
		calc.subtract_2_1(calc.num_1, calc_2.num_2);  //a-b
		calc.sign = "-";
		calc.print(calc.sign, calc.result);

		calc.subtract_1_2(calc.num_1, calc_2.num_2);  //b-a
		calc.sign = "-";
		calc.print_2(calc.sign, calc.result);
		
		calc.multiply(calc.num_1, calc_2.num_2);   // *
		calc.sign = "*";
		calc.print(calc.sign, calc.result);
		
		calc.divide_1_2(calc.num_1, calc_2.num_2);  // a/b
		calc.sign = "/";
		calc.print(calc.sign, calc.result);

		calc.divide_2_1(calc.num_1, calc_2.num_2);   //b/ a
		calc.sign = "/";
		calc.print_2(calc.sign, calc.result);


	}
}
