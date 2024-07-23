# idk whats going on 

# Chain of Responsibility Pattern for FIDO2 Authentication

This project implements the Chain of Responsibility pattern to simulate the FIDO2 authentication flow. The FIDO2 authentication flow is a passwordless login process that uses a chain of handlers to perform various steps of authentication and authorization.

## Task Description

Whenever a project becomes larger, it is natural to split the application into multiple components. These components may have differing responsibilities, and the Chain of Responsibility pattern is used to handle requests sequentially without violating the Single Responsibility Principle.

In this example, we implement an authentication chain inspired by the FIDO2 authentication pattern, which involves the following steps:

1. Requesting a nonce value from the authentication server.
2. Validating the sign-in nonce.
3. Checking the validity of the token.
4. Final authentication and authorization.

## Files and Structure

The project is organized as follows:

- `main.cpp`: The entry point of the program that sets up the Chain of Responsibility and simulates the authentication process.
- `AuthHandler.h` and `AuthHandler.cpp`: The base class for all handlers, providing the structure for handling requests.
- `RequestNonceHandler.h` and `RequestNonceHandler.cpp`: Handler for generating and persisting nonce values.
- `ValidateSignInNonceHandler.h` and `ValidateSignInNonceHandler.cpp`: Handler for validating the sign-in nonce.
- `TokenValidationHandler.h` and `TokenValidationHandler.cpp`: Handler for validating the token.
- `AuthenticationHandler.h` and `AuthenticationHandler.cpp`: The final authentication and authorization handler.
- `Doxyfile`: The Doxygen configuration file for generating documentation.

