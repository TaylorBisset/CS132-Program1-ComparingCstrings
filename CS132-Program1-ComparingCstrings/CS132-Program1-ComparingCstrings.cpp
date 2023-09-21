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

int compareTo(const char* lstr, const char* rstr)
{
    if (lstr < rstr)
    {
        return -1;
    }
    else if (lstr > rstr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int length(const char* str)
{
    int len;
    for (len = 0; str[len] != '\0'; len++) {}
    return len;
}

int main()
{
    char str1[] = "batman";
    char str2[] = "cat";
    char str3[] = "cast";
    char str4[] = "catagory";
    char str5[] = "ZIP";

    cout << "batman "   << length(str1) << endl;
    cout << "cat "      << length(str2) << endl;
    cout << "cast "     << length(str3) << endl;
    cout << "catagory " << length(str4) << endl;
    cout << "ZIP "      << length(str5) << endl;

    cout << "comparing " << str1 << " & " << str2 << " " << compareTo(str1, str2) << endl;
    cout << "comparing " << str2 << " & " << str1 << " " << compareTo(str2, str1) << endl;

    cout << "comparing " << str3 << " & " << str2 << " " << compareTo(str3, str2) << endl;
    cout << "comparing " << str2 << " & " << str3 << " " << compareTo(str2, str3) << endl;

    cout << "comparing " << str4 << " & " << str2 << " " << compareTo(str4, str2) << endl;
    cout << "comparing " << str2 << " & " << str4 << " " << compareTo(str2, str4) << endl;

    cout << "comparing " << str2 << " & " << str2 << " " << compareTo(str2, str2) << endl;

    cout << "comparing " << str2 << " & " << str5 << " " << compareTo(str2, str5) << endl;
    cout << "comparing " << str5 << " & " << str2 << " " << compareTo(str5, str2) << endl;

#ifdef _WIN32
    cout << endl;
    system("pause");
#else
    cout << endl;
    cout << "Press any key to continue . . . ";
    cin.get();
#endif
    return 0;
}

/*
batman 6
cat 3
cast 4
catagory 8
ZIP 3
comparing batman & cat -1
comparing cat & batman 1
comparing cast & cat 1
comparing cat & cast -1
comparing catagory & cat 1
comparing cat & catagory -1
comparing cat & cat 0
comparing cat & ZIP -1
comparing ZIP & cat 1

Press any key to continue . . .
*/
