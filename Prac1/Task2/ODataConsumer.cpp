#include "ODataConsumer.h"
#include "Consumer.h"
using namespace std;
#include <sstream>

string ODataConsumer::parseData(const std::string& data) {
    string result;
    istringstream iss(data);
    string line;
    int currentIndent = 0;

    while (std::getline(iss, line)) {
        size_t startTag = line.find("<section>");
        size_t endTag = line.find("</section>");
        
        if (startTag != string::npos) {
            result += string(currentIndent, ' ');
        } else if (endTag != string::npos) {
            result += string(currentIndent, ' ');
        } else if (!line.empty()) {
            result += string(currentIndent, ' ') + line + '\n';
        }
    }

    return "OData Parsing \n"+result;
}