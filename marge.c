#include<stdio.h>
void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;
	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
}
void asif(int *A,int n) {
	int mid,i;
	if(n < 2) return;

	mid = n/2;
	int L[mid];
	int R[n-mid];

	for(i = 0;i<mid;i++) L[i] = A[i];
	for(i = mid;i<n;i++) R[i-mid] = A[i];

	asif(L,mid);
	asif(R,n-mid);
	Merge(A,L,mid,R,n-mid);
}

int main() {
	int A[] = {1,5,4,2,6,3};
	int i,numberOfElements;
	numberOfElements = sizeof(A)/sizeof(A[0]);
	asif(A,numberOfElements);
	for(i = 0;i < numberOfElements;i++) printf("%d ",A[i]);
	return 0;
}
