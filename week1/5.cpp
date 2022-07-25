/*
5.- Shopping List

Jansel quiere ayudar a su madre a hacer la lista de compras, para esto, deberá hacer un programa el cual le ayude a identificar que elemento x está en la posición i.
¿Porqué hace este programa?, bueno, básicamente es porque es tedioso tener una larga lista de compras, y más aún si se quiere buscar un elemento dentro de esta.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int>v(n);
    for(int i : v){
        cin >> v[i];
    }
    int a; cin >> a;
    a--;
    cout << v[a];
}