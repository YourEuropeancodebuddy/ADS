/* Gerard Nahimana 
Assessment 6
gnahimana@constructor.university
*/

#include <iostream>
using namespace std;

void Bubblesort(int arr[],int size)
{
    int temp;
    bool swap= false;
    for (int i = 0; i < size-1; i++)    //this is to go through the entire loop
    {
        for (int j = 0; j < size-1-i; j++)      // this is to check each elemetn with  all other elemetns till i is sorted 
        {                                
            swap = false;                                    
            if (arr[j]>arr[j+1])    // this swaps the element
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;      //this is for optimization  to stop running  once it sorted
            }
        } 
        if (swap==false)
        {
            break;
        }
    }
    
}

int main()
{
    int size=1000;
    int arr[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++)  //generating random elements
    {
        arr[i]=rand() % size;
    }
    Bubblesort(arr,size);
    for (int i = 0; i < size; i++)      // this is to print the elements 
    {
        cout<<arr[i]<<endl;
    }
}