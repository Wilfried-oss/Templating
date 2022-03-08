#include <iostream>
#include <string>

using namespace std;

template <typename monType>

void tri(monType *Tab, int n)
{
    int i=0, j;
    monType m;
    while(i < n-1)
    {
        j=i+1;
        while(j < n)
        {
            if(Tab[i]>Tab[j])
            {
                m = Tab[j];
                Tab[j] = Tab[i];
                Tab[i] = m;

            }
            j=j+1;
        }
        i=i+1;
    }
}

int main()
{
    string tab[5] = {"Sandrin", "Marios", "Wilfried", "Daniel", "Peres"};
    tri(tab, 5);

    cout << endl;
    cout << "\t Voici votre tableau trie : " << endl;
    cout << "\t [ ";
    for(int i = 0; i < 5; i++)
    {
        cout << tab[i] << " -- ";
    }
    cout << " ]";
    cout << endl;
    cout << endl;

    return 0;
}
