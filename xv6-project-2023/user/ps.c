#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/pstat.h"



int main(void){

    struct pstat ps = {};                                   //create an empty struct pstat
    char state[10];
    

    if(getpinfo(&ps) == -1){                                 //system call getpinfo to fill struct pstat
        printf("Error on getpinfo\n");
        exit(1);
    }
    printf ("PID \t PPID \t NAME \t PRIORITY \t SIZE \t STATE \n");

    for (int i = 0; i< ps.pnum; i++){                         //print the information for every running process
        
        if(ps.state[i] == 0)                                  //define the state
           strcpy(state, "UNUSED");
        else if(ps.state[i] == 1)  
           strcpy(state, "USED");
        else if (ps.state[i] == 2)
           strcpy(state, "SLEEPING");
        else if (ps.state[i] == 3)
            strcpy(state, "RUNNABLE");
        else if (ps.state[i] == 4)
            strcpy(state, "RUNNING");
        else if (ps.state[i] == 5)
            strcpy(state, "ZOMBIE");
        
        
        printf ("%d \t %d \t %s \t %d \t \t %d \t %s \n", ps.pid[i], ps.ppid[i], ps.name[i], ps.priority[i], ps.size[i], state);

    }
   
    exit(0);                                                



}