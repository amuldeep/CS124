#include "userDatabase.h"
int Compare(const User data1, const User data2){
    return (data1.userName.c_str()) - (data2.userName.c_str());
}


