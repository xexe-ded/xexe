#include <iostream>
#include "windows.h"

using namespace std;

int main(){
    const float SIZE = 150;
    const float ARG = 1;
    float DELAY = 10;
    const float ROUNDS = 10;

    system("color 02");
    
    for (int r=0; r < ROUNDS; r++){

        for (int pot = 0; pot < SIZE/2; pot += ARG){
            int anty_pot = abs(SIZE - pot);
            float delay = abs(SIZE - pot)/(SIZE/2) * DELAY;

            for (int i=0; i < pot; i ++){ cout << " ";}
            cout << "*";
            for (int i=pot + 1; i < anty_pot; i ++){ cout << " ";}
            cout << "*";
            for (int i=anty_pot + 1; i < SIZE; i ++){ cout << " ";}

            cout << endl;
            Sleep(delay);
        }

        for (int i = 0; i < SIZE/2; i ++){cout << " ";}
        cout << "*\n";

        for (int pot = SIZE/2+1; pot < SIZE; pot += ARG){
            int anty_pot = abs(SIZE - pot);
            float delay = pot/(SIZE/2) * DELAY;

            for (int i=0; i < anty_pot; i ++){ cout << " ";}
            cout << "*";
            for (int i=anty_pot +1; i < pot; i ++){ cout << " ";}
            cout << "*";
            for (int i=pot + 1; i < SIZE; i ++){ cout << " ";}

            cout << endl;
            Sleep(delay);
        }
    }

    cout << "\n\n\nHello world !!!! ;)\n\n";

    Sleep(51);

    system("powershell mkdir A_1");
    Sleep(10);

    system("powershell mkdir A_2");
    Sleep(10);

    system("powershell mkdir A_3");
    Sleep(10);
    
    system("powershell mkdir A_4");
    Sleep(10);

    system("powershell mkdir A_5");
    Sleep(10);

    system("powershell mkdir A_6");
    Sleep(10);
    
    system("powershell mkdir A_7");
    Sleep(10);

    system("powershell mkdir A_7");
    Sleep(10);

    system("powershell mkdir A_8");
    Sleep(10);
    
    system("powershell mkdir A_9");
    Sleep(10);

    system("powershell mkdir A_10");
    Sleep(10);

    system("powershell mkdir A_11");
    Sleep(10);
    
    system("powershell mkdir A_12");
    Sleep(10);

    system("powershell mkdir A_13");
    Sleep(10);

    system("powershell mkdir A_14");
    Sleep(10);
    
    system("powershell mkdir A_15");
    Sleep(10);

    system("powershell mkdir A_16");
    Sleep(10);

    system("powershell mkdir A_17");
    Sleep(10);
    
    system("powershell mkdir A_18");
    Sleep(10);

    system("powershell mkdir A_19");
    Sleep(10);

    system("powershell mkdir A_20");
    Sleep(10);
    
    system("powershell mkdir A_21");
    Sleep(10);

    system("powershell mkdir A_22");
    Sleep(10);

    system("powershell mkdir A_23");
    Sleep(10);
    
    system("powershell mkdir A_24");
    Sleep(10);

    system("powershell mkdir A_25");
    Sleep(10);

    system("powershell mkdir A_26");
    Sleep(10);
    
    system("powershell mkdir A_27");
    Sleep(10);

    system("powershell mkdir A_28");
    Sleep(10);

    system("powershell mkdir A_29");
    Sleep(10);

    system("exit");
}