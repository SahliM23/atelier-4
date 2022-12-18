#include <iostream>
#include <list>
#include <iterator>


using namespace std;



int main()
{

    list <string> Plist;

    Plist.push_back("mustapha sahli 21 ANS");
    Plist.push_back("ahmed kiri 22 ANS");
    Plist.push_back("ziyech Hakim 27 ANS");
    Plist.push_back("reda sahli 19 ANS");
    Plist.push_back("lamaie Ismail 24 ANS");
    Plist.push_back("omaima sahli 22 ANS");
    Plist.push_back("sahli Omar 20 ANS");


    // Tri des elements

    Plist.sort();

    //affichage

    list <string> :: iterator it;


    cout << "Votre liste ordonnee : "<<endl;

    for(it = Plist.begin(); it != Plist.end(); ++it)
    {
        cout << '\t' << *it;

        cout << '\n';

    }

    return 0;
}
