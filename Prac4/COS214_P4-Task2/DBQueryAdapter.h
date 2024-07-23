#ifndef DBQUERYADAPTER_H
#define DBQUERYADAPTER_H
#include "DBQuery.h"
#include "NewDBQuery.h"

class DBQueryAdapter : public DBQuery {
    NewDBQuery* newDBQuery;
public:
    DBQueryAdapter(NewDBQuery* newDBQuery);
    string Query(string input);
};


#endif 
