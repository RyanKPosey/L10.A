/*
    Programmer: Ryan Posey
    Assignment: L7
    Purpose: Practice using nested structs
    Due date: 9/110/3025
*/

#include <iostream>
#include <iomanip>

using namespace std;

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
    std::cout <<  left << " | Name: " << left << setw(20) << this->first_name_ << " " << this->last_name_ << endl
        << left << " | Address: " << left << setw(20) << this->address_ << endl
        << left << " | Height: " << left << setw(20) << std::fixed << std::setprecision(1) << this->height_inches_ << " in" << endl
        << left << " | DOB: " << left << setw(20) << this->date_of_birth_ << endl
        << left << " | Gender: " << left << setw(20) << this->gender_ << endl;
}

int main() {
    personType p1{
        "Sabrina",
        "Morales",
        "662 S. Southhampton Avenue Vista, CA 92083",
        51.2,
        "24 July 2017",
        'F'
    };

    p1.print();
}