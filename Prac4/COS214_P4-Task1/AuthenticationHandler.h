#ifndef AUTHENTICATIONHANDLER_H
#define AUTHENTICATIONHANDLER_H

#include "AuthHandler.h"

class AuthenticationHandler : public AuthHandler {
public:
    void handleRequest(const std::string& request) override;
    void setNextHandler(AuthenticationHandler nextHandler);
};

#endif 
