#include <iostream>
#include "MapPiece.hpp"
#include "Player.hpp"
using namespace std;

int main () {
    MapPiece p1 {"You entered 1.", "You left 1.", "You hit a wall."};
    MapPiece p2 {"You entered 2.", "You left 2.", "You hit a wall."};
    MapPiece p3 {"You entered 3.", "You left 3.", "You hit a wall."};
    MapPiece p4 {"You entered 4.", "You left 4.", "You hit a wall."};
    MapPiece p5 {"You entered 5.", "You left 5.", "You hit a wall."};
    MapPiece p6 {"You entered 6.", "You left 6.", "You hit a wall."};
    MapPiece p7 {"You entered 7.", "You left 7.", "You hit a wall."};
    MapPiece p8 {"You entered 8.", "You left 8.", "You hit a wall."};
    MapPiece p9 {"You entered 9.", "You left 9.", "You hit a wall."};

    p1.setDown(p4);
    p2.setRight(p3);
    p3.setLeft(p2).setDown(p6);
    p4.setUp(p1).setRight(p5).setDown(p7);
    p5.setLeft(p4).setRight(p6);
    p6.setUp(p3).setLeft(p5).setDown(p9);
    p7.setUp(p4);
    p8.setRight(p9);
    p9.setUp(p6).setLeft(p8);

    Player player {p1, p9};
    cout << p1.enterTxt << endl;
    // game loop
    while (true) {
        cout << "\
    Where to go next?\n\
        1: left\n\
        2: right\n\
        3: up\n\
        4: down\n\
        5: give up\n";

        int option;
        if (!(cin >> option)) {
            cout << "Invalid Input!" << endl;
            cin.clear();
            cin.ignore();
            continue;
        }
        if (option < 1 || option > 5) {
            cout << "Invalid Input!" << endl;
            continue;
        }
        if (option == 5) {
            cout << "Sorry to hear that. Bye bye!" << endl;
            break;
        }
        player.moveBasedOn(option);
        if (player.isWin()) {
            cout << "You get it!" << endl;
            break;
        }
    }

    return 0;
}
