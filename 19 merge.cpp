#include<iostream>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
	int k=low,i=low,j=mid+1,b[high+1];
	
	while(i<=mid&&j<=high)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;
		k++;
		
	}
	for(k=low;k<=high;k++)
	a[k]=b[k];
}
void mergesort(int a[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
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
	mergesort(a,0,n-1);
	cout<<"sorted array is"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
