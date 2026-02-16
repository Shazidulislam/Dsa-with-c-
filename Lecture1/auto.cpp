
#include<iostream>

int main(){
    auto var0 {12};
    auto var1 {13.0};
    auto var2 {13.5f};
    auto var3 {15.6l};
    auto var4 {'e'};

    // int modifier suffixes 
    auto var5 {123u}; // unsigned
    auto var6 {122ul}; //unsigned long
    auto var7 {1244ll};// long long

    std::cout << "var0 occupies : "<< sizeof(var0)<< " : bytes" << std::endl;
    std::cout << "var1 occupies : "<< sizeof(var1)<< " : bytes" << std::endl;
    std::cout << "var2 occupies : "<< sizeof(var2)<< " : bytes" << std::endl;
    std::cout << "var3 occupies : "<< sizeof(var3)<< " : bytes" << std::endl;
    std::cout << "var4 occupies : "<< sizeof(var4)<< " : bytes" << std::endl;
    std::cout << "var5 occupies : "<< sizeof(var5)<< " : bytes" << std::endl;
    std::cout << "var6 occupies : "<< sizeof(var6)<< " : bytes" << std::endl;
    std::cout << "var7 occupies : "<< sizeof(var7)<< " : bytes" << std::endl;

   
     return 0;
}