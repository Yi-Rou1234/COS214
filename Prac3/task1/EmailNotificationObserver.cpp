#include "EmailNotificationObserver.h"
#include "Contract.h"
#include <iostream>

EmailNotificationObserver::EmailNotificationObserver(const std::string& email)
    : email(email) {}

EmailNotificationObserver::~EmailNotificationObserver() {}

void EmailNotificationObserver::update(const Contract* contract) {
    std::cout << "Email notification sent to " << email << ": \nContract state changed to " << contract->getState() << std::endl<< std::endl;
}
