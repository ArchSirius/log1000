#include "Data.h"

bool operator== (const Data3D &data1, const Data3D &data2){
    return (data1.x==data2.x && data1.y==data2.y && data1.z==data2.z);
}