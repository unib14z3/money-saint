#pragma once

#include <string>
#include <vector>

struct ContactCtx{
    unsigned int id;
    std::string name;
    std::string email;
    std::string mobileNumber;
    std::vector<std::string> tags;
};

class Contact{
private:
    unsigned int id;
    std::string name;
    std::string email;
    std::string mobileNumber;
    std::vector<std::string> tags;
public:
    Contact( std::string n, std::string e, std::string m);
    Contact(const ContactCtx& ctx);
    ~Contact();

    void set(const ContactCtx& ctx);

    unsigned int getId();

    friend class ContactManager;
};

