#include<iostream>

using namespace std;

void Find_MaxMin(int arr[], int n, int *pmax, int *pmin)
{
    int  max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min)
        {
            /* code */
            min = arr[i];
        }
 
    *pmax = max;
    *pmin = min;
    }  
}
int main()
{
    int arr[9] = {0,2,3,5,8,1,4,7,6};
    int _min,_max;
    Find_MaxMin(arr,9,&_max,&_min);
    cout <<"Max: " <<_max <<" " <<"Min: " << _min;

    return 0;

}