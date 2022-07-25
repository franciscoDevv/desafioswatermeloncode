/*
7.- La suma de menor a mayor

Fran esta obsesionado con el ordenado de números, pero él no sabe programar. Entonces, le pide a ustedes realizar un código que reciba n números, y sumes los k valores más grandes.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    vector<int>v(n);
    for(int i : v){
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    int sum=0;
    for(int i = 0; i < k; i++){
        sum += v[i];
    }
    cout << sum << "\n";
}