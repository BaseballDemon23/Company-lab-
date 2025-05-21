//Ansh Patel
//Software design 
//5/16/25
//Headers lab
#include <iostream>
#include <string>
#include <iomanip>
#include "communications.h"
#include "discounts.h"



int main() {
    //Declaring variables 
    std::string name, address, couponCode, product = "quality racing drone ";
    double originalPrice = 299.99;


     std::cout<<"Welcome to Quality corp \n we are currently only selling the quality racing drone"<<"\n";
    //inputting your name
    std::cout << "Enter your name ";
    std::cin >> name;

    // Inputting the address of your house 
    std::cout << "Enter your street address ";
    std::cin >> address;

    // Input your coupon code and what type of coupon code it is 
    std::cout << "Enter your coupon code. (student,senior or employee) ";
    std::cin >> couponCode;

    // greeting customer 
    std::cout << "\n" << greetCustomer(name) << "\n";

    formatAddress(address);
    std::cout << "Formatted Address: " << address << "\n";

    // Dispalying the original and discount price 
    double finalPrice = applyDiscount(couponCode, originalPrice);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Original Price: $" << originalPrice<<"\n";
    std::cout << "Discounted Price: $" << finalPrice<<"\n";

   
    std::cout << closingMessage(product)<<"\n";

    return 0;
}
