// #ifndef CONSUMER_H
// #define CONSUMER_H

// #include "Client.h"

// class Consumer : public Client {
// };

// class ODataConsumer : public Consumer {
// public:
//     virtual std::string parseData(const std::string& data) = 0 ;
// };

// class JsonConsumer : public Consumer {
// public:
//     virtual std::string parseData(const std::string& data) =0;
// };

// #endif
#ifndef CONSUMER_H
#define CONSUMER_H

#include <string>

class Consumer {
public:
    std::string printData(std::string& data);
    virtual std::string parseData(const std::string& data) = 0;
    virtual ~Consumer() {} // Don't forget the virtual destructor
};

#endif
