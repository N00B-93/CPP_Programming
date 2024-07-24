#include "File.hpp"

// No-arg constructor that instantiates a new File Object with default values.
File::File(): filePath(""){};

/**
 * Instantiates a new File Object.
 * 
 * @param path The File's path.
 */
File::File(std::string path): filePath(path){};

/**
 * This returns the path of a File.
 * 
 * @return The path of a File.
 */
std::string File::getPath() const
{
    return this->filePath;
}

/**
 * This sets the path of a File to the specified value.
 * 
 * @param newPath The new file path.
 */
void File::setPath(std::string newPath)
{
    this->filePath = newPath;
}

/**
 * Overloads the = operator for the File class.
 * 
 * @param file The File Object to be assigned to the current instance.
 */
const File& File::operator=(const File& file)
{
    if (this != &file)
    {
        this->filePath.clear();
        this->filePath = file.getPath();
    }

    return *this;
}
