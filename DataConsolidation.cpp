#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    ifstream file;
    file.open("/Users/ninghu/Desktop/msft/PracticeInput.txt");
    if (!file) return false;
    
    string s;
    getline(file, s);
    
    double sum = 0;
    int num = 0;
    string currNum = "";
    int x = 0;
    while (x != s.size())
    {
        while (isdigit(s[x]))
        {
            currNum+=s[x];
            x++;
        }
        if (currNum != "")
        {
            sum+=stoi(currNum);
            currNum = "";
            num++;
        }
        else x++;
    }
    
    int ans = ceil(sum / num);
    cout << ans;
}
