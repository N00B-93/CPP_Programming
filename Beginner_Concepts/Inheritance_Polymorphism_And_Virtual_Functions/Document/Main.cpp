#include <iostream>
#include "Document.hpp"
#include "Email.hpp"
#include "File.hpp"

/**
 * This checks whether a Document, Email or File Object contains a specific word.
 * 
 * @param The Document, Email or File.
 * @param keyword The word to be searched for.
 * @return true if the Document, Email or File contains the keyword, else false.
 */
bool containsKeyword(const Document& docObject, std::string keyword)
{
    return (docObject.getText().find(keyword) != std::string::npos);
}

int main(int argc, char* const argv[])
{
    // Create a Document object
    Document document("This is a sample document.");

    // Test Document class
    std::cout << "\nDocument Text: " << document.getText() << "\n";
    std::cout << "Setting new text...\n";
    document.setText("Updated document text.");
    std::cout << "Document Text after update: " << document.getText() << "\n";

    // Create Email objects
    Email email1("sender1@example.com", "receiver1@example.com", "Subject 1", "Content of Email 1");
    Email email2("sender2@example.com", "receiver2@example.com", "Subject 2", "Content of Email 2");

    // Test Email class
    std::cout << "\nEmail 1:\n";
    std::cout << "Sender: " << email1.getSender() << "\n";
    std::cout << "Receiver: " << email1.getReceiver() << "\n";
    std::cout << "Subject: " << email1.getTitle() << "\n";
    std::cout << "Message: " << email1.getText() << "\n\n";
    std::cout << "Email 2:\n";
    std::cout << "Sender: " << email2.getSender() << "\n";
    std::cout << "Receiver: " << email2.getReceiver() << "\n";
    std::cout << "Subject: " << email2.getTitle() << "\n";
    std::cout << "Message: " << email2.getText() << "\n";

    // Test ContainsKeyword with Email objects
    std::cout << "\nContains 'Content' in Email 1: " << std::boolalpha << containsKeyword(email1, "Content") << "\n";
    std::cout << "Contains 'Important' in Email 2: " << std::boolalpha << containsKeyword(email2, "Important") << "\n";

    // Create File objects
    File file1("/path/to/file1.txt");
    File file2("/path/to/file2.txt");

    // Test File class
    std::cout << "\nFile 1 Path: " << file1.getPath() << "\n";
    std::cout << "File 2 Path: " << file2.getPath() << "\n";

    // Test setting new path for File 1
    std::cout << "Setting new path for File 1...\n";
    file1.setPath("/new/path/to/file1.txt");
    std::cout << "Updated File 1 Path: " << file1.getPath() << "\n";

    // Test ContainsKeyword with File objects
    std::cout << "\nContains 'file' in File 1: " << std::boolalpha << containsKeyword(file1, "file") << "\n";
    std::cout << "Contains 'path' in File 2: " << std::boolalpha << containsKeyword(file2, "path") << "\n";

    return 0;
}
