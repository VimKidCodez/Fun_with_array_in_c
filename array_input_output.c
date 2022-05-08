#include <stdio.h>

int main()
{          
    int values[5];
    printf("Enter 5 integers");
    // Taking the input and storiung in a array
    for(int i= 0;i<5;i++){
        scanf("%d",&values[i]);
    }
    printf("Display intergers :");

    for(int i= 0; i<5;i++){
        printf("%d\n",values[i]);
    }




    return 0 ;
}