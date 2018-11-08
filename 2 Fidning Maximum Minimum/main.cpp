
// Class No.  #3 Part 2
// C program to find maximum minimum number of an array using divide and conquer algorithm
// By: Md. Mahmudul Huq Topu
#include <iostream>
#include <cmath>

using namespace std;
int maxmin(int a[100],int i,int j,int &max, int &min){


    int max1,min1,mid;
    if(i==j){
        max=a[i];
        min=a[i];



    }
    else if (i==j-1){

        if(a[i]>a[j]){
            max = a[i];
            min = a[j];
        }
        else {
            max = a[j];
            min = a[i];
        }
    }
    else {



        mid = ceil((i+j)/2);
        maxmin(a,i,mid,max,min);
        maxmin(a,mid+1,j,max1,min1);
        if(max1>max){
            max= max1;
        }
        if(min1<min){
            min = min1;
        }
        return 0;

    }


}
int main()
{
    int i,j,max,min,n;

    cout << "Enter The Size of Array: " << endl;
    cin >> n ;
    int a[n];
    cout << "Enter " << n << " Numbers:" << endl;

    for(int p=0;p<n;p++){
        cin >> a[p];
    }



    maxmin(a,0,n-1,max,min);
    cout << "max value is: " << max << endl;
    cout << "min value is: " << min << endl;



    return 0;
}
