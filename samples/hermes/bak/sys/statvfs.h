#pragma once
#include <sys/stat.h>
#include <fcntl.h>

struct statvfs {
    unsigned long int f_bsize;
    unsigned long int f_frsize;
    int f_blocks;
    int f_bfree;
    int f_bavail;
    int f_files;
    int f_ffree;
    int f_favail;
    unsigned long int f_fsid;
    unsigned long int f_flag;
    int f_flags;
    unsigned long int f_namemax;
};

extern int statvfs(...);
extern int fstatvfs(...);

#define MNT_LOCAL 0