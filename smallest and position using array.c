//smallest and position using array
#include<stdio.h>
main()
{
	int i,n,a[100],small;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	
	printf("Enter the elements\n") ;
    for(i=0;i<n;i++)
    {
    	printf("a[%d] = ", i);
        scanf("%d",&a[i]) ;
    }
    
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }
    printf("Smallest of %d elements is = %d and its position is %d",n,small,i);
}
