#pragma once

#include <string>
#include <vector>

#include "Contact.hpp"
#include "Expense.hpp"

using namespace std;

class Profile{
    // Personal details
    string name;
    string email;
    string mobileNumber;
    
    // Finantial details
    double budget;
    vector<Expense> fixedExpense;
    vector<Expense> expenses;

    // Contacts 
    vector<Contact> contacts;

    public:
        void addContacts(Contact);
        
        void setBudget();
        void addExpence();
        void addExpences();

};
