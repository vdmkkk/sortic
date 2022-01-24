#include "sortic.h"

long itc_len(string str) {
    int i = 0;
    while (str[i] != '\0'){
        i += 1;
    }
    return i;
}

long long itc_abs(long long num){
    if (num >= 0) return num;
    return -num;
}


double itc_pow(long long num, long long n){
    if (n == 0) return 1;
    long long res = num;
    for (int i=1; i < itc_abs(n); i++){
        res *= num;
    }
    if (n >= 0) return res;
    return 1.0 / res;
}

void itc_rshift_list(vector <int> &mass) {
    if (mass.size() != 0){
        vector <int> mass2(mass.size());
        mass2[0] = mass[mass.size() - 1];
        for (int i = 1; i < mass.size(); i++)
            mass2[i] = mass[i - 1];
        mass = mass2;
    }
}

void itc_lshift_list(vector <int> &mass) {
    if (mass.size() != 0){
        vector <int> mass2(mass.size());
        mass2[mass2.size() - 1] = mass[0];
        for (int i = 0; i < mass.size() - 1; i++)
            mass2[i] = mass[i + 1];
        mass = mass2;
    }
}
