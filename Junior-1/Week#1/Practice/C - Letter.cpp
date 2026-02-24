#include <bits/stdc++.h>
using namespace std;

//Ebraaaaaaaaaaaaaaaaaa on the beat

void solve(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int frq1[26]{0}, frq2[26]{0};
    int qfrq1[26]{0}, qfrq2[26]{0};
    for (int i = 0; i < s1.length();i++){
        if(s1[i] != ' '){
            if(s1[i] >= 'A' && s1[i] <= 'Z')
                qfrq1[s1[i] - 'A']++;
            else
                frq1[s1[i] - 'a']++;
        }
    }
    for (int i = 0; i < s2.length();i++){
        if(s2[i] != ' '){
            if(s2[i] >= 'A' && s2[i] <= 'Z')
                qfrq2[s2[i] - 'A']++;
            else
                frq2[s2[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26;i++){
        if(frq1[i] < frq2[i]){
            cout << "NO" << endl;
            return;
        }
        if(qfrq1[i] < qfrq2[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int tc = 1;
    //cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}
