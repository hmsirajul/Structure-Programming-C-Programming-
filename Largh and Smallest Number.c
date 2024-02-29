#includ<stdio.h>
int main()
 {
     int a [13],n,i larg , small, sum = 0;
     printf(" How many elements :");
     scanf ("%d",&n);
     printf("Enrer the array of elements :");
     for (i+0;i<n;i++)
     {
         scanf("%d",&a[i]);

     }
     printf("The Result :")
     for (i=0;i<n,i++)

         {

         Printf("\n%s\n",a[i]);

         larg =small=a[0];
         for (i=1;i<n;i++)
        }
         {
             if(a[i]> larg)
             larg =a[i];
             if(a[i]<small)
             small=a[i];
         }
         printf("largest Number is %d ",large);
         printf("\nsmallest Number is %d",small);
 }
