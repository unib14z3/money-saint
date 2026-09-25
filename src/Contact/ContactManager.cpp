#include <string>
#include <vector>

#include "Contact.hpp"
#include "Utils/Utils.hpp"
#include "ContactManager.hpp"

namespace {
    std::vector<Contact> contacts;
    unsigned int contact_count = 0;

    utils::ids::ContactID genContactId(){
        contact_count++;
        utils::ids::ContactID id{contact_count};
        return id;
    }
}

void ContactManager::addContact(
    std::string name,
    std::string email,
    std::string mobileNumber,
    std::vector<std::string> tags)
{
    //genarate a unique id for the contact
    utils::ids::ContactID id = genContactId();
    Contact contact(id, name, email, mobileNumber, tags);
    contacts.push_back(contact);
}

std::vector<Contact> ContactManager::getContacts(){
    return contacts;
}
