//bubble sort
#include <iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    int i,j,temp;
    for(i=0; i<=(n-2); i++)
    {
        for(j=0; j<=(n-i-2); j++)
        {

            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int array[10],n;
    cout<<"Enter the number of elements in array:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the elements:"<<endl;
        cout<<"a["<<i<<"]:";
        cin>>array[i];
    }
    bubblesort(array,n);
}