#ifndef discounts_h
#define discounts_h

#include <string>

double applyStudentDiscount(double price);

double applySeniorDiscount(double price);


double applyEmployeeDiscount(double price);


double applyDiscount(const std::string& code, double price);

#endif
