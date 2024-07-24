#pragma once
#include <string>

class Document
{
    // Utility functions of the Document class.
    public:
        Document();
        Document(std::string);
        std::string getText() const;
        void setText(const std::string);
        const Document& operator=(const Document&);

    // Attribute of a Document.
    protected:
        std::string text;
};
