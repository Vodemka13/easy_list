#include "easy_list.h"

void itc_rshift_list(vector <int> &mass) {
    if (mass.size() != 0){
        vector <int> mass2(mass.size());
        mass2[0] = mass[mass.size() - 1];
        for (int i = 1; i < mass.size(); i++)
            mass2[i] = mass[i - 1];
        mass = mass2;
    }
}
