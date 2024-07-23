#include "ConsumerCreator.h"
using namespace std;
#include <iostream>

int main() {
    ConsumerCreator consumerCreator;

    // OData parsing
    consumerCreator.setConsumer("OData");
    Consumer* odataConsumer = consumerCreator.createConsumer();

    if (odataConsumer) {
        string odataInput = R"(
<section> 
    section 1
    <section> 
        subsection 2
        subitem 3 
    </section>
    subitem 4 
</section>
)";
        cout << odataConsumer->printData(odataInput);
        delete odataConsumer;
    } else {
        cout << "Invalid consumer type." << endl;
    }

    // JSON parsing
    consumerCreator.setConsumer("JSON");
    Consumer* jsonConsumer = consumerCreator.createConsumer();

    if (jsonConsumer) {
        string jsonInput = "{\n   section 1{\n      subsection 2\n      subitem 3\n   }\n   subitem 4\n}";
        cout << jsonConsumer->printData(jsonInput);
        delete jsonConsumer;
    } else {
        cout << "Invalid consumer type." << endl;
    }

    return 0;
}
