#include<iostream>

using namespace std;

void NhapMang(int arr[], int n){
	for(int i = 0; i<n ;i++){
		cin>>arr[i];
	}
}
void InMang(int arr[],int n){
	for(int i = 0;i<n ;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int max2(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    int max2 = INT_MIN ;
    for (int i = 0; i < n; i++){
        if (max2 < a[i] && a[i] != max){
            max2 = a[i];
        }
    }
    
    return max2;
}

/*
#include <iostream>

using namespace std;

int main()
{
    int my_arr[]  = {1,2,5,4,3};
    int max =my_arr[0];
    int max2 = my_arr[1];
    if(max2>max)
    {
        int temp = max2;
        max2 = max;
        max = temp;
    }
    for(int i = 2; i< 5; i++)
    {
        if(my_arr[i] > max) 
        {
            int temp = max;
            max = my_arr[i];
            max2 = temp;
        }
        else if (my_arr[i]> max2)
        {
            max2 = my_arr[i];
        }
    }
    
    cout << max2;

    return 0;
}
*/
int main()
{
	int *a = new int[10];
    int n;
    //int a[10], n;
	cout<<"Nhap so ptu: ";
    cin>>n;
	NhapMang(a,n);
	InMang(a,n);
	cout<<"Phan tu lon thu 2 trong mang: "<<max2(a,n); 
    delete []a;
}
