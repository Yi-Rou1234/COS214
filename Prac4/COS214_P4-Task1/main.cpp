#include "AuthHandler.h"
#include "RequestNonceHandler.h"
#include "ValidateSignInNonceHandler.h"
#include "TokenValidationHandler.h"
#include "AuthenticationHandler.h"

int main() {
    AuthHandler* handler = new RequestNonceHandler();
    handler->setNext(new ValidateSignInNonceHandler())
           ->setNext(new TokenValidationHandler())
           ->setNext(new AuthenticationHandler());

    handler->handleRequest("REQUEST_NONCE");
    handler->handleRequest("validate_signin_nonce");
    handler->handleRequest("validate_token");

    delete handler;

    return 0;
}
