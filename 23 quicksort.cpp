#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
	int t=a;
	a=b;
	b=t;
}
int partition(int arr[] ,int low, int high)
{
	int pivot=arr[high];
	int i=low-1;
	for(int j=low;j<high;j++)
	{
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap (arr[i+1],arr[high]);
	return(i+1);
}
void quicksort(int arr[], int low,int high)
{
	if (low<high)
	{
		int pivoti=partition(arr,low,high);
	quicksort(arr,low,pivoti-1);
	quicksort(arr,pivoti+1,high);
    }
}
int main()
{
	int n,i;
	cout<<"enter size"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter elements"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	quicksort(a,0,n-1);
	cout<<"sorted array is"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;

}
