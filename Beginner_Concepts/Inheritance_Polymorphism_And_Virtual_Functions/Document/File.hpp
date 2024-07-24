#pragma once
#include "Document.hpp"

class File: public Document
{
    // Utility functions of the File class.
    public:
        File();
        File(std::string);
        std::string getPath() const;
        void setPath(std::string);
        const File& operator=(const File&);

    // Attributes of a File.
    protected:
        std::string filePath;
};