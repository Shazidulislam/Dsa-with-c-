
#include <iostream>

int main()
{

    int value{5};
    // Increement by one
    value = value + 1;
    std::cout << "The value is : " << value << std::endl;

    value = 5; // reset value to 5
    // decrement by one
    value = value - 1;
    std::cout << "The value is : " << value << std::endl;

    //----------------

    //!! Postfix
    std::cout << "=======Postfix increment and decrement==========" << std::endl;

    //* reset value to 5
    value = 5;

    std::cout << "The value is incrementing : " << value++ << std::endl;
    std::cout << "the value is : " << value << std::endl;

    std::cout << std::endl;

    //?? Decrement with postfix
    // reset the value of 5
    value = 5;
    std::cout << "This value is (decrementing) : " << value-- << std::endl;
    std::cout << "the value is : " << value << std::endl;

    

    return 0;
}
