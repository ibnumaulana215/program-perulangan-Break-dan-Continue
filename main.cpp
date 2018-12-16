#include <stdio.h>
#include <conio.h>

using namespace std;

int main ()
{
for (int i=1;i<10;i++){
        if(i==5)continue;
        printf("%d\n",i);

    }

  printf("\n");


    for (int y=1; y<50 ; y++){
            if(y==20) break;
        printf("%d\n",y);
    }
}
