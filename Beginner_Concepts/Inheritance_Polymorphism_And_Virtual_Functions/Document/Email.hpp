#pragma once
#include "Document.hpp"

class Email: public Document
{
    // Utility functions of the Email class.
    public:
        Email();
        Email(std::string, std::string, std::string, std::string);
        std::string getSender() const;
        std::string getReceiver() const;
        std::string getTitle() const;
        void setSender(std::string);
        void setReceiver(std::string);
        void setTitle(std::string);
        const Email& operator=(const Email&);

    // Attributes of an Email.
    protected:
        std::string sender, receiver, title;
};
