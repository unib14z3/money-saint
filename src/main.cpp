#include <iostream>


#include "ContactManager.hpp"
#include "ExpenseManager.hpp"

int main(){
    // create a contact 
    ContactManager cM;
    cM.addContact(
        "John Doe",
        "john.doe@example.com",
        "123-456-7890",
        {"friend", "colleague"}
    );

    // display the contacts
    std::vector<Contact> contacts = cM.getContacts();
    for (const Contact& contact : contacts) {
        std::cout << "Contact ID: " << contact.getId() << std::endl;
    }

}