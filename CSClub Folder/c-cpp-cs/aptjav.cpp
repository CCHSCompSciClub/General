#include <string>
#include <iostream>
#include <cstdlib>

#define START {
#define END }
#define OPEN (
#define CLOSE )
#define OUTCOME return
#define command system

using namespace std;

int main OPEN CLOSE
START
    
    command OPEN "sudo apt update" CLOSE ;

    command OPEN "sudo apt install default-jdk -y" CLOSE ;
    command OPEN "sudo apt install default-jre -y" CLOSE ;

    command OPEN "echo all done" CLOSE ;
    
OUTCOME 0;
END
