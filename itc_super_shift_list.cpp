#include "easy_list.h"

void itc_super_shift_list(vector <int> &mass, int n) {
    if (mass.size() != 0){
        if (n >= 0) {
            n = (n + mass.size()) % mass.size();
            for (int i = 0; i < n; i++)
                itc_rshift_list(mass);
        }
        else {
            n = -n;
            n = (n + mass.size()) % mass.size();
            for (int i = 0; i < n; i++)
                itc_lshift_list(mass);
        }
    }
}
