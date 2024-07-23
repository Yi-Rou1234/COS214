#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>

class Client {
public:
    //since this is a pure virtual function, it must be overridden by any subclass that inherits from 'Client'
    virtual std::string parseData(const std::string& data) = 0;    
    virtual ~Client() {}
    void printData(const std::string& data);        //template method
};

#endif 
