#include "RequestNonceHandler.h"
#include <iostream>

void RequestNonceHandler::handleRequest(const std::string& request) {
    if (request == "REQUEST_NONCE") {
        /// Generate and persist nonce (simplified logic)
        std::cout << "Generated and persisted nonce to DB." << std::endl;
    } else {
        /// Pass the request to the next handler
        if (getNextHandler()) {
            /// std::cout << "Request Nonce is passed to next handler." << std::endl;
            getNextHandler()->handleRequest(request);
        } else {
            std::cout << "No handler can process this request." << std::endl;
        }
    }
}
