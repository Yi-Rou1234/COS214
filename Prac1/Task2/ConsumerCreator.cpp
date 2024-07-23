#include "ODataConsumer.h" 
#include "JsonConsumer.h"  
#include "ConsumerCreator.h"

ConsumerCreator::ConsumerCreator() : consumerType("") {}

void ConsumerCreator::setConsumer(const std::string& type) {
    if (type == "OData" || type == "JSON") {
        consumerType = type;
    }
    // If another value is passed, do not set the consumerType value
}

std::string ConsumerCreator::getConsumer() {
    return consumerType;
}

Consumer* ConsumerCreator::createConsumer() {
    if (consumerType == "OData") {
        return new ODataConsumer();
    } else if (consumerType == "JSON") {
        return new JsonConsumer();
    }
    return nullptr;
}
