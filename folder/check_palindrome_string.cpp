#include<iostream>
#include<string.h>

bool is_palindrome(char string[])
{
    int len = strlen(string);
    for (int i = 0; i < len/2; i++)
    {
        /* code */
        if (string[0] != string[len - i - 1])
        {
            /* code */
            return false;
        }
        else
            return true;
        
    }
    
}
using namespace std;

int main()
{
    char string1[] = "abcdcba";
    char string2[] = "not palindrome string!";
    if (is_palindrome(string1)) // check string1 
    {
        /* code */
        cout<<"Is a palindrome!";
    }
    else
        cout<<"Is not a palindrome!";
    
    return 0;
}