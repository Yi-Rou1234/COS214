#ifndef EMAIL_NOTIFICATION_OBSERVER_H
#define EMAIL_NOTIFICATION_OBSERVER_H

#include "ContractObserver.h"
#include <string>

class EmailNotificationObserver : public ContractObserver {
public:
    EmailNotificationObserver(const std::string& email);
    void update(const Contract* contract) override;
    virtual ~EmailNotificationObserver();
private:
    std::string email;
};

#endif // EMAIL_NOTIFICATION_OBSERVER_H
