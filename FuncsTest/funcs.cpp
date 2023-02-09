#include <iostream>
#include "funcs.h"
#include <random>

void LogComplete()
{
	log("All Functions are working !");
}

int multiply(int a, int b)
{
    return a * b;
}

void multiplyresult(int a, int b)
{
    int result = multiply(a, b);
    std::cout << result << std::endl;
}

void welcomemsg(int a, const char* b)
{
    std::cout << "Hello " << b << std::endl;
    std::cout << "You have " << a << " health" << std::endl;
}

void log(const char* message)
{
    std::cout << message << std::endl;
}

void randombool()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 1);
    std::cout << dis(gen) << '\n';
}