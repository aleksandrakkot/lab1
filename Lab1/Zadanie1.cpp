#include <iostream>
#include <algorithm>
using namespace std;

// void swapRef(int& a, int& b)
// {
//     int tmp = a;
//     a = b;
//     b = tmp;
// }

void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(arr[j], arr[j+1]);  
}  
  
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        cout << "Za malo argumentow!" << endl;
        return -1;
    }

    int n = argc - 1;
    int* tab = new int[n];

    for(int i = 1; i < argc; i++)
    {
        tab[i - 1] = atoi(argv[i]);
    }
    bubbleSort(tab, n);
    printArray(tab, n);

    // int a = 5;
    // int b = 6;
    // swapRef(a, b);
    // cout << a << " " << b << endl;
}