/*
2.- Dulces de cumpleaños.

Una mamá esta preocupada porque compró una cantidad de cules, pero
no sabe si es que será suficiente para todos los niños del cumpleaños
de su hijo. Ella sabe lo importante que son los dulces para los niños
tabién, ella sabe que si un niño o niña tiene más dulces que otro 
o otra el cumpleaños ser arruinará. Por lo tano, ella quiere saber
si es que puede darle la misma cantidad de ducles a todos los niños
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	if(n % k == 0){
		cout << n / k;
	} else cout << -1;
}