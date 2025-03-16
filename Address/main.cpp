//
//  main.cpp
//  Address
//
//  Created by William Tissi on 3/16/25.
//

#include <iostream>
#include "Validation.hpp"

using namespace std;

struct Address {  // creating my adress struct
    string street;
    string city;
    string zipCode;
};

struct Customer {
    string name;
    Address address;   //embed adress in customer struct
};

int main() {
    Customer customer;    // new variable with the dat type customer
    
    cout << "Enter customer name: ";
    getline(cin, customer.name);
    
    // validation of the user input 
    while (!isValidNameOrCity(customer.name)) {
        cout << "Invalid name. Please enter again: ";
        getline(cin, customer.name);
    }

    cout << "Enter street: ";
    getline(cin, customer.address.street);
    
    while (!isValidString(customer.address.street)) {
        cout << "Invalid street. Please enter again: ";
        getline(cin, customer.address.street);
    }

    cout << "Enter city: ";
    getline(cin, customer.address.city);
    
    while (!isValidNameOrCity(customer.address.city)) {
        cout << "Invalid city. Please enter again: ";
        getline(cin, customer.address.city);
    }

   cout << "Enter ZIP code (5 digits): ";
    getline(cin, customer.address.zipCode);
    
    while (!isValidZipCode(customer.address.zipCode)) {
        cout << "Invalid ZIP code. Please enter a 5-digit ZIP: ";
        getline(cin, customer.address.zipCode);
    }

    // Display customer information
    cout << "\nCustomer Information: "<<endl;;
    cout << "Name: " << customer.name << endl;
    cout << "Street: " << customer.address.street << endl;
    cout << "City: " << customer.address.city << endl;
    cout << "ZIP Code: " << customer.address.zipCode << endl;

    return 0;
}
