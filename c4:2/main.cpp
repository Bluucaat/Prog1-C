#include <iostream>
#include <time.h>

int* kiszur_paros(int t1[], int hossz) {
    int* t2 = (int*) malloc(sizeof(int) * (hossz+1));
    int i2 = 0; //ket tomb kulonbozo indexekhez megy

    for (int i1 = 0; i1 < hossz; i1++) {
        if (t1[i1] % 2 == 0) {
            t2[i2] = t1[i1];
            i2++;
        }
    }
    t2[i2] = -1;
    return t2;
}
int main() {

    const int n = 5;
    int t1[n];
    srand(time(NULL));
   for(int i = 0; i<n; i++){
   t1[i] = rand() % 100 + 1;
   }

   for(int i = 0; i<n; i++){
       std::cout << t1[i] << "\n";
   }

   //n+1 - guardot teszunk a vegere

  int* t2 = kiszur_paros(t1, n);
   std::cout << "a paros szamok:\n";
   int i2 = 0;
   while(t2[i2] != -1){
       std::cout << t2[i2] << "\n";
       i2++;
   }

   free(t2);

}

