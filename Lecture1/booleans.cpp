
#include <iostream>

int main(){

    bool red_light{false};
    bool green_light{true};

    if(red_light == true){
        std::cout <<"Stop"<<std::endl;
    }
    else{
        std::cout<<"Go Throogh"<< std::endl;
    }

    if(green_light){
        std::cout << "The light is green" << std::endl;
    }
    else{
        std::cout<<"This is NOT green" << std::endl;
    }

    // size of memory sizeof()
    std::cout << "size(bool) :"  << sizeof(bool) << std::endl;

    //Printing out a bool
    //1--->> true
    //0--->> false

    std::cout<<std::endl;

    std::cout<< "red_light : "<<red_light<<std::endl;
    std::cout<<"Green_Light : "<< green_light<<std::endl;




    return 0;
}