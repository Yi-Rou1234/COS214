#include "AuthHandler.h"

AuthHandler* AuthHandler::setNext(AuthHandler* next) {
    nextHandler = next;
    return next;
}

AuthHandler* AuthHandler::getNextHandler() const {
    return nextHandler;
}

void AuthHandler::handleRequest(const std::string& request) {
    /// Implementation of handleRequest
}