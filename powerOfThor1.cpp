/*
Your program must allow Thor to reach the light of power.
 	Rules

Thor moves on a map which is 40 wide by 18 high. Note that the coordinates (X and Y) start at the top left! This means the most top left cell has the coordinates "X=0,Y=0" and the most bottom right one has the coordinates "X=39,Y=17".

Once the program starts you are given:
the variable lightX: the X position of the light of power that Thor must reach.
the variable lightY: the Y position of the light of power that Thor must reach.
the variable initialTX: the starting X position of Thor.
the variable initialTY: the starting Y position of Thor.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();
string thorMoving;
    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();
    if((initialTX!=lightX)&&(initialTY!=lightY)){
         if((initialTX<lightX)&&(initialTY<lightY)){
                thorMoving="SE";   
                initialTX+=1;
                initialTY+=1;
    }
        else if((initialTX<lightX)&&(initialTY>lightY)){
                thorMoving="NE";   
                initialTX+=1;
                initialTY-=1;
    }
        else if((initialTX>lightX)&&(initialTY<lightY)){
                thorMoving="SW";  
                initialTX-=1;
                initialTY+=1;
    }
        else if((initialTX>lightX)&&(initialTY>lightY)){
                thorMoving="NW";   
                initialTX-=1;
                initialTY-=1;
    }}
    else{
        if(initialTY==lightY){
            if(initialTX<lightX){
                thorMoving="E";  
                initialTX+=1;
    }
        else if(initialTX>lightX){
                thorMoving="W";
                initialTX-=1;
    }}
        else if(initialTX==lightX){
            if(initialTY<lightY){
                thorMoving="S";
                initialTY+=1;
    }
            else if(initialTY>lightY){
                thorMoving="N";  
                initialTY-=1;
    }}}
 
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        // A single line providing the move to be made: N NE E SE S SW W or NW
      // cout << "SE" << endl;
      cout<<thorMoving<<endl;
    }
}
