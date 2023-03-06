#pragma once
struct Master
{
    int id;
    long firstSlaveAddress;
    int slaveCount;
    char name[16];
    char location[16];
};
struct Slave
{
    int id;
    int masterId;
    int exist;
    long selfAddress;
    long nextAddress;
    char brand[16];
    int mass;
};

struct Indexer
{
    int id;
    int exist;
    long address;
};