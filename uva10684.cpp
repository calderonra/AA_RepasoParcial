#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, secuencia, contador = 0, streak = 0;
    vector<int> racha;
    vector<int> respuesta;
    cin >> n;
    while (n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> secuencia;
            racha.push_back(secuencia);
        }

        for (int i = 0; i < racha.size(); i++)
        {
            if (racha[i] > 0){
                contador += racha[i];
                cout<<"soy contador: "<<contador<<endl;
            }
                

            if (racha[i] < 0)
            {
                respuesta.push_back(contador);
                contador = 0;
            }

            if(i<racha.size()) respuesta.push_back(contador);
        }
        streak = *max_element(respuesta.begin(), respuesta.end());
        cout <<"La mayor racha que puede tener es de: "<< streak << endl;

    }

    return 0;
}