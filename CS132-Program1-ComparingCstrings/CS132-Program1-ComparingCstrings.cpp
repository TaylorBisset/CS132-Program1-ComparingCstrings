////
// Author:       Taylor Bisset 
// Section:      A
// Assignment:   P1
// Description:  Without the use of cstring functions, 
//               this program alphabatizes the given strings
////


#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

#ifdef _WIN32
    system("pause");
#else
    cout << "Press any key to continue . . . ";
    cin.get();
#endif
    return 0;
}
