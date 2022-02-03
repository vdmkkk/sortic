#include "sortic.h"

void print(vector <int> a, vector <int> b, string funcs) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int v_size;
    if (a.size() > b.size()) v_size = a.size();
    else v_size = b.size();

    for (int i = 0; i < 80; i++) cout << "-";
    SetConsoleTextAttribute(hConsole, 14);
    cout << endl << "Exec " << funcs << ":" << endl;
        SetConsoleTextAttribute(hConsole, 15);
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

void save(string endres) {
    ofstream myfile;
    myfile.open ("../sortic_check/input.txt");
    myfile << endres;
    myfile.close();
}

int main(){
    for (int i = 0; i < 80; i++) cout << "-";
    cout << endl;
    vector <int> a, b; string num; string endres = "";
    cin >> num;
    while (num != "!") {
        a.push_back(stringToInt(num));
        endres += num + "\n";
        cin >> num;
    }
    endres += "!\n";
    int total = 0;
    while (a.size() != 0) {
        int index = minIndex(a); string funcs = "";
        for (int i = 0; i < index; i++){ total += 1;
            ra(a);
            funcs += "ra";
            if (i != index - 1) funcs += " ";
            endres += "ra\n";
        }
        //if (funcs != "") print(a, b, funcs);
        pb(a, b);
        total += 1;
        //print(a, b, "pb");
        endres += "pb\n";
    }
    int bSize = b.size();
    string funcs = "";
    for (int i = 0; i < bSize; i++){
        pa(a, b);
        funcs += "pa";
        total += 1;
        if (i != bSize - 1) funcs += " ";
        endres += "pa\n";
    }
    endres += "*";
    print(a, b, funcs);
    for (int i = 0; i < 80; i++) cout << "-";
    cout << endl << "Your commands for sortic_check.cpp:" << endl << endres << endl;
    cout << total;
    save(endres);
    return 0;
}
