#include "CBP.h"
startMain
int c=0;int sum=0;
for(c=0;c<=1000;c++){
if (c%3==0){sum+=c;}
if (c%5==0 && c%3!=0){sum+=c;}}
printf("%i\n",sum);
endMain
