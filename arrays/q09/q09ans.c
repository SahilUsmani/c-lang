


/* Note: This will not work if there are any repeating elements. Work in progress to make it better  */



#include<stdio.h>

void main()
{
	int n,i,del,a;// declaring all the int data type variable                                
	printf("Enter the size of array: ");//asking user to write the input for the size of the array
	scanf("%d",&n);//reading the input from the user

	int arr[n];//declaring the array with the size entered by the user
	printf("Enter the elements of the array: ");//asking user to write the input for elements of the array
	for(i=0;i<n;i++)//reading the input or initailizing our array with for loop
	{
		scanf("%d",&arr[i]);
	}
	printf("The array is:\n");//printing the array
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the element you want to delete:\n");//asking user to write the value of the element to be deleted
	scanf("%d",&del);//reading the value to be deleted

	for(i=0;i<n;i++)		/* Here we are checking for our element to be deleted and the assigning it the value 0 */
	{
		if(arr[i]==del)
		{
			arr[i]=0;
		}
	}
	
	for(i=0;i<n;i++) /* Here we are checking the index number of the element which was deleted and assigning it a variable named "a" */
	{
		if(arr[i]==0)
		{
			a=i;
		}
	}
	printf("The index of the deleted element was %d\n",a);
	for(i=a;i<n;i++)
	{
		arr[i]=arr[i+1]; //here we are shifting the values to the deleted side of the element one by one
	}
	n=n-1;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");
}
