#ifndef NEWDBQUERY_H
#define NEWDBQUERY_H
#include "DBQuery.h"

class NewDBQuery : public DBQuery{
public:
    string Query (string input);
};


#endif