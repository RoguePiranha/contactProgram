#include "contact.h"

// Default constructor implementation
Contact::Contact()
{
    // Initialize the name and phone attributes with default values
    name = "";
    phone = "";
}

// Constructor implementation
Contact::Contact(const std::string &name, const std::string &phone)
{
    this->name = name;
    this->phone = phone;
}

// Getter implementations
std::string Contact::getName() const
{
    return name;
}

std::string Contact::getPhone() const
{
    return phone;
}

// Setter implementations
void Contact::setName(const std::string &name)
{
    this->name = name;
}

void Contact::setPhone(const std::string &phone)
{
    this->phone = phone;
}
