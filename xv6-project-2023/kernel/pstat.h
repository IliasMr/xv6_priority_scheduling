#include "param.h"


//struct pstat to keep info for all running proccesses
struct pstat{

  int pid[NPROC];
  int ppid[NPROC];
  char name[NPROC][16];
  int priority[NPROC];
  int size[NPROC];
  int state[NPROC];
  int pnum;             //number of the running proccesses
  
};