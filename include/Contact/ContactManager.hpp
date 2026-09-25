#pragma once

#include <string>
#include <vector>

#include "Contact.hpp"

class  ContactManager{
    private:
        std::vector<Contact> contacts;
    
    public: 
        std::vector<Contact> getContacts();

        void addContact(const Contact::Details& ctx);

        void addContact(
            std::string name, 
            std::string email, 
            std::string mobileNumber, 
            std::vector<std::string> tags);

        void updateContact(const Contact::Details& ctx);
        void removeContact();

        void saveContacts();
        void loadContacts();
};