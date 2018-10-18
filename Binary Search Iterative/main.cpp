// Class No.  #1 Part 1.1
// C program to implement iterative Binary Search
// By: Md. Mahmudul Huq Topu
#include <stdio.h>
#include <math.h>
int binarySearch(int a[],int n,int x)
{
   int low = 0,high = n,mid;
   while(low<=high) {
    mid = ceil((low+high)/2); /*if mid = 1.6 then it make mid = 2.0 nearest greater integer */
    if(x<a[mid]){
        high = mid-1;
    }
    else if(x>a[mid]) {
        low = mid+1;
    }
    else {
        return mid;
    }

   }
   return 0;

}

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);  /*sizeof(arr) returns the size taken by all of the elements which is (5*4)=20bytes*/
    int x = 2;
    int result = binarySearch(arr, n-1, x);
    printf("%d is at position no: %d",x,result);

    return 0;
}
