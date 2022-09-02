#include "CBP.h"

long long euler5(){
  for(long long c=1;c<=10000000000;c++){
    if(c%20==0&&c%19==0&&c%18==0&&c%17==0&&c%16==0&&c%15==0&&c%14==0&&c%13==0&&c%12==0&&c%11==0){
      return c;
    }
  }
}
startMain 
printf(olonglong,euler5()); 
endMain
