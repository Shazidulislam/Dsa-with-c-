
#include <iostream>

int main(){

    char charceter1{'a'};
    char charceter2{'r'};
    char charceter3{'r'};
    char charceter4{'o'};
    char charceter5{'w'};

    std::cout<< charceter1 << std::endl;
    std::cout<< charceter2 << std::endl;
    std::cout<< charceter3 << std::endl;
    std::cout<< charceter4 << std::endl;
    std::cout<< charceter5 << std::endl;


    //One byte in memory : 2^8 = 256 different value (0-255)
    std::cout <<std::endl;

    char value = 65; //! Ascii charectr code for "A"
     std::cout << "Value : " << value <<std::endl; //A
     std::cout << "Value(int) : " << static_cast<int>(value)<< std::endl;


     char ch = 'B';
     std::cout << "ch : "<< (int)ch<< std::endl;



}