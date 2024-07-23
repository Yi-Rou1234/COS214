#ifndef VALIDATESIGNINNONCEHANDLER_H
#define VALIDATESIGNINNONCEHANDLER_H

#include "AuthHandler.h"

class ValidateSignInNonceHandler : public AuthHandler {
public:
    void handleRequest(const std::string& request) override;
};

#endif 
