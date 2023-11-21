#ifndef PACKAGE_DTO_H
#define PACKAGE_DTO_H

#include "User.h"
#include "Package.h"
#include "Courier.h"

template<typename T>
struct PackageDTO {
private:
    User* fromUser;
    User* toUser;
    Package<T>* package;
    Courier* courier;

public:
    PackageDTO(User* fromUser, User* toUser, Package<T>* package, Courier* courier);

    
    User* getFromUser() const;
    User* getToUser() const;
    Package<T>* getPackage() const;
    Courier* getCourier() const;
};

#endif 
