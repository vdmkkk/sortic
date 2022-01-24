#ifndef SORTIC_H_INCLUDED
#define SORTIC_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
using namespace std;

long itc_len(string str);
long long itc_abs(long long num);
double itc_pow(long long num, long long n);
void itc_rshift_list(vector <int> &mass);
void itc_lshift_list(vector <int> &mass);
void ra(vector <int> &a);
int minIndex(vector <int> &a);
void pb(vector <int> &a, vector <int> &b);
void pa(vector <int> &a, vector <int> &b);


#endif // SORTIC_H_INCLUDED
