#pragma once

#include <string>
#include <vector>

#include "Contact.hpp"

class ContactManager{
    private:
        std::vector<Contact> contacts;
    
    public: 
        std::vector<Contact> getContacts();
        void createContact();
        void addContact(const ContactCtx& ctx);
        void updateContact(const ContactCtx& ctx);
        void removeContact();

        void saveContacts();
        void loadContacts();
};