#include <iostream>
using namespace std;


void heapify(int arr[], int n, int i)
{
    int temp=i;
    int l=2*i+1;
    int r=2*i+2;
    if (l<n && arr[l]>arr[temp])
        {temp=l;}
    if (r<n && arr[r]>arr[temp])
        {temp=r;}
    if (temp!=i)
    {  int a=0;
       a=arr[i];
       arr[i]=arr[temp];
       arr[temp]=a;
        heapify(arr, n, temp);
    }
}

void heapsort(int arr[],int n)
{ for(int i=n/2;i>=0;i--)
        {heapify(arr,n,i);}

    for(int i=n-1;i>=0;i--)
    {   int a=0;
        a=arr[0];
        arr[0]=arr[i];
        arr[i]=a;
        heapify(arr, i, 0);
    }
}


void print(int arr[], int n)
{
    for(int i=0;i<n;++i)
    cout<<arr[i]<<"  ";
}


int main()
{int arr[100];
 int n;
cout<<"Enter the number of elements you want to insert in your array ";
cin>>n;
cout<<"\n Enter the elements \n";
for(int i=0;i<n;i++)
{cin>>arr[i];
cout<<" ";}
cout<<"The array looks like -> ";
print(arr,n);
heapsort(arr,n);
cout<<"\n The sorted array is ->";
print(arr,n);
return 0;
}
