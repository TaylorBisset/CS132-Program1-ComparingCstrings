////
// Author:       Taylor Bisset 
// Section:      A
// Assignment:   P1
// Description:  Without the use of cstring functions, 
//               this program alphabatizes the given strings
////

#include <iostream>

using namespace std;

/*
if arg1 < arg2 returns a negative number
if arg1 > arg2 returns a positive number
if arg1 == arg2 returns zero
*/

int compareTo(const char* lstr, const char* rstr);  // needs to be written
int length(const char* str);                        // needs to be written

int main()
{
    char str1[] = "batman";
    char str2[] = "cat";
    char str3[] = "cast";
    char str4[] = "catagory";
    char str5[] = "ZIP";

    cout << "batman " << length(str1) << endl;
    cout << "cat " << length(str2) << endl;

    cout << "comparing " << str1 << " & " << str2 << " " << compareTo(str1, str2) << endl;
    cout << "comparing " << str2 << " & " << str1 << " " << compareTo(str2, str1) << endl;

    cout << "comparing " << str3 << " & " << str2 << " " << compareTo(str3, str2) << endl;
    cout << "comparing " << str2 << " & " << str3 << " " << compareTo(str2, str3) << endl;

    cout << "comparing " << str4 << " & " << str2 << " " << compareTo(str4, str2) << endl;
    cout << "comparing " << str2 << " & " << str4 << " " << compareTo(str2, str4) << endl;

    cout << "comparing " << str2 << " & " << str2 << " " << compareTo(str2, str2) << endl;

    cout << "comparing " << str2 << " & " << str5 << " " << compareTo(str2, str5) << endl;

#ifdef _WIN32
    system("pause");
#else
    cout << "Press any key to continue . . . ";
    cin.get();
#endif
    return 0;
}
