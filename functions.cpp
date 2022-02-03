#include "sortic.h"

void ra(vector <int> &a) {
    itc_lshift_list(a);
}

void rb(vector<int> &b){
    ra(b);
}

void pb(vector <int> &a, vector <int> &b) {
    int num = a[0];
    vector <int> newA;
    for (int i = 1; i < a.size(); i++) newA.push_back(a[i]);
    a = newA;
    b.push_back(num);
    itc_rshift_list(b);
}

void pa(vector <int> &a, vector <int> &b) {
    int num = b[0];
    vector <int> newB;
    for (int i = 1; i < b.size(); i++) newB.push_back(b[i]);
    b = newB;
    a.push_back(num);
    itc_rshift_list(a);
}

int minIndex(vector <int> &a) {
    int index = -1;
    int minNum = 99999999999999;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < minNum) {
            minNum = a[i];
            index = i;
        }
    }
    return index;
}
