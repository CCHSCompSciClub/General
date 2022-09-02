#include "CBP.h"

long long euler6(){
    long long s=0;
    long long su=0;
    for(int i=1;i<=100;i++){
      s+=i;
    }
    s=pow(s,2);
    for(int j=1;j<=100;j++){
      su+=pow(j,2);
    }
    return s-su;
}

startMain
printf(olonglong,euler6());
endMain
