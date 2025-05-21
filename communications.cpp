#ifndef Communications_h
#define Communications_h

#include <string>
#include <algorithm>


std::string greetCustomer(const std::string& name) {
    return "Hello " + name + ", and welcome to Quality corp";
}


void formatAddress(std::string& address) {
    std::transform(address.begin(), address.end(), address.begin(), ::toupper);
}


std::string closingMessage(const std::string& productName) {
    return "Thank you for choosing " + productName  +   " We hope you enjoy it and buy more ";
}

#endif
