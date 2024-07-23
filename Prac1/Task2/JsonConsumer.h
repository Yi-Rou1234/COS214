#ifndef JSONCONSUMER_H
#define JSONCONSUMER_H

#include "Consumer.h"
class JsonConsumer : public Consumer {
public:
    std::string parseData(const std::string& data) override;
};

#endif
