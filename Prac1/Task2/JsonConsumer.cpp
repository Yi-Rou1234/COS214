#include "JsonConsumer.h"
using namespace std;

string JsonConsumer::parseData(const std::string& data) {
    string parsedData;
    int indentation = 0;
    bool inString = false;

    for (char c : data) {
        if (c == '"') {
            inString = !inString; 
        }

        if (inString) {
            parsedData += c;
        } else {
            if (c == '{') {
                parsedData += string(indentation, ' ');
                indentation += 3;
            } else if (c == '}') {
                parsedData = parsedData.substr(0, parsedData.find_last_not_of(" \n\r\t") + 1);
                indentation -= 3;
                parsedData += string(indentation, ' ');
            } else if (c == '\n') {
                parsedData += '\n';
                continue;
            } else {
                parsedData += c;
            }
        }
    }

    return "Json Parsing"+parsedData;
}