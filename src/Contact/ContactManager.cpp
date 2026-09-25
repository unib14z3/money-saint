#include <string>
#include <vector>

#include "Contact.hpp"
#include "ContactManager.hpp"

void ContactManager::addContact(const Contact::Details& ctx){
    Contact contact(ctx);
    contacts.push_back(contact);
}

void ContactManager::addContact(
    std::string name, 
    std::string email, 
    std::string mobileNumber, 
    std::vector<std::string> tags)
{
    Contact contact(name, email, mobileNumber, tags);
    contacts.push_back(contact);
}

void ContactManager::updateContact(const Contact::Details& ctx){
    Contact contact(ctx);
    for(Contact& item : contacts){
        if (item.getId() != ctx.id)
            return;
        
        item.set(ctx);
    }
}

std::vector<Contact> ContactManager::getContacts(){
    return contacts;
}