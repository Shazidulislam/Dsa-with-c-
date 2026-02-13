
#include <iostream>

int main()
{
    /*
    // Braced Initializers

    int elepent_count;

    int lion_count{};  // Initializes to zero
    int dog_count{10}; // initiailizes to 10
    int cat_count{15}; // initializer to 15
    // can use expression as initializer
    int domesticated_animals{dog_count + cat_count};

    //
    // int new_number{doesnot_exist};
    // try to initializes with fractional number
    //!int narrowing_conversion {2.9};

    std::cout << "elepent_count : "  << elepent_count << std::endl;
    std::cout << "lion_count : "  << lion_count << std::endl;
    std::cout << "dog_count : "  << dog_count<< std::endl;
    std::cout << "Cat_ount : "  << cat_count << std::endl;
    std::cout << "omesticated_animals : "  << domesticated_animals << std::endl;

*/

    //! Funtional Initialization
    /*
        int apple_count(5);
        int orange_count(10);
        int fruit_count(apple_count + orange_count);

        //int bad_initialization (doesnot_exist3 + dosenot_exist4);

        // Information lost. less safe than braced initializers
        int narrowing_conversion_functional(23.9); // output = 23

        std::cout <<"Apple_count : "<< apple_count << std::endl;
        std::cout <<"Orange_count : "<< orange_count << std::endl;
        std::cout <<"Fruit_count : "<< fruit_count << std::endl;
        std::cout <<"narrowing_conversion_functional : "<< narrowing_conversion_functional << std::endl;
    */

    // ! Assignment initialization
      
     int bike_count = 2;
     int truck_count = 7;
     int vehicle_count = bike_count + truck_count;
     int narrowing_conversion_assignment = 24.98;

     std::cout << "bike-count : "<<bike_count<<  std::endl;
     std::cout << "truck_count  : "<<truck_count <<  std::endl;
     std::cout << "vehicle_count : "<<vehicle_count<<  std::endl;
     std::cout << "narrowing_conversion_assignment : "<<narrowing_conversion_assignment<<  std::endl;
    return 0;
}
