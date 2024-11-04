#include <algorithm>

// Function to search books by ID
Book* searchBookByID(std::vector<Book>& books, int id) {
    auto it = std::find_if(books.begin(), books.end(), id { return book.bookID == id; });
    return it != books.end() ? &(*it) : nullptr;
}

// Function to search books by title
Book* searchBookByTitle(std::vector<Book>& books, const std::string& title) {
    auto it = std::find_if(books.begin(), books.end(), &title { return book.title == title; });
    return it != books.end() ? &(*it) : nullptr;
}

// Function to search members by ID
Member* searchMemberByID(std::vector<Member>& members, int id) {
    auto it = std::find_if(members.begin(), members.end(), id { return member.memberID == id; });
    return it != members.end() ? &(*it) : nullptr;
}

// Function to search members by name
Member* searchMemberByName(std::vector<Member>& members, const std::string& name) {
    auto it = std::find_if(members.begin(), members.end(), &name { return member.name == name; });
    return it != members.end() ? &(*it) : nullptr;
}
