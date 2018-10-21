#include <iostream>
#include string;
#include "includers/STORYONE.h"

int main(int argc, char const *argv[]) {
//Initialisation :
MysteryWord bougnoul;
string WordIn, WordOut;
//Traitement + Texte d'entrée :
cout << "Entrez un mot à mélanger : \n";
cin >> WordIn;
bougnoul.SetMotMystere(WordRecup);
WordOut = bougnoul.GetShuffledMystere();
//Sortie :
cout << "Le mot que vous avez rentrer est : \n" << WordOut << "\n";
return 0;
}
