#include "TokenValidationHandler.h"
#include <iostream>

void TokenValidationHandler::handleRequest(const std::string& request) {
    if (request == "validate_token") {
        bool isValid = true; 
        if (isValid) {
            std::cout << "Token is valid." << std::endl;
        } else {
            std::cout << "Token is not valid, returning an error." << std::endl;
        }
    } else {
        /// Token is invalid, return an error (simplified logic)
        std::cout << "TokenValidationHandler cannot handle this request." << std::endl;
    }

    if (getNextHandler()) {
        /// std::cout << "Token Nonce is passed to next handler." << std::endl;
        getNextHandler()->handleRequest(request); // Pass the request to the next handler
    }
}
