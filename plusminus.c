#include <stdio.h>
int main(){
	int n;
	//taking the size as input
	printf("Enter size of array");
	scanf("%d",&n);
	int arr[n];
	//input for array
	for(int i=0;i<=n;i++){
		printf("Enter element for position");
		scanf("%d\n",&arr[i]);
	}
	//count for positive ,negative, zero numbers
	int pos=0;
	int neg=0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i]<0){
			neg++;
		}
		else if(arr[i]>0)
		{
			pos++;
		}
	}
	//display the ratios
	double n1,n2;
	n1=neg/n;
	n2=pos/n;
	printf("%f",n1);
	printf("%f",n2);
}

