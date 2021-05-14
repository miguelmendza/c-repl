#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main()
{
int piles[9];
bool flag=false;
while(1&&!flag)
{
int sum = 0;
for(int i = 0; i <9&&!flag; i++)
{
piles[i] = rand()%(45)+1;
sum += piles[i];
if(sum>45)
{
printf("%d ", 45-sum+piles[i]);
break;
}
printf("%d ", piles[i]);
if(sum==45&&i==8)
{
flag=true;
}
else if(sum==45)
break;
}
printf("\n\n");
}
printf("\nSuccess....");
return 0;
}

