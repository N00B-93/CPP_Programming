#include "Document.hpp"

// No-arg constructor that instantiates a new Document Object with default values.
Document::Document(): text(""){};

/**
 * Instantiates a new Document Object.
 * 
 * @param body The text of the Document.
 */
Document::Document(std::string body): text(body){};

/**
 * This returns the text in a Document.
 * 
 * @return The text in a Document.
 */
std::string Document::getText() const
{
    return this->text;
}

/**
 * This sets the text field of a Document Object to the specified value.
 * 
 * @param text The new text.
 */
void Document::setText(std::string text)
{
    this->text = text;
    // this->text.append(text);
}

/**
 * Overloads the = operator.
 * 
 * @param document The Document Object to be assigned to the current instance.
 * @return A constant reference to the instance of the current Document Object.
 */
const Document& Document::operator=(const Document& document)
{
    if (this != &document)
    {
        this->text.clear();
        this->text.append(document.getText());
    }

    return *this;
}
