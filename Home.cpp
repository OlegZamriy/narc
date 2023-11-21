// Home.cpp
#include "Home.h"

void Home::show() {
    User* userFrom = new User();
    User* userTo = new User("Alex", "Miller", "", "USA, London, st. London apt. 45", "+14342334254234");

    Courier* courier = new Courier("John Doe", "Courier Bike");

    Package<std::string>* package = new Package<std::string>("MESSAGE DATA", 2, 2, 2, 2, 222);

    PackageDTO<std::string>* packageDTO = new PackageDTO<std::string>(userFrom, userTo, package, courier);

    // Display information from the DTO
    std::cout << "From: " << packageDTO->getFromUser()->getFirstName() << std::endl;
    std::cout << "To: " << packageDTO->getToUser()->getFirstName() << std::endl;
    std::cout << "Courier: " << packageDTO->getCourier()->getName() << std::endl;
    std::cout << "Package Data: " << packageDTO->getPackage()->getData() << std::endl;
}
