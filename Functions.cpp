#include <iostream>
#include <string>

int sum(const int&, const int&);
int sub(const int&, const int&);
int division(const int&, const int&);
int mult(const int&, const int&);
int mod(const int&, const int&);

double sum(const double&, const double&);
double sub(const double&, const double&);
double division(const double&, const double&);
double mult(const double&, const double&);
//считаем, что ,бинарный от 0 до 99
enum Operation {
	Sum,
	Sub,
	Division,
	Mult,
	Mod,
	Exp,
};

Operation askForOperation();
bool isUnary(Operation);
double applyUnaryOperation(Operation, double x);
double applyBinaryOperation(Operation, double a, double b);
void printResult(double);
double askForNumber(const std::string&, int&);
double askForNumber(const std::string&, double&);

int main()
{
	while (true) {
		std::string var_type, operation;
		std::cout << "Input type of numbers" << "\n";
		std::cin >> var_type;
		int numberOfOperation;
		if (var_type == "int") {
			Operation operation = askForOperation();
			double result;
			if (isUnary(operation)) {
				double x;
				askForNumber("Input the number", x);
				result = applyUnaryOperation(operation, x);
			} else {
				double a;
				a = askForNumber("Input the 1st number", a);
				double b;
				b = askForNumber("Input the 1st number", b);
			}
		}
	}
	return 0;
}

// int argument

int sum(const int& a, const int& b)
{
	return a + b;
}

int sub(const int& a, const int& b)
{
	return a - b;
}

int division(const int& a, const int& b)
{
	return a / b;
}

int mult(const int& a, const int& b)
{
	return a * b;
}

int mod(const int& a, const int& b)
{
	return a % b;
}
// double argument

double sum(const double& a, const double& b) 
{
	return a + b;
}
double sub(const double& a, const double& b)
{
	return a - b;
}
double division(const double& a, const double& b)
{
	return a / b;
}
double mult(const double& a, const double& b)
{
	return a * b;
}

Operation askForOperation()
{
	std::string menu = "sum = 0 \n sub = 1 \n division = 2\n mult = 3 \n mod = 4\n exp = 5";
	std::cout << "operation";
	Operation operation;
	int numberOfOperation;
	std::cout << "Input operation.\n" << menu;
	std::cin >> numberOfOperation;
	//return (Operation)numberOfOperation;
	return static_cast <Operation>(numberOfOperation);
}

bool isUnary(Operation operation) 
{
	if (operation > 99) {
		return true;
	} 
	return false;
}
double applyUnaryOperation(Operation, double x) 
{
	//TODO

}
double applyBinaryOperation(Operation operation, double a, double b) 
{
	//TODO
	double result;
	switch (operation)
	{
	case Sum: result = sum(a, b);
		break;
	case Sub: result = sub(a, b);
		break;
	case Mult: result = mult(a, b);
		break;
	case Division: result = division(a, b);
		break;

	}
}
void printResult(double) 
{
	
}

double askForNumber(const std::string& label, int& arg)
{
	std::cout << label;
	std::cin >> arg;
}
double askForNumber(const std::string& label, double& arg)
{
	std::cout << label;
	std::cin >> arg;
}