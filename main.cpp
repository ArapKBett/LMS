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
