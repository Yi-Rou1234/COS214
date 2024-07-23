#ifndef REQUESTNONCEHANDLER_H
#define REQUESTNONCEHANDLER_H

#include "AuthHandler.h"

class RequestNonceHandler : public AuthHandler {
public:
    void handleRequest(const std::string& request) override;
};

#endif 
