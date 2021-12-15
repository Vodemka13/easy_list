#include "easy_list.h"

bool itc_same_parts_list(const vector <int> &mass){
    for (int i = 1; i < mass.size(); i++){
        if (mass[i] > 0 &&  mass[i - 1] < 0)
            return false;
        if (mass[i] < 0 &&  mass[i - 1] > 0)
            return false;
    }
    return true;
}
