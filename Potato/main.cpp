#include <iostream>
#include <fstream>

using namespace std;

struct struktura{
    string name;
    int k;
    double kaina;
};
int main()
{
    int n, p;
    struktura kai[50]; //kainos
    struktura par[50]; //pardavimai

    struktura bulves[50];
    int bul = 0;
    struktura braskes[50];
    int br  = 0;
    struktura agurkai[50];
    int a   = 0;

    ifstream in("kainos.txt");
    in >> n;
    char x[15];

    for(int i = 0; i < n; i++){

        in.ignore(80, '\n');
        in.get(x, 15);
        kai[i].name = x;

        in >> kai[i].k >> kai[i].kaina;
    }
    in.close();

    ifstream in2("pardavimai.txt");
    in2 >> p;
    for(int i = 0; i < p; i++){

        in2.ignore(80, '\n');
        in2.get(x, 15);
        par[i].name = x;

        in2 >> par[i].k >> par[i].kaina;
    }
    in2.close();

    for(int i = 0; i < p; i++){
        if(par[i].name == "Bulves"){
            bulves[bul].k = par[i].k;
            bulves[bul].kaina = par[i].kaina;
            bul++;
        }
        else if(par[i].name == "Braskes"){
            braskes[br].k = par[i].k;
            braskes[br].kaina = par[i].kaina;
            br++;
        }
        else{
            agurkai[a].k = par[i].k;
            agurkai[a].kaina = par[i].kaina;
            a++;
        }
    }


    cout << "agurkai[a].k"


    return 0;
}

