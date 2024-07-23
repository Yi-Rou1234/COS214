#include "Client.h"

void Client::printData(const std::string& data) {
    std::string formattedData = parseData(data);
    std::cout << "Formatted Data: " << formattedData << std::endl;
}
