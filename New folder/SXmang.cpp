#include<iostream>

using namespace std;

void NhapMang(int arr[], int n){
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
}
void InMang(int arr[], int n){
	for(int i = 0;i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void Sxtang(int arr[], int n){
	for(int i = 0; i<n ;i++){
		for(int j = i+1; j<n;j++){
			if(arr[j] < arr[i]){
				int tam = arr[i];
				arr[i] = arr[j];
				arr[j] = tam;
			}
		}
	}
}

void Sxgiam(int arr[], int n){
	for(int i = 0; i<n ;i++){
		for(int j = i+1; j<n;j++){
			if(arr[j] > arr[i]){
				int tam = arr[i];
				arr[i] = arr[j];
				arr[j] = tam;
			}
		}
	}
}

int main()
{
	int a[10],n;
	cout<<"Nhap so ptu mang: "; cin>>n;
	NhapMang(a,n);
	cout<<"Mang vua nhap: "<<endl;
	InMang(a,n);
	
	cout<<"Mang sau khi sx tang: "<<endl;
	Sxtang(a,n);
	InMang(a,n);
	
	cout<<"Mang sau khi sx giam: "<<endl;
	Sxgiam(a,n);
	InMang(a,n);
}
