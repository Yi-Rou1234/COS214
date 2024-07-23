#ifndef CONSUMERCREATOR_H
#define CONSUMERCREATOR_H

#include <string>
#include "Consumer.h"

class ConsumerCreator {
private:
    std::string consumerType;

public:
    ConsumerCreator();
    void setConsumer(const std::string& type);
    std::string getConsumer();
    Consumer* createConsumer();
};

#endif 
