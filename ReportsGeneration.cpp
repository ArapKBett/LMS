// Function to generate report of all available books
void reportAvailableBooks(const std::vector<Book>& books) {
    std::cout << "Available Books:\n";
    for (const auto& book : books) {
        if (book.status == "Available") {
            book.displayBook();
        }
    }
}

// Function to generate report of books currently borrowed
void reportBorrowedBooks(const std::vector<Book>& books) {
    std::cout << "Borrowed Books:\n";
    for (const auto& book : books) {
        if (book.status == "Borrowed") {
            book.displayBook();
        }
    }
}

// Function to generate report of members with overdue books
void reportOverdueMembers(const std::vector<Transaction>& transactions, const std::vector<Member>& members) {
    std::cout << "Members with Overdue Books:\n";
    for (const auto& transaction : transactions) {
        if (transaction.returnDate.empty()) {
            double fees = calculateOverdueFees(transaction.borrowDate, "2024-11-04"); // Current date
            if (fees > 0) {
                auto member = searchMemberByID(members, transaction.memberID);
                if (member) {
                    std::cout << "Member ID: " << member->memberID << ", Name: " << member->name << ", Overdue Fees: $" << fees << "\n";
                }
            }
        }
    }
}
