#pragma once

#include <string>
#include <vector>


class Contact{
private:
    struct Details{
        unsigned int id;
        std::string name;
        std::string email;
        std::string mobileNumber;
        std::vector<std::string> tags;
    };

    Details details;

public:
    Contact( std::string n, std::string e, std::string m);
    Contact( std::string n, std::string e, std::string m, std::vector<std::string> tags);
    Contact(const Contact::Details& ctx);
    ~Contact();

    void set(const Contact::Details& ctx);
    unsigned int getId() const;

    friend class ContactManager;
};

