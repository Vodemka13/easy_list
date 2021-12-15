#include "easy_list.h"

void itc_rev_par_list(vector <int> &mass) {
    int temp;
    for (int i = 1; i < mass.size(); i += 2){
        temp = mass[i];
        mass[i] = mass[i - 1];
        mass[i - 1] = temp;
    }
}
