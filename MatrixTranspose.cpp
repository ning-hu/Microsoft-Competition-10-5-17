#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fs;
    fs.open("/Users/ninghu/Desktop/msft/PracticeInput2.txt");
     //Matrix-Transpose_InputForSubmission_1.txt
    string s;
    int x;
    int i = 0, j = 0;
    int cols = 0;
    string num = "";
    int foo[100][100];
    
    while (getline(fs, s))
    {
        x = 0;
        while (x < s.size())
        {
            while (isdigit(s[x]))
            {
                num+=s[x];
                x++;
            }
            if (num != "")
            {
                foo[i][j] = stoi(num);
                num = "";
                i++;
            }
            x++;
        }
        j++;
        cols = i;
        i = 0;
    }
    for (int x = 0; x < cols; x++)
    {
        for (int y = 0; y < j; y++)
        {
            cout << foo[x][y] << " ";
        }
        cout << endl;
    }
}
