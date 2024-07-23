#ifndef TOKENVALIDATIONHANDLER_H
#define TOKENVALIDATIONHANDLER_H

#include "AuthHandler.h"

class TokenValidationHandler : public AuthHandler {
public:
    void handleRequest(const std::string& request) override;
};

class DerivedHandler : public AuthHandler {
    /// You can access nextHandler in this derived class
};

#endif 
