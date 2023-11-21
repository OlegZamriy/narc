#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User {
private:
    std::string firstName;
    std::string surname;
    std::string midname;
    std::string address;
    std::string phone;

public:
    User();
    User(std::string, std::string, std::string, std::string, std::string);
    ~User();

    std::string getFirstName() const;
    std::string getSurname() const;
    std::string getMidname() const;
    std::string getAddress() const;
    std::string getPhone() const;

    void setFirstName(std::string);
    void setSurname(std::string);
    void setMidname(std::string);
    void setAddress(std::string);
    void setPhone(std::string);
};

#endif 
