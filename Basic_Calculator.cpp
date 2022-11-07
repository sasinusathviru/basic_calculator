/* Basic Calculator */

#include <iostream>
#include <math.h>

int main()
{
    float num1 = 0, num2 = 0, result = 0; // Should assign '0' to each variable to avoid getting weird outputs when the output should be 0
    char Ar_op;

    std::cout << "Supported Operations: '+' , '-', '*' , '/' , '^' " << std::endl;

    while (true)
    {
        std::cout << "Enter the expression: ";
        std::cin >> num1 >> Ar_op >> num2;

        if (Ar_op == '+') // Addition
        {
            result = num1 + num2;
        }
        else if (Ar_op == '-') // Subtraction
        {
            result = num1 - num2;
        }
        else if (Ar_op == '*') // Multiplication
        {
            result = num1 * num2;
        }
        else if (Ar_op == '/') // Devision
        {
            result = num1 / num2;
        }
        else if (Ar_op == '^') // Power
        {
            result = pow(num1, num2);
        }
        else
        {
            std::cout << "Unsupported Operator..." << '\n';
            continue;
        }

        std::cout << "The result is " << result << std::endl;
    }

    std::cin.get();
    std::cin.get();
}
