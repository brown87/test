#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (int argc, char *argv[]) {

int TestNumber = 0;
bool prime = {true, false};
TestNumber = atoi (argv[1]);
int array[TestNumber];

for(int i = 2; i <= TestNumber; i++)
{

    prime = true;
    for(int j = 2; j <= i; j++)
    {
        if((i % j) == 0 && i != j)
	{
	    //printf("%d modules %d = %d\n",i,j,i % j);	
            prime = false;
	    break;
        }
    } 

    if (prime)
    {
	printf("%d,\n",i);
	//array[i] = i;
    }

    prime = true;
}



//for(int k = 0; k <= TestNumber; k++)
//{
//	printf("%d,",array[k]);
//}
return 0;



}

