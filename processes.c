#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "processes.h"

int processnumber = 0;
struct Process processes[5];
int processescount;

int nextprocessid()
{
    int id;
    if(processnumber == INT_MAX)
    {
        id = 0;
    }
    else
    {
        processnumber++;
        id = processnumber;
    }

    return id;
}

int createnewprocess(char *name)
{
    int id;
    if(processescount == 5)
    {
        printf("There is no space for another process!");
        id = 0;
    }
    else
    {
        id = nextprocessid();
        strcpy(processes[processescount].name, name);
        processes[processescount].processnumber = id;
        processescount++;
    }

    return id;
}

void stopprocess(int number)
{
    char *voidarray = "\0";
    if(number <= processnumber)
    {
        processescount--;
        for(int i = 0; i < processnumber; i++)
        {
            if(processes[i].processnumber == number)
            {
                processes[i].processnumber = processes[i + 1].processnumber;
                strcpy(processes[i].name, processes[i + 1].name);
                processes[i + 1].processnumber = ' ';
                strcpy(processes[i + 1].name, voidarray);
            }
        }
        printf("Process #%d stopped!", number);
    }
    else
    {
        printf("Not a valid ID number!");
    }
}
