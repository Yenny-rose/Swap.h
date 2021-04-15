#ifndef SWAP_H
#define SWAP_H
using namespace std;
#include <iostream>
class Swap{
    public:
     static string str(std::string& str);
};
// Function to reverse a string
string Swap::str(std::string& str)
{
    int pointer1 = 0;
    int pointer2 = str.length()-1;

    // loop until mid stack
    while (pointer1 < pointer2) {
        char temp = str[pointer1] ;
        str[pointer1] = str[pointer2] ;
        str[pointer2] = temp ;
        pointer1 += 1 ;
        pointer2 -= 1 ;
    }
    return str;
}
#endif