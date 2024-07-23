#include "Contract.h"
#include "ContractObserver.h"

Contract::Contract(const std::string& name)
    : name(name), state("Negotiation") {}

void Contract::addObserver(ContractObserver* observer) {
    observers.push_back(observer);
    observerAcceptanceStatus[observer] = false;
}

void Contract::removeObserver(ContractObserver* observer) {
    // Implement removal logic if needed
}

void Contract::notifyObservers() {
    for (ContractObserver* observer : observers) {
        observer->update(this);
    }
}

void Contract::addCondition(const std::string& condition) {
    if (state == "Negotiation" || state == "Tentatively Accepted") {
        conditions.push_back(condition);
    }
}

void Contract::acceptContract() {
    if (state == "Negotiation") {
        for (ContractObserver* observer : observers) {
            observerAcceptanceStatus[observer] = true; // Mark all observers as accepted
        }
        state = "Accepted";
    }
}

void Contract::rejectContract() {
    if (state == "Negotiation" || state == "Tentatively Accepted") {
        state = "Rejected";
    }
}

void Contract::completeContract() {
    if (state == "Accepted") {
        state = "Completed";
    }
}

std::string Contract::toString() const {
    std::string result = name + ":\nState : " + state + "\n";

    if (state == "Tentatively Accepted" || state == "Accepted") {
        result += "\nVotes:\n";
        // Include the votes here
    }

    result += "Conditions:\n";
    for (const std::string& condition : conditions) {
        result += condition + "\n";
    }

    return result;
}
