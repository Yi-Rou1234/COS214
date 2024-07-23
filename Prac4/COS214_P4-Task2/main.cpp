#include <iostream>
#include "NewDBQuery.h"
#include "DBQueryAdapter.h"
#include "SQLQuery.h"

int main() {

    DBQuery* db_old = new SQLQuery();
    std::cout << "Old DB: " << db_old->Query("table") << std::endl;

    NewDBQuery* newdbqueryobj = new NewDBQuery();
    DBQuery* db_new = new DBQueryAdapter(newdbqueryobj);
    std::cout << "New DB: " << db_new->Query("table") << std::endl;

    delete newdbqueryobj;
    delete db_new;

    return 0;
}


