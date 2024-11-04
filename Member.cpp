class Member {
public:
    int memberID;
    std::string name;
    std::string address;
    std::string phoneNumber;

    Member(int id, std::string n, std::string a, std::string p)
        : memberID(id), name(n), address(a), phoneNumber(p) {}

    void displayMember() {
        std::cout << "Member ID: " << memberID << "\nName: " << name << "\nAddress: " << address << "\nPhone Number: " << phoneNumber << std::endl;
    }
};
