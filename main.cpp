void saveBooks(const std::vector<Book>& books) {
    std::ofstream file("books.txt");
    for (const auto& book : books) {
        file << book.bookID << "," << book.title << "," << book.author << "," << book.genre << "," << book.status << "\n";
    }
    file.close();
}

void loadBooks(std::vector<Book>& books) {
    std::ifstream file("books.txt");
    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string id, title, author, genre, status;
        std::getline(ss, id, ',');
        std::getline(ss, title, ',');
        std::getline(ss, author, ',');
        std::getline(ss, genre, ',');
        std::getline(ss, status, ',');
        books.emplace_back(std::stoi(id), title, author, genre, status);
    }
    file.close();
}

int main() {
    std::vector<Book> books;
    std::vector<Member> members;
    std::vector<Transaction> transactions;

    // Load data from files
    loadBooks(books);

    // Example usage
    books.emplace_back(1, "The Great Gatsby", "F. Scott Fitzgerald", "Fiction", "Available");
    saveBooks(books);

    // Display all available books
    reportAvailableBooks(books);

    // Display all borrowed books
    reportBorrowedBooks(books);

    // Display overdue members
    displayOverdueMembers(transactions, members);

    return 0;
}
