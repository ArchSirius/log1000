/* 
 * File:   Data.h
 * Author: begooden
 *
 * Created on November 22, 2014, 8:14 AM
 */

#ifndef DATA_H
#define	DATA_H

struct Data3D{
    double x;
    double y;
    double z;
};

bool operator== (const Data3D &cP1, const Data3D &cP2);

#endif	/* DATA_H */

