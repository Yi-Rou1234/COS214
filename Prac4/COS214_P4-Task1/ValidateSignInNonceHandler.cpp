#include "ValidateSignInNonceHandler.h"
#include <iostream>

void ValidateSignInNonceHandler::handleRequest(const std::string& request) {
    if (request == "validate_signin_nonce") {
        bool isSignatureValid = true; /// Simulate successful signature validation
        bool isNonceValid = true;     /// Simulate successful nonce validation

        if (isSignatureValid && isNonceValid) {
            /// Generate a fresh token (simplified logic)
            std::cout << "Signature and nonce are valid. Generating a fresh token." << std::endl;
        } else {
            /// Handle failures
            std::cout << "Signature or nonce validation failed." << std::endl;
        }
    } else if (getNextHandler()) {
        /// std::cout << "Validate Nonce is passed to next handler." << std::endl;
        getNextHandler()->handleRequest(request);
    }
}
