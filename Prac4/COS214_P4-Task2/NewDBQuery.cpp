#include "NewDBQuery.h"

string NewDBQuery::Query(string input) {
    return "FROM " + input + " SELECT *";
}
