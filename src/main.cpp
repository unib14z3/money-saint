#include <iostream>
#include <chrono>
#include <vector>

#include "ContactManager.hpp"
#include "ExpenseManager.hpp"

int main(){
    // create a contact
    ContactManager::addContact(
        "John Doe",
        "john.doe@example.com",
        "123-456-7890",
        {"friend", "colleague"}
    );

    ContactManager::addContact(
        "Rishikesh Katare",
        "rishikeshkatare20@gmail.com",
        "9370289157",
        {"self","myNum"}
    );

    auto now = std::chrono::system_clock::now();

    ExpenseManager::addExpense("MIT Academy of Engineering");

    // display the contacts
    std::vector<Contact> contacts = ContactManager::getContacts();
    for (const Contact& contact : contacts) {
        std::cout << "Contact ID: " << contact.getId() << std::endl;
        std::cout << "Name: " << contact.getName() << std::endl;
        std::cout << "Email: " << contact.getEmail() << std::endl;
        std::cout << "Mobile: " << contact.getMobileNumber() << std::endl;
        std::cout << "Tags:";

        const std::vector<std::string> tags = contact.getTags();
        if (tags.empty()) {
            std::cout << " none" << std::endl;
        } else {
            for (const std::string& tag : tags) {
                std::cout << " " << tag;
            }
            std::cout << std::endl;
        }

        std::cout << "------------------------" << std::endl;
    }

}
