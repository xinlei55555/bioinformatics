#include <bits/stdc++.h>
using namespace std;
int main(){
    string dna="TAAACGTGAGAGAAACGTGCTGATTACACTTGTTCGTGTGGTAT";
    unordered_map <string, int> freq;
    int mx=1;
    for(int i=0; i<dna.size()-3; i++){
        string subs=dna.substr(i, 3);
        if(freq.find(subs)==freq.end()) freq.insert({subs, 1});
        else{
            freq.at(subs)++;
        }
        mx=max(freq[subs], mx);
        if(mx==freq[subs]) cout<<subs<<"\n";

    }
    cout<<mx;

    return 0;
}