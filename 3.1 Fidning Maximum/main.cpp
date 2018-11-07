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
    int i,j,max,min;
    int a[] = {999,10,155,66,1};
    int size = sizeof(a)/sizeof(a[0]);


    maxmin(a,0,size-1,max,min);
    cout << "max value is: " << max << endl;
    cout << "min value is: " << min << endl;



    return 0;
}
