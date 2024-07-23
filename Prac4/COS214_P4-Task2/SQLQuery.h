#ifndef SQLQUERY_H
#define SQLQUERY_H
#include "DBQuery.h"
#include <string>
using namespace std;

class SQLQuery : public DBQuery{
public:
    string Query (string input);
};


#endif 