#ifndef CONTRACT_OBSERVER_H
#define CONTRACT_OBSERVER_H

class Contract; 

class ContractObserver {
public:
    virtual void update(const Contract* contract) = 0;
    virtual ~ContractObserver() {}
};

#endif // CONTRACT_OBSERVER_H
