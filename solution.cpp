// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    long long int pref=0, sufx=0;
    int L=A.size();
    for(int i=1;i<L;i++){
        sufx+=A[i];
    };
    for(int i=0;i<L;i++){
        if (pref==sufx) return i;
        pref+=A[i];
        sufx-=A[i+1];
    };
    return -1;
}
