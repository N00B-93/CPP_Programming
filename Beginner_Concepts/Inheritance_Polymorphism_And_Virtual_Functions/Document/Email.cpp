#include "Email.hpp"

// No-arg constructor that instantiates an Email with default values.
Email::Email(): sender(""), receiver(""), title(""){};

/**
 * Instantiates a new Email Object.
 * 
 * @param senderEmail The Email of the sender.
 * @param receiverEmail The Email of the receiver.
 * @param mailBody The content of the Email.
 */
Email::Email(std::string senderEmail, std::string receiverEmail, std::string mailTitle, std::string mailBody): sender(senderEmail),
receiver(receiverEmail), title(mailTitle), Document(mailBody)
{};

/**
 * This returns the Email of the sender.
 * 
 * @return The Email of the sender.
 */
std::string Email::getSender() const
{
    return this->sender;
}

/**
 * This returns the Email of the receiver.
 * 
 * @return The Email of the receiver.
 */
std::string Email::getReceiver() const
{
    return this->receiver;
}

/**
 * This returns the title of the Email.
 * 
 * @return The title of the Email.
 */
std::string Email::getTitle() const
{
    return this->title;
}

/**
 * This sets the sender of an Email to the specified value.
 * 
 * @param sender The Email of the sender.
 */
void Email::setSender(std::string sender)
{
    this->sender = sender;
}

/**
 * This sets the receiver of an Email to the specified value.
 * 
 * @param receiver The Email of the receiver.
 */
void Email::setReceiver(std::string receiver)
{
    this->receiver = receiver;
}

/**
 * This sets the title of an Email to the specified value.
 * 
 * @param title The title of the Email.
 */
void Email::setTitle(std::string title)
{
    this->title = title;
}
/**
 * Overloads the = operator for an Email Object.
 * 
 * @param email The Email to be assigned to the current instance.
 * @return A reference to an Email Object.
 */
const Email& Email::operator=(const Email& email)
{
    if (this != &email)
    {
        this->text.clear();
        this->sender.clear();
        this->title.clear();
        this->receiver.clear();

        this->setSender(email.getSender());
        this->setReceiver(email.getReceiver());
        this->setTitle(email.getTitle());
        this->setText(email.getText());
    }
    
    return *this;
}
