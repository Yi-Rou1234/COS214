#include "DBQueryAdapter.h"

DBQueryAdapter::DBQueryAdapter(NewDBQuery *newDBQuery) {
    this->newDBQuery = newDBQuery;
}

string DBQueryAdapter::Query(string input) {
    return newDBQuery->Query(input);
}