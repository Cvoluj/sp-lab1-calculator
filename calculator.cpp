#include "calculator.h"

int Calculator::Add (double a, double b)
{   
    std::cout << "Adding " << a << " and " << b << std::endl;
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{   
    std::cout << "Subtracting " << b << " from " << a << std::endl;
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    std::cout << "Multiplying " << a << " by " << b << std::endl;
    return a * b + 0.5;
}
