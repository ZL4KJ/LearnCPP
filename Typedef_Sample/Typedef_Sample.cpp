// Typedef_Sample.cpp :
//

#include <iostream>
#include <vector>


/*
    typedef keyword in C++ is used for aliasing existing data types, user-defined data types, and pointers to
    a more meaningful name that can help make code easier to read.
*/

typedef std::string text_t; // Alias std::string as text_t
typedef int number_t; // alias int as number

// more commonly, typedefs are defined with using, works better with templates.
using text_t = std::string;
using number_t = int;

int main()
{
    text_t firstName = "Kim";
    number_t age = 21;

    std::cout << "Hello " << firstName << '\n';
    std::cout << "You are " << age << " years old\n";

    return 0;
}
