#include <iostream>

using namespace std;

int main()
{
    int valinta;
    cout << "Haluatko suorittaa: \n1.Yhteenlaskun \n2.Vähennyslaskun \n3.Kertolaskun \n4.Jakolaskun" << endl;
    cin >> ws >> valinta;

    while(valinta == 1 || valinta == 2 || valinta == 3 || valinta ==4)
    {
        double valinta1, valinta2;
        cout << "Syötä kaksi numeroa joilla haluat toteuttaa laskun: " << endl;
        cin >> ws >> valinta1;
        cin >> ws >> valinta2;

        if(valinta == 1)
        {
            cout << valinta1 << " + " << valinta2 << " = " << valinta1 + valinta2 << endl;
            break;
        }

        if(valinta == 2)
        {
            cout << valinta1 << " - " << valinta2 << " = " << valinta1 - valinta2 << endl;
            break;

        }

        if(valinta == 3)
        {
            cout << valinta1 << " * " << valinta2 << " = " << valinta1 * valinta2 << endl;
            break;
        }

        if(valinta == 4)
        {
            cout << valinta1 << " / " << valinta2 << " = " << valinta1 / valinta2 << endl;
            break;
        }

    }


    return 0;
}
