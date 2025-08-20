#include <stdio.h>
int main()
{
    int arr[100]= {1,2,3};
    int n = 3;
    int num = 4;
     arr[n] = num;
     n++;
     printf("updated array ");
     for(int i = 0; i<n; i++){
     printf("%d", arr[i]); 
}
return 0;
}