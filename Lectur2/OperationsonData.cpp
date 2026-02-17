
#include <iostream>

int main()
{

    int number1{70};
    int number2{20};

    // sum
    int result{number1 + number2};
    std::cout << "Result sum : " << result << std::endl;

    // subtrction
    result = number1 - number2;
    std::cout << "Result sub1 : " << result << std::endl;
    result = number2 - number1;
    std::cout << "Result sub2 : " << result << std::endl;

    // multipication
    result = number1 * number2;
    std::cout << "Result multipication : " << result << std::endl;

    // Division
    result = number1 / number2;
    std::cout << "Result division : " << result << std::endl;

    // Modulus
    result = number1 % number2;
    std::cout << "Result sum : " << result << std::endl;

    return 0;
}
