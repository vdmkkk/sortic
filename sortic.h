#ifndef SORTIC_H_INCLUDED
#define SORTIC_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <fstream>
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
void sa(vector<int> &a);
void sb(vector<int> &b);
void ss(vector<int> &a, vector<int> &b);
void rb(vector<int> &b);
void rr(vector<int> &a, vector<int> &b);
void rra(vector<int> &a);
void rrb(vector<int> &b);
void rrr(vector<int> &a, vector<int> &b);


#endif // SORTIC_H_INCLUDED
