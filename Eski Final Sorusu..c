#include <stdio.h>
int main()
{
    int p_arr[4]={3,5,6,1}, q_arr[4]={7,2,9,5};
    int *p=p_arr;
    int *q=q_arr;
    int i=1;
 
   printf("%d\t", *p + *q);  
   printf("%d\t", *(p++) + *(++q));   
   printf("%d\t", *(++p) + *(q++));
   printf("%d\t", *(p+i) + *q+i);
   printf("%d\t", *p+i + *(q+i));
 
   return 0;
}

