#include <iostream>

using namespace std;

int main()
{   /*
    cout << "Bilangan Genap 1-100" << endl;
    cout << endl;
    for(int i = 1; i <= 100; i++)
    {
    if(i % 2 == 0)
    cout << i << endl;
    }
    cout << endl;
    cout << "Bilangan Ganjil 1-100" << endl;
    cout << endl;
    for(int g = 1; g <= 100; g++)
    {
    if(g % 2==1)
        cout << g << endl;
    }
    cout << endl;
    cout << "Bilangan Genap 1-100 Kelipatan 6" << endl;
    cout << endl;
    for(int kelipatan6 = 1; kelipatan6 <= 100; kelipatan6++)
    {
    if(kelipatan6 % 2 == 0 && kelipatan6 % 6 ==0)
        cout << kelipatan6 << endl;
    } */

    //nested loop
    for(int i = 0; i < 2; i++){ //outer
        cout << i << endl;
        for(int j = 0; j < 3; j++) { //inter
            cout << j << endl;
        }
    }
    /*
    i=0, > 0
    j=0, > 0 0 1 2 1 0 1 2
    */
    return 0;
}
