#include <iostream>

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);

int main()
{
    int x, y;
    char Op;

    std::cout << "Enter the expression: ";
    std::cin >> x >> Op >> y;

    if (Op == '+')
    {
        std::cout << addition(x, y);
    }
    else if (Op == '-')
    {
        std::cout << subtraction(x, y);
    }
    else if (Op == '*')
    {
        std::cout << multiplication(x, y);
    }
    else if (Op == '/')
    {
        std::cout << division(x, y);
    }
}
int addition(int x, int y)
{
    return x + y;
}
int subtraction(int x, int y)
{
    return x - y;
}
int multiplication(int x, int y)
{
    return x * y;
}
int division(int x, int y)
{
    return x / y;
}
