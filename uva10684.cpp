#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 1, secuencia, contador = 0, maxi = 0;
    vector<int> racha;
    while (n != 0)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> secuencia;
            racha.push_back(secuencia);
        }

        for (int i = 0; i < racha.size(); i++)
        {
            contador+=racha[i];
            if(contador>maxi){
                maxi=contador;
                
            }
            if(contador<0){
                contador=0;
            }
        }
        if(maxi>0 && n>0){
            cout<<"The maximum winning streak is "<<maxi<<"."<<endl;

        }else if(maxi<=0 && n>0 ){
            cout<<"Losing streak."<<endl;
        }
        contador=0;
        maxi=0;
        racha.clear();
        
    }

    return 0;
}