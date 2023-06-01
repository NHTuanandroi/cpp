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
void Them(int arr[],int &n, int x, int k)
{
	for(int i = n-1; i >= k; i--){
		arr[i+1] = arr[i];
	}
	arr[k] = x;
	n++;
}
void Xoa(int arr[], int &n,int vitri)
{
	for(int i = vitri+1; i<n; i++){
		arr[i-1] = arr[i];
	}
	n--;

}
int main()
{
	int a[10],n,x,vt,vtxoa;
	cout<<"Nhap so ptu mang: ";cin>>n;
	NhapMang(a,n);
	InMang(a,n);
	
	cout<<"Nhap vao so can chen: ";cin>>x;
	cout<<"Nhap vi tri can chen: ";cin>>vt;
	Them(a,n,x,vt);
	cout<<"Mang sau khi chen: ";
	InMang(a,n);
	
	cout<<"Nhap vi tri can xoa: "; cin>>vtxoa;
	Xoa(a,n,vtxoa);
	InMang(a,n);
	
	
	
}
