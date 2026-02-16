
#include <iostream>
#include <iomanip>

int main()
{
/*
    // Declare and initialize the variables

    float number1{1.2134567890987654321};
    double number2{2.123455784367902346809};
    long double number3{3.123456789098765432123456789098765};
    //!precision
    std::cout  << std::setprecision(20); //* Control the precision from std::cout.


    // print out the size
    std::cout << "Size of float : " << sizeof(number1) << " : " << number1 << std::endl;
    std::cout << "Size of double : " << sizeof(number2) << " : " << number2 << std::endl;
    std::cout << "Size of long double : " << sizeof(number3) << " : " << number3 << std::endl;

    /*

    std::cout << "Size of float : "<< sizeof(float)<<std::endl;
    std::cout << "Size of double : "<< sizeof(double)<<std::endl;
    std::cout << "Size of long double : "<< sizeof(long double)<<std::endl;
    
*/
/*
    //Float problems : The precision is usually too limited
    //for a lot of applications
    float number4  {192400013.0f}; // Error : narrowing conversion

    std::cout <<"Number 4 : "<< number4 << std::endl;

*/

//! Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

    // std::cout << "-------------------------" << std::endl;
    
    // double number5 {192400023};
    // double number6 {1.92400023e8};
    // double number7 {1.924e8};           // Can ommit the lower 00023
    //                                     // for simplicity if our application allows that.
    // double number8 {0.00000000003498};
    // double number9 {3.498e-11}; // multiply with 10 exp(-11)
    
    // std::cout << "number5 is : " << number5 << std::endl;
    // std::cout << "number6 is : " << number6 << std::endl;
    // std::cout << "number7 is : " << number7 << std::endl;
    // std::cout << "number8 is : " << number8 << std::endl;
    // std::cout << "number9 is : " << number9 << std::endl;


    //!Infinity and NAN

    std::cout << std::endl;
    std::cout << "Infinity and NAN" << std::endl;

    double number10{-5.6};
    double number11{}; // Initialized to 0
    double number12{}; // Intialized to 0

    //infinity
    double result (number10/number11);

    std::cout << number10 << " / "<< number11 << " Yields " << result << std::endl;
    std::cout << result << " + " << number10 << " Yields " << result + number10 << std::endl;

    //NAN
    result = number11 / number12;
    std::cout << number11 << " / "<< number12 << " = " << result << std::endl; 

    return 0;
}
