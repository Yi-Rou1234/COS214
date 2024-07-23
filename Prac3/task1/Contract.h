#ifndef CONTRACT_H
#define CONTRACT_H

#include <string>
#include <map>

class ContractObserver; // Forward declaration

class Contract {
public:
    Contract(const std::string& name);
    void addObserver(ContractObserver* observer);
    void removeObserver(ContractObserver* observer);
    void notifyObservers();
    void addCondition(const std::string& condition);
    void acceptContract();
    void rejectContract();
    void completeContract();
    std::string toString() const;
    std::string getState() const {
        return state;
    }
    const std::map<ContractObserver*, bool>& getObserverAcceptanceStatus() const {
        return observerAcceptanceStatus;
    }

private:
    std::string name;
    std::string state;
    std::vector<std::string> conditions;
    std::vector<std::string> agreeingParties;
    std::vector<ContractObserver*> observers;
    std::map<ContractObserver*, bool> observerAcceptanceStatus;
};

#endif // CONTRACT_H
