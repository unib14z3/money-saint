#pragma once

#include <string>
#include <vector>

#include "Contact.hpp"

namespace {
    std::vector<Contact> contacts;
}

namespace  ContactManager{
    std::vector<Contact> getContacts();

    void addContact(
        std::string name, 
        std::string email, 
        std::string mobileNumber, 
        std::vector<std::string> tags
    );
    
    void updateContactDetail(
        unsigned int id,
        std::string field, 
        std::string value
    );
    
    void removeContact(unsigned int id);
    void saveContacts();
    void loadContacts();
};