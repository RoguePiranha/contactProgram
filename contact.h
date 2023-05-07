#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
public:
    // Default constructor implementation
    Contact(); // Default constructor
    
    // Constructor to initialize the contact object
    Contact(const std::string &name, const std::string &phone);

    // Getters for name and phone number
    std::string getName() const;
    std::string getPhone() const;

    // Setters for name and phone number
    void setName(const std::string &name);
    void setPhone(const std::string &phone);

private:
    std::string name;
    std::string phone;
};

#endif // CONTACT_H
