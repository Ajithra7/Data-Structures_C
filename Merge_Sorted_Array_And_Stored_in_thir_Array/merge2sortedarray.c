#include <stdio.h>
#include <stdlib.h>


int main() 
	{
	int array1[100],array2[100];
	int a1size,a2size;
	int i,j;
	int temp;
	int total;
	int size=0;
	
	//Get elements of First Array
	
	printf("Enter Size of First Array : ");
	scanf("%d",&a1size);
	printf("\nEnter %d elemenst\n",a1size);
		for(i=0;i<a1size;i++)
			{
				printf("\narray1[%d] : ",i+1);
				scanf("%d",&array1[i]);
			}
	
	//Get elements of Second Array

	printf("\nEnter Size of Second Array : ");
	scanf("%d",&a2size);
	printf("\nEnter %d elemenst\n",a2size);
		for(i=0;i<a2size;i++)
			{
				printf("\narray2[%d] : ",i+1);
				scanf("%d",&array2[i]);
			}
	
	//Total no: Elemets in Merged Array
	
	total=a1size+a2size;
	
	//Merged Array

		for(i=a1size;i<total;i++)
			{
				array1[i]=array2[size];
				size=size+1;
			}
	
	//Sorting in Third Array
	
			for(i=total;i>0;i--)
			{
				for(j=0;j<total-1;j++)
			{
			if(array1[j]>array1[j+1])
			{	
				temp=array1[j];
				array1[j]=array1[j+1];
				array1[j+1]=temp;
			}
			}
			}
	
	
	
	//Display Third Array Elements
	
	printf("\nSorted & Merged Array below:\n");
	
	for(i=0;i<total;i++)
	{
		printf("Array[%d] is : %d\n",i,array1[i]);
	}
	
	return 0;
}





