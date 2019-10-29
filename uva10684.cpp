#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 1, secuencia, contador = 0, streak = 0;
    vector<int> racha;
    vector<int> respuesta;
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
            if (racha[i] > 0)
            {
                contador += racha[i];
               // cout << "soy contador: " << contador << endl;
            }

            if (racha[i] < 0)
            {
                respuesta.push_back(contador);
                contador = 0;
            }

            if (i < racha.size())
            {
                respuesta.push_back(contador);
            }
        }
        contador=0;

        streak = *max_element(respuesta.begin(), respuesta.end());
        respuesta.clear();
        racha.clear();
        if (streak <= 0 && n>0)
        {
            cout << "Losing streak." << endl;
        }
        else if(streak > 0 && n>0)
        {
            cout << "The maximum winning streak is " << streak << endl;
        }
    }

    return 0;
}