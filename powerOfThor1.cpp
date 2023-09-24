#include <iostream>
using namespace std;

int main() {
    int lightX, lightY, thorX, thorY;
    cin >> lightX >> lightY >> thorX >> thorY;

    while (true) {
        string direction;
        
        // Determine the vertical direction
        if (thorY < lightY) {
            direction += "S";
            thorY++;
        } else if (thorY > lightY) {
            direction += "N";
            thorY--;
        }
        
        // Determine the horizontal direction
        if (thorX < lightX) {
            direction += "E";
            thorX++;
        } else if (thorX > lightX) {
            direction += "W";
            thorX--;
        }

        // Output the direction
        cout << direction << endl;

        // Skip the remaining turns input since it's not being used
        int remainingTurns;
        cin >> remainingTurns;
    }

    return 0;
}
