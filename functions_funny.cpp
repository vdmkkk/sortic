#include "sortic.h"

void sa(vector<int> &a)
{
    if(a.size() >= 2)
    {
        int num = a[1];
        a[1] = a[0];
        a[0] = num;
    }
}

void sb(vector<int> &b)
{
    sa(b);
}

void ss(vector<int> &a, vector<int> &b)
{
    sa(a);
    sb(b);
}

void rr(vector<int> &a, vector<int> &b){
    ra(a);
    rb(b);
}

void rra(vector<int> &a){
    int buffer;
    if(a.size() > 1){
        buffer = a[0];
        for(long long i = 0; i < a.size() - 1; i++){
            a[i] = a[i + 1];
        }
        a[a.size() - 1] = buffer;
    }
}
