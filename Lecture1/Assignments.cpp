
#include <iostream>

int main()
{
    int var1{123}; //
    std::cout << "var1 : " << var1 << std::endl;

    var1 = -45;
    std::cout << "var1 : " << var1 << std::endl;

    std::cout << "----------" << std::endl;

    double var2{23.87}; // declar and initilaixation
    std::cout << "var2 : " << var2 << std::endl;
    var2 = 456.89; // Assign

    std::cout << "var2 : " << var2 << std::endl;
    std::cout << "----------" << std::endl;

    std::cout << std::endl;

    bool state{false};
    std::cout << "state : " << state << std::endl;
    std::cout << std::endl;

    state = true;
    std::cout << "state : " << state << std::endl;
    std::cout << "----------" << std::endl;

    //auto type declareation
    //carefule aboute auto assigments

    auto var3 {333u};// declare and initialize with type deduction

    std::cout<< "VAr3 : " << var3 << std::endl;

    var3 = -23; //!!Assign negetive number. DANGER
    std::cout << "var3 : "<< var3<<std::endl;

    return 0;
}
