#include <iostream>
using namespace std;


int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int pIndex = s;
    
    for (int i = s;i < e;i++)
    {    
        if(arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    int temp = arr[e];
    arr[e] = arr[pIndex];
    arr[pIndex] = temp;
    
    return pIndex;
}

void quickSort(int arr[], int s, int e)
{
        if (s < e)
        {
            int p = partition(arr, s, e);
            quickSort(arr, s, (p - 1));
            quickSort(arr, (p + 1), e);
        }
   
}

int main()
{
    int size;
    cout << "Enter Size of Array : "<<endl;
    cin >> size;
    int myarray[size];

    cout << "Enter Value : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << "";
        cin >> myarray[i];
    }
    
    quickSort(myarray, 0, (size - 1));
    
    cout << "Sorted array : "<<endl;
    for(int i = 0;i<size; i++){
        cout<<myarray[i]<<" ";
    }
    return 0;
}
