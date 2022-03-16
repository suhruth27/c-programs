//finding whether array has duplicate number using array
#include<stdio.h>
int main()
{
	int i,n,a[100],duplicate;
 
    printf("Enter the number of elements:\n") ;
    scanf("%d",&n) ;
 
    printf("Enter the elements\n") ;
    for(i=0;i<n;i++)
    {
    	printf("a[%d] = ", i);
        scanf("%d",&a[i]) ;
    }
    
    duplicate=a[0];
    for(i=1;i<n;i++)
    {
        if(duplicate=a[i])
        {
            duplicate=a[i];
        }
        /*else
        	printf("No duplicate number");*/
    }
    printf("duplicate of %d elements is = %d",n,duplicate);
}
