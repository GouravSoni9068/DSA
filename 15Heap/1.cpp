#include<iostream>
using namespace std;
void heapify(int* arr,int i,int index)
{
    int leftChild=i*2;
    int rightChild=i*2+1;
    int max;
    if(leftChild<=index and rightChild<=index )
    {
        if( arr[leftChild]>arr[rightChild] )
        {
            max=leftChild;
        }
        else{
            max=rightChild;
        }
    }
    else if(leftChild<=index)
    {
        max=leftChild;
    }
    else if(rightChild<=index){
        max=rightChild;
    }
    else{
        return;
    }
    
    if(arr[max]>arr[i])
    {
        swap(arr[i],arr[max]);
        heapify(arr,max,index);
    }
    else{
        return;
    }
}
class Heap{
    
    public:
        int *arr;
        int capacity;
        int index;
        Heap(int capacity)
        {
            this->capacity= capacity;
            arr=new int[capacity];
            index=0;
        }

        void printHeap()
        {
            for(int i=1;i<capacity;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        void insertHeap(int val)
        {
            if(index==capacity-1)
            {
                cout<<"Overflow";
                return;
            }
            // value dalna
            index++;
            arr[index]=val;

            // compare karwana parent node se
            int currIndex=index;
            int parentIndex=currIndex/2;
            while(currIndex>1)
            {
                if(arr[currIndex]>arr[parentIndex])
                {
                    swap(arr[parentIndex],arr[currIndex]);
                    currIndex=parentIndex;
                    parentIndex=currIndex/2;
                }
                else{
                    break;
                }
            }
        }

        
        // remove
        void removeHeap()
        {
            swap(arr[1],arr[index]);
            index--;
            int i=1;
            // right position of root node

            heapify(arr,i,index);

        }
};



void buildHeap(int* arr,int n)
{
    for(int i=n/2;i>=1;i--)
    {
        heapify(arr,i,n-1);
    }
}

void HeapSort(int* arr,int n)
{
    int index=n-1;
    while(index!=1) 
    {
        swap(arr[1],arr[index]);
        index--;
        heapify(arr,1,index);
    }
}

int main()
{
    Heap h1(6);
    
    int arr[]={0,10,20,30,40,50};
    int n=6;
    buildHeap(arr,n);
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }

    HeapSort(arr,n);
    cout<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }

    

    return 0;
}