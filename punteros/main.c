#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,*ptrNro,vec[5];

    for(i=0;i<5;i++){

        vec[i]=(i+3);
    }


    for(i=0;i<5;i++){

        printf("\n%d",vec[i]);
    }
    ptrNro=vec;
    ptrNro=&vec[0];
    for(i=0;i<5;i++){

        printf("\n%d",*(ptrNro+i));
    }






    return 0;
}
