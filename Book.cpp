#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Book {
public:
    int bookID;
    std::string title;
    std::string author;
    std::string genre;
    std::string status;

    Book(int id, std::string t, std::string a, std::string g, std::string s)
        : bookID(id), title(t), author(a), genre(g), status(s) {}

    void displayBook() {
        std::cout << "Book ID: " << bookID << "\nTitle: " << title << "\nAuthor: " << author << "\nGenre: " << genre << "\nStatus: " << status << std::endl;
    }
};
