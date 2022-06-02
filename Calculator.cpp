// Calculator.cpp : 
//nazaroveg@yandex.ru

#include <iostream>
#include <string>
class calculator
{
public:
	

	bool set_num1(double num_1)
	{
		return (num_1 == 0) ? true : false;
	}
	bool set_num2(double num_2)
	{
		return (num_2 == 0) ? true : false;
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
	
	void doprint(double num_1,double num_2)
	{   
		std::string sign;
		add(num_1, num_2); //+
		sign = "+";
		print(sign, result);

		subtract_2_1(num_1, num_2);  //a-b
		sign = "-";
		print(sign, result);

		subtract_1_2(num_1, num_2);  //b-a
		sign = "-";
		print_2(sign, result);

		multiply(num_1, num_2);   // *
		sign = "*";
		print(sign, result);

		divide_1_2(num_1, num_2);  // a/b
		sign = "/";
		print(sign, result);

		divide_2_1(num_1, num_2);   //b/ a
		sign = "/";
		print_2(sign, result);
		
		
	}

	
	

private:
	double num_1;
	double num_2;
	double result;
};





int main()
{
	setlocale(LC_ALL, "RUS");
	calculator calc{};
	double nam_1, nam_2 = 0;
	for (;;)
	{
		
		
		
			std::cout << "Введите num1: \n";
			std::cin >> nam_1;
			std::cout << "Введите num2: \n";
			std::cin >> nam_2;
		
		calc.set_num1(nam_1);
		if (nam_1 == false)
		{
			std::cout << "Неверный ввод!\n ";
			continue;
		}
		calc.set_num2(nam_2);
		if (nam_2 == false)
		{
			std::cout << "Неверный ввод!\n ";
			continue;
		}
		calc.doprint(nam_1, nam_2);
	}
	   
}
