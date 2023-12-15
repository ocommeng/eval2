#include <iostream>
using namespace std;

int main() {

  int nbrePlaces = 10;
  int choix;
  cout << "************ Evaluation 2 ************" << endl << endl;
  do {
    cout << "1 - Entrée dans le parking" << endl;
    cout << "2 - Nombre de places disponibles" << endl;
    cout << "3 - Sortie du parking" << endl;
    cout << "4 - Quitter" << endl;
    cin >> choix;
    switch (choix) {
    case 1:
      if (nbrePlaces > 0) {
        nbrePlaces--;
      }
      break;
    case 2:
      cout << "Il reste " << nbrePlaces << " places disponibles" << endl;
      break;
    case 3:
      if (nbrePlaces < 10) {
        nbrePlaces++;
      }
      break;
    case 4:
      cout << "Au revoir" << endl;
      break;
    default:
      cout << "Choix invalide" << endl;
    }
  } while (choix != 4);
  return 0;
}