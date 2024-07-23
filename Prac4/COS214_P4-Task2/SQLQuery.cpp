#include "SQLQuery.h"

string SQLQuery::Query(string input) {
    return "SELECT * FROM " + input;
}
