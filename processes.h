#ifndef PROCESSES_H_
#define PROCESSES_H_
#endif

struct Process
{
    int processnumber;
    char name[30];
};

extern struct Process processes[5];
extern int processescount;


int createnewprocess();
void stopprocess();
