#include <stdio.h>
#include <string.h>
 
main()
{
    int s1, s2;
    int a[100],n, i;
    printf("\n Enter the size of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ",n);
    for (i = 0 ; i <n; i++)
        scanf("%d", &a[i]);
    if (a[0] < a[1]) {
        s1 = a[0];
        s2 = a[1];
    }
    else {
      s1 = a[1];
      s2 = a[0];
    }
    for (i = 2; i < n; i++) {
        if (a[i] < s1) {
        s2 = s1;
        s1 = a[i];
        }
        else if (a[i] < s2) {
            s2 = a[i];
        }
    }
    printf("\n Smallest element is %d",s1);
    printf(" \nSecond smallest element is %d", s2);
}
