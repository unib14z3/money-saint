#pragma once

#include <string>
#include <vector>

#include "Utils/Utils.hpp"

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
    Contact(
        utils::ids::ContactID i,
        std::string n,
        std::string e,
        std::string m
    );

    Contact(
        utils::ids::ContactID i,
        std::string n,
        std::string e,
        std::string m,
        std::vector<std::string> tags
    );
    Contact(const Contact::Details& ctx);
    ~Contact();

    void set(const Contact::Details& ctx);

    // Details getDetails() const;
    unsigned int getId() const;
    std::string getName() const;
    std::string getEmail() const;
    std::string getMobileNumber() const;
    std::vector<std::string> getTags() const;
};
