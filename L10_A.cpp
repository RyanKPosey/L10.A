/*
    Programmer: Ryan Posey
    Assignment: L7
    Purpose: Practice using nested structs
    Due date: 9/110/3025
*/

#include <iostream>
#include <iomanip>

class personType {
    public:
        std::string first_name_;
        std::string last_name_;
        std::string address_;
        double height_inches_{};
        std::string date_of_birth_;  
        char gender_{}; 

        void print() const;
        bool equals(const personType& other) const;
};

void personType::print() const {
    std::cout << "Name: " << this->first_name_ << " " << this->last_name_
        <<  " | Address: " << this->address_
        << " | Height: " << std::fixed << std::setprecision(1) << this->height_inches_ << " in"
        << " | DOB: " << this->date_of_birth_
        << " | Gender: " << this->gender_ << '\\n';
}