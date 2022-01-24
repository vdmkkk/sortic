#include "sortic.h"

void print(vector <int> a, vector <int> b, string funcs) {
    int v_size;
    if (a.size() > b.size()) v_size = a.size();
    else v_size = b.size();

    for (int i = 0; i < 80; i++) cout << "-";
    cout << endl << "Exec " << funcs << ":" << endl;
    for (int i = 0; i < v_size; i++){
        if (i < a.size()) cout << a[i];
        else cout << " ";
        if (i < b.size()) cout << " " << b[i];
        cout << endl;
    }
    cout << "- -" << endl << "a b" << endl;
}

int stringToInt(string s) {
    int num = 0;
    for (int i = 0; i < itc_len(s); i++) {
        num += (int(s[i]) - 48) * itc_pow(10, itc_len(s) - i - 1);
    }
    return num;
}

int main(){
    for (int i = 0; i < 80; i++) cout << "-";
    cout << endl;

    vector <int> a;
    vector <int> b;

    string num;
    string endres = "";
    cin >> num;
    while (num != "!") {
        a.push_back(stringToInt(num));
        cin >> num;
    }
    while (a.size() != 0) {
        int index = minIndex(a);
        string funcs = "";
        for (int i = 0; i < index; i++){
            ra(a);
            funcs += "ra";
            if (i != index - 1) funcs += " ";
            endres += "ra\n";
        }
        if (funcs != "") print(a, b, funcs);
        pb(a, b);
        print(a, b, "pb");
        endres += "pb\n";
    }
    int bSize = b.size();
    string funcs = "";
    for (int i = 0; i < bSize; i++){
        pa(a, b);
        funcs += "pa";
        if (i != bSize - 1) funcs += " ";
        endres += "pa\n";
    }
    print(a, b, funcs);
    for (int i = 0; i < 80; i++) cout << "-";
    cout << endl << endres;
    return 0;
}
