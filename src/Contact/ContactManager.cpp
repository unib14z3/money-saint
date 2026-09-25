#include <string>
#include <vector>

#include "Contact.hpp"
#include "ContactManager.hpp"

void ContactManager::addContact(const ContactCtx& ctx){
    Contact contact(ctx);
    contacts.push_back(contact);
}

void ContactManager::updateContact(const ContactCtx& ctx){
    Contact contact(ctx);
    for(Contact& item : contacts){
        if (item.getId() != ctx.id)
            return;
        
        item.set(ctx);
    }
}