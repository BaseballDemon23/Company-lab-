#ifndef discounts_h
#define discounts_h

#include <string>

double applyStudentDiscount(double price) {
    return price * 0.90;
}

double applySeniorDiscount(double price) {
    return price * 0.80;
}


double applyEmployeeDiscount(double price) {
    return price * 0.85;
}


double applyDiscount(const std::string& code, double price) {
    if (code == "student") {
        return applyStudentDiscount(price);
    } else if (code == "senior") {
        return applySeniorDiscount(price);
    } else if (code == "employee") {
        return applyEmployeeDiscount(price);
    } else {
        return price; 
    }
}

#endif
