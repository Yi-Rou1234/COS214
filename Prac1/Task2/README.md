# Task 2: JSON Template Method

This is a simple C++ framework for consuming and parsing different types of data, including JSON-like and OData-like formats. The framework consists of classes that allow you to create consumers for specific data types and format the data accordingly.

## Classes

- `Client`
The base class Client provides a template method printData that prints formatted data using the parseData function. This class defines the common behavior for data consumers.

- `Consumer`
The class Consumer is derived from Client and serves as an intermediate class for specific consumer types. It provides an abstract parseData function that needs to be implemented by its subclasses.

- `ODataConsumer`
The class ODataConsumer is derived from Consumer and specializes in parsing and formatting data in a format similar to OData. It preserves the section hierarchy and indentation.

- `JsonConsumer`
The class JsonConsumer is derived from Consumer and specializes in parsing and formatting JSON-like data. It preserves the indentation and handles braces and brackets.

- `ConsumerCreator`
The class ConsumerCreator provides a way to create instances of different data consumers based on the specified type. It includes methods to set the consumer type, get the consumer type, and create a consumer instance.

## How to Build and Run

To compile and run the code, follow these steps:

1. Clone the Repository: Clone this repository to your local machine.

2. Navigate to the Source Directory: Open a terminal/command prompt and navigate to the directory containing the source code.

3. Compile the Code: Use a C++ compiler to compile the code.

4. Run the Executable: Execute the compiled binary:
 ```
  ./main
  ```
This is a simple consumer application that demonstrates parsing and formatting of data using different consumer types. It supports parsing and formatting of data in both OData and JSON formats.

We created were given that the ConsumerCreator is a factory method. 
We have data a template method: print() and this calls the parseData() which will be overriden by the subclass. We then print the data to the console.

Compilation:
Run:
make
make run
make clean

The program demonstrates the use of the 'ConsumerCreator' class to create consumers for OData and JSON data formats. It creates instances of 'ODataConsumer' and 'JsonConsumer', and then uses these consumers to parse and format input data.

The main program flow is as follows:

Create a 'ConsumerCreator' instance.
Create an 'ODataConsumer' using the 'ConsumerCreator'.
Parse and format OData input using the created 'ODataConsumer'.
Delete the 'ODataConsumer'.
Create a 'JsonConsumer' using the 'ConsumerCreator'.
Parse and format JSON input using the created 'JsonConsumer'.
Delete the 'JsonConsumer'.

OData Input:
<section> 
    section 1
    <section> 
        subsection 2
        subitem 3 
    </section>
    subitem 4 
</section>

Json Input:
{
   section 1{
      subsection 2
      subitem 3
   }
   subitem 4
}

## Credits

Cherry Cheung 21524892
Yi-Rou Hung 22561154
