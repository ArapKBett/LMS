class Transaction {
public:
    int transactionID;
    int memberID;
    int bookID;
    std::string borrowDate;
    std::string returnDate;

    Transaction(int tid, int mid, int bid, std::string bDate, std::string rDate)
        : transactionID(tid), memberID(mid), bookID(bid), borrowDate(bDate), returnDate(rDate) {}

    void displayTransaction() {
        std::cout << "Transaction ID: " << transactionID << "\nMember ID: " << memberID << "\nBook ID: " << bookID << "\nBorrow Date: " << borrowDate << "\nReturn Date: " << returnDate << std::endl;
    }
};
