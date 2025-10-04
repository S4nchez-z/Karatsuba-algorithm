#ifndef KAR_H
#define KAR_H

typedef union karacyba
{
    struct{                       
        unsigned short RightPart; // 16 bit
        unsigned short LeftPart;  // 16 bit
    };
    unsigned long long QuadPart;  // 64 bit
}LARGE_INTEGER;
LARGE_INTEGER kar(LARGE_INTEGER x, LARGE_INTEGER y);

#endif
