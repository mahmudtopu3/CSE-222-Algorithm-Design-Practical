// Class No.  #1 Part 1.1
// C program to implement iterative Binary Search
// By: Md. Mahmudul Huq Topu
#include <iostream>
#include <cmath>

using namespace std;
int binarySearch(int a[],int i,int l,int x)
{
   int mid;
   if(i==l){
       if(x==a[i]){
        return i;
       }
       else {
        return -1;
       }
   }
   else {
    mid = ceil((i+l)/2); /*if mid = 1.6 then it make mid = 2.0 nearest greater integer */
    if(x==a[mid]){
        return mid;
    }
    else if (x<a[mid]){
        binarySearch(a, 0,mid-1, x);
    }
    else {
        binarySearch(a, mid+1,l, x);
    }
   }


}
int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);  /*sizeof(arr) returns the size taken by all of the elements which is (5*4)=20bytes*/
    int x = 10;
    int result = binarySearch(arr, 0,n-1, x);
    cout << x << " is at position no: " << result <<endl;
    return 0;

    /*Try to implement absent feature */
}
