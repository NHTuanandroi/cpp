#include<iostream>


using namespace std;

int main()
{   
    int myarr[] = {1,2,3,4,5,6,7,8,9}; // declare myarr
    int length = sizeof(myarr) / sizeof(int); // number of element in array
    int temp = 0;
    for (int i = 0; i < length/2; i++)
    {
        /* code: swap element in array */
        temp = myarr[i];
        myarr[i] = myarr[length - i - 1];
        myarr[length- i - 1] = temp;
    }
    for (int i = 0; i < length; i++)
    {
        /* code: print element after swap*/
        cout<<myarr[i]<<" ";
    }
    
    
    return 0;
}