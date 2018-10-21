#include STORYONE.h
#include <cstdlib>
#include <time>

MysteryWord::Mysteryword(){}
//---------------------------SetMotMystere---------------------------
void MysteryWord::SetMotMystere(string MotMystere) {
  mystery = MotMystere;
}
//-------------------------ShuffleMotMystere-------------------------
void MysteryWord::ShuffleMotMystere(void){
  //Initialisation :
  int i, j;
  const int sizing = mystery.size();
  int sizingof = sizing;
  string randtable[sizing];
  srand(time(NULL));
  //Traitement :
  for (i = 0; i < sizing; i++) {
    j = rand() % sizingof;
  }

}
//-------------------------GetShuffledMystere------------------------
string MysteryWord::GetShuffledMystere(void) {
  return mystery;
}
