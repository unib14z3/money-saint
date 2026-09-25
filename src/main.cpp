#include <iostream>


#include "ContactManager.hpp"
#include "ExpenseManager.hpp"

int main(){
    // create a contact 
    ContactCtx ctx;
    ctx.id = 1;
    ctx.name = "John Doe";
    ctx.email = "john.doe@example.com";
    ctx.mobileNumber = "123-456-7890";
    ctx.tags = {"friend", "colleague"};

    Contact contact(ctx);
    std::cout << "Contact ID: " << contact.getId() << std::endl;
}