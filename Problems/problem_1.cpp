//You are given 2 arrays, merge them without duplicates and sort them and display the final arra
#include<iostream>
using namespace std;
int main()
{
    int arr1[8]={2,3,4,4,8,9,2,3};
    int arr2[7]={4,5,2,7,3,3,2};
    int size=0;
    int merged[15];
    for(int i=0;i<8;i++)
    {   
        bool isFound=false;
        for(int j=0;j<size;j++)
        {
            if(merged[j]==arr1[i])
            {
                isFound=true;
                break;
            }
        }
        if(!isFound){
            merged[size]=arr1[i];
            size++;
        }
    }
    
    for(int i=0;i<7;i++)
    {   
        bool isFound=false;
        for(int j=0;j<size;j++)
        {
            if(merged[j]==arr2[i])
            {
                isFound=true;
                break;
            }
        }
        if(!isFound){
            merged[size]=arr2[i];
            size++;
        }
    }
    for (int i = 0; i < size; i++) {
    int minIndex = i;
    for (int j = i + 1; j < size; j++) {
        if (merged[j] < merged[minIndex]) {
            minIndex = j;
        }
    }
        swap(merged[minIndex], merged[i]);
}
    for(int i=0;i<size;i++)
    {
        cout<<merged[i]<<" ";
    }
}