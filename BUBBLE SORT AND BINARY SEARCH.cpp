#include<iostream>
using namespace std;
int main()
{
	int n, i, arr[50], j, temp,search, first, last, middle;
	cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<(n-1); i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted list in ascending order :\n";
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n Enter a number to find :";
	cin>>search;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < search)
		{
			first = middle + 1;

		}
		else if(arr[middle] == search)
		{
			cout<<search<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<search<<" is not present in the list.";
	}
}
