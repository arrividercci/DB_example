#pragma once
#include "Structures.h"
#include <stdio.h>
#include <string.h>
#define str_size 16
int CheckForInputStr(char * str)
{
    char buffer[255];
    buffer[0] = '\0';
    scanf("%s", buffer);
    int size = 0;
    for (int i = 0; i < str_size + 1; i++)
    {
        if(buffer[i] == '\0') break;
        size++;
    }
    if (size >= str_size) return 0;
    else
    {
        strcpy(str, buffer);
        return 1;
    }
}
int ReadMaster(struct Master* master)
{
    char name[16];
    char location[16];
    name[0] = '\0';
    location[0] = '\0';
    printf("Enter master\'s name:");
    if (CheckForInputStr(name) == 0) return 0;
    strcpy(master->name, name);
    printf("Enter master\'s location:");
    if (CheckForInputStr(location) == 0) return 0;
    strcpy(master->location, location);
    return 1;
}
int ReadSlave(struct Slave* slave)
{
    char brand[16];
    int mass;
    brand[0] = '\0';
    printf("Enter slave\'s brand:");
    if (CheckForInputStr(brand) == 0) return 0;
    strcpy(slave->brand, brand);
    printf("Enter slave\'s mass:");
    scanf("%d", &mass);
    slave->mass = mass;
    return 1;
}
void PrintMaster(struct Master master)
{
    printf(" Master\'s name: %s\n", master.name);
    printf(" Master\'s location: %s\n", master.location);
}
void PrintSlave(struct Slave slave)
{
    printf(" Slave\'s brand: %s\n", slave.brand);
    printf(" Slave\'s brand: %d\n", slave.mass);
}