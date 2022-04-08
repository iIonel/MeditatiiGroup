#include <iostream>
using namespace std;

void inserareCoada(int *a,int &lungime){
    cout << "elementul introdus este: ";
    int element;
    cin >> element;
    lungime++;
    a[lungime-1] = element;
}
void stergereCoada(int *a,int &lungime){
    for(int i = 0; i < lungime - 1; ++i)
        a[i] = a[i+1];
    lungime--;

}
void afisare(int *a,int &lungime){
    for(int i = 0; i < lungime; ++i)
        cout << a[i] << ' ';
    cout << endl;
}
int main()
{
   //parcurgere -> for
   //stergeri si inserari de elemente
   int v[101];
   int lungimeCoada = 0;
   cout << "operatii de construire coada: ";
   int k;
   cin >> k;
   for(int i = 0; i < k; ++i)
   {
       cout << "1-inserare  2-stergere  3-afisare: ";
       char c;
       cin >> c;
       if(c == '1')
        inserareCoada(v,lungimeCoada);
       else if(c == '2')
        stergereCoada(v,lungimeCoada);
       else
        afisare(v,lungimeCoada);
   }

}
