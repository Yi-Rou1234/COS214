#ifndef DBQUERY_H
#define DBQUERY_H
#include <string>
using namespace std;

class DBQuery {
public:
    virtual string Query (string input) = 0;
};


#endif 
