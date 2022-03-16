//largest of n numbers using array
#include<stdio.h>
main()
{
	int i,n,a[100],large;
 
    printf("Enter the number of elements:\n") ;
    scanf("%d",&n) ;
 
    printf("Enter the elements\n") ;
    for(i=0;i<n;i++)
    {
    	printf("a[%d] = ", i);
        scanf("%d",&a[i]) ;
    }
    
    large=a[0];
    for(i=1;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }
    printf("Largest of %d elements is = %d",n,large);
}
