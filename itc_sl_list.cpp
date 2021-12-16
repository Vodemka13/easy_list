#include "easy_list.h"

int itc_sl_list(const vector <int> &mass) {
    if (mass.size() != 0){
        int counter = 0;
        for (int i = 1; i < mass.size(); i++){
            if (mass[i] > mass[i - 1]){
                counter += 1;
            }
        }
        return counter;
    }
}
