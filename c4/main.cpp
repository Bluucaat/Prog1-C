#include <iostream>
#include <time.h>

/*azert void, mert a tomb neve egy pointer
*C alapu nyelvekben ertek szerinti parameteratadas van
 * formalis parameterlista - fuggvenynel
 * aktualis paramterlista - hivasnal (main)
*/
void feltolt(int t[], int hossz) {
    srand(time(NULL));
    for (int i = 0; i < hossz; i++) {
        t[i] = rand() % 100 + 1;
    }
}

void kiir(int t[], int hossz){
    for(int i = 0; i<hossz; i++){
        std::cout << t[i];
    }
}

int maxelem(int t[], int hossz){
    if(t[0] == NULL){
        std::cout << "a tombben null erteks szerepel";
    }
    else {
        int temp = t[0];
        for (int i = 0; i < hossz; i++) {
            if (t[i] > temp) temp = t[i];
            return temp;
        }
    }
}

int main() {

    int n = 10;
    int t[n];
    //felt

    feltolt(t, n);
    //tomb kiiratas
    for(int i = 0; i<n; i++){
        std::cout << t[i] << '\n';
    }

    //legnaghyobb elem
    int temp = t[0];
    //be van fogva a t[0], eleg 1rol indulni
    for(int i = 1; i<n; i++){
        if(t[i]>temp) temp = t[i];
    }


    //legkissebb elem
    temp= t[0];
    //be van fogva a t[0], eleg 1rol indulni
    for(int i = 1; i<n; i++){
        if(t[i]<temp) temp = t[i];
    }

    std::cout << "a tomb legkissebb eleme " << temp << "\n";

    for(int i = 0; i<n; i++){
        if(t[i] % 2 == 0){
            std::cout << t[i]<<"\n";
        }
    }




}

