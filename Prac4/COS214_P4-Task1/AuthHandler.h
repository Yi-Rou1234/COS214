#ifndef AUTHHANDLER_H
#define AUTHHANDLER_H

#include <string>

class AuthHandler {
public:
    AuthHandler* setNext(AuthHandler* next);
    virtual void handleRequest(const std::string& request) = 0;
    AuthHandler* getNextHandler() const; /// Getter method

private:
    AuthHandler* nextHandler;
};

enum class RequestType {
    REQUEST_NONCE,
    VALIDATE_SIGNIN_NONCE,
    VALIDATE_TOKEN,
    PROCESS_REQUEST
};

#endif 
