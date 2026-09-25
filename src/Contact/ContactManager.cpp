#include <string>
#include <vector>

#include "Contact.hpp"
#include "ContactManager.hpp"


void ContactManager::addContact(
    std::string name, 
    std::string email, 
    std::string mobileNumber, 
    std::vector<std::string> tags)
{
    Contact contact(name, email, mobileNumber, tags);
    contacts.push_back(contact);
}

std::vector<Contact> ContactManager::getContacts(){
    return contacts;
}