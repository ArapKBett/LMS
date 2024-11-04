#include <ctime>

// Function to calculate overdue fees
double calculateOverdueFees(const std::string& borrowDate, const std::string& returnDate) {
    std::tm tm_borrow = {};
    std::tm tm_return = {};
    std::istringstream ss_borrow(borrowDate);
    std::istringstream ss_return(returnDate);
    ss_borrow >> std::get_time(&tm_borrow, "%Y-%m-%d");
    ss_return >> std::get_time(&tm_return, "%Y-%m-%d");
    std::time_t time_borrow = std::mktime(&tm_borrow);
    std::time_t time_return = std::mktime(&tm_return);
    double difference = std::difftime(time_return, time_borrow) / (60 * 60 * 24);
    return difference > 0 ? difference * 1.0 : 0.0; // $1 per day
}

// Function to display overdue members
void displayOverdueMembers(const std::vector<Transaction>& transactions, const std::vector<Member>& members) {
    std::cout << "Overdue Members:\n";
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
