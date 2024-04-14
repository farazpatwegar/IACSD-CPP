#include <iostream>
using namespace std;

int sum(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
       sum += arr[i];
    }
    return sum;
}

int average(int size,int sum)
{
    int avg = sum/size;
    return avg;
}
int max(int arr[],int size)
{
   int max=arr[0];
   for(int i=1;i<size;i++)
   {
     if(arr[i]>max)
     {
        max = arr[i];
     }
   }
   return max;
}

int min(int arr[],int size)
{
   int min=arr[0];
   for(int i=1;i<size;i++)
   {
     if(arr[i]<min)
     {
        min = arr[i];
     }
   }
   return min;
}


int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid size!";
        return 1;
    }

    int arr[size];

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << " sum : " << sum(arr,size) << endl;
    cout << " Average : " << average(size, sum(arr, size)) << endl;
    cout << " maximum : " << max(arr,size) << endl;
    cout << " minimum : " << min(arr,size) << endl;

    return 0;
}