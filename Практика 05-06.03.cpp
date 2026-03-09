// найти анограммы в строке 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    string s = "cbaebabacd";
    string p = "abc";

    vector<int> ans;

    for (int i = 0;i <= s.size() - p.size();i++) {

        string sub = s.substr(i, p.size());

        sort(sub.begin(), sub.end());

        string t = p;
        sort(t.begin(), t.end());

        if (sub == t)
            ans.push_back(i);
    }

    for (int x : ans)
        cout << x << " ";
}

// поворот матрицы на 90*
#include <iostream>
using namespace std;

int main() {

    int n = 4;

    int a[4][4] = {
        {5,1,9,11},
        {2,4,8,10},
        {13,3,6,7},
        {15,14,12,16}
    };

    int b[4][4];

    for (int i = 0;i < n;i++)
        for (int j = 0;j < n;j++)
            b[j][n - i - 1] = a[i][j];

    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}