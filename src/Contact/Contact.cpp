#include <iostream>
#include <string>
#include <vector>

#include "Contact.hpp"

Contact::Contact(
    std::string n,
    std::string e,
    std::string m
){
    name = n;
    email = e;
    mobileNumber = m;
}

Contact::Contact(const ContactCtx& ctx)
:   id(ctx.id),
    name(ctx.name),
    email(ctx.email),
    mobileNumber(ctx.mobileNumber),
    tags(ctx.tags)

{ }

Contact::~Contact() = default;

void Contact::set(const ContactCtx& ctx){
    id = ctx.id;
    name = ctx.name;
    email = ctx.email;
    mobileNumber = ctx.mobileNumber;
    tags = ctx.tags;
}

unsigned int Contact::getId(){
    return id;
}