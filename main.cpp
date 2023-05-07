#include <iostream>
#include <string>
#include <map>
#include "contact.h"

// Function to add a new contact to the map
void add_contact(std::map<std::string, Contact> &contacts, const std::string &name, const std::string &phone)
{
    contacts[name] = Contact(name, phone);
}

// Function to delete a contact from the map
void delete_contact(std::map<std::string, Contact> &contacts, const std::string &name)
{
    contacts.erase(name);
}

// Function to search for a contact in the map and return a pointer to it, or nullptr if not found
Contact *search_contact(std::map<std::string, Contact> &contacts, const std::string &name)
{
    auto it = contacts.find(name);
    if (it != contacts.end())
    {
        return &(it->second);
    }
    return nullptr;
}

int main()
{
    std::map<std::string, Contact> contacts;
    int option;
    std::string name, phone;

    // Main loop to display menu and accept user input
    while (true)
    {
        // Display menu options
        std::cout << "Choose an option:\n";
        std::cout << "1. Add contact\n";
        std::cout << "2. Delete contact\n";
        std::cout << "3. Search contact\n";
        std::cout << "4. List all contacts\n";
        std::cout << "5. Exit\n";
        std::cin >> option;

        // Process user input and execute corresponding action
        if (option == 1)
        {
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter phone: ";
            std::cin >> phone;
            add_contact(contacts, name, phone);
        }
        else if (option == 2)
        {
            std::cout << "Enter name: ";
            std::cin >> name;
            delete_contact(contacts, name);
        }
        else if (option == 3)
        {
            std::cout << "Enter name: ";
            std::cin >> name;
            Contact *contact = search_contact(contacts, name);
            if (contact)
            {
                std::cout << "Name: " << contact->getName() << ", Phone: " << contact->getPhone() << std::endl;
            }
            else
            {
                std::cout << "Contact not found." << std::endl;
            }
        }
        else if (option == 4)
        {
            if (contacts.empty())
            {
                std::cout << "No contacts found." << std::endl;
            }
            else
            {
                std::cout << "List of contacts:" << std::endl;
                for (const auto &entry : contacts)
                {
                    std::cout << "Name: " << entry.second.getName() << ", Phone: " << entry.second.getPhone() << std::endl;
                }
            }
        }
        else if (option == 5)
        {
            break;
        }
        else
        {
            std::cout << "Invalid option. Please try again." << std::endl;
        }
    }

    return 0;
}
