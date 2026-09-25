#include <string>
#include <vector>

#include "Contact.hpp"

Contact::Contact(
    utils::ids::ContactID i,
    std::string n,
    std::string e,
    std::string m
){
    details.name = n;
    details.email = e;
    details.mobileNumber = m;
    details.tags = {};
}

Contact::Contact(
    utils::ids::ContactID i,
    std::string n,
    std::string e,
    std::string m,
    std::vector<std::string> tags
){
    details.name = n;
    details.email = e;
    details.mobileNumber = m;
    details.tags = std::move(tags);
}

Contact::Contact(const Contact::Details& ctx)
:   details(ctx)
{ }

Contact::~Contact() = default;

void Contact::set(const Contact::Details& ctx){
    details = ctx;
}

unsigned int Contact::getId() const{
    return details.id;
}

std::string Contact::getName() const{
    return details.name;
}

std::string Contact::getEmail() const{
    return details.email;
}

std::string Contact::getMobileNumber() const{
    return details.mobileNumber;
}

std::vector<std::string> Contact::getTags() const{
    return details.tags;
}
