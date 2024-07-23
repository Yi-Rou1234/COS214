#include "Contract.h"
#include "EmailNotificationObserver.h"
#include <iostream>

int main() {
    Contract contract("Bucketlist Contract");

    EmailNotificationObserver* observer1 = new EmailNotificationObserver("Monica@gmail.com");
    EmailNotificationObserver* observer2 = new EmailNotificationObserver("Cherry@gmail.com");
    EmailNotificationObserver* observer3 = new EmailNotificationObserver("John@gmail.com");
    contract.addObserver(observer1);
    contract.addObserver(observer2);
    contract.addObserver(observer3);

    contract.addCondition("Condition 1: Bird watching together");
    contract.addCondition("Condition 2: Dinner night");
    contract.addCondition("Condition 3: Star gazing");

    //COMMENT IT OUT FOR IT TO BE IN NEGOTIATION STATE
    contract.acceptContract();

    contract.notifyObservers();

    std::cout << contract.toString() << std::endl;

    bool allObserversAccepted = true;
    for (const auto& entry : contract.getObserverAcceptanceStatus()) {
        if (!entry.second) {
            allObserversAccepted = false;
            break;
        }
    }
    
    if (allObserversAccepted) {
        contract.completeContract();
        std::cout << "Contract is in the COMPLETED state!" << std::endl;
    } else {
        std::cout << "Contract cannot be accepted until all observers agree." << std::endl;
    }

    delete observer1;
    delete observer2;
    delete observer3;

    return 0;
}
