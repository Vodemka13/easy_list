#include "easy_list.h"

void itc_lshift_list(vector <int> &mass) {
    vector <int> mass2(mass.size());
    mass2[mass2.size() - 1] = mass[0];
    for (int i = 0; i < mass.size() - 1; i++)
        mass2[i] = mass[i + 1];
    mass = mass2;
}
