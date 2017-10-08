/*
The Goal

Destroy the mountains before your starship collides with one of them. For that, shoot the highest mountain on your path.
 	Rules

At the start of each game turn, you are given the height of the 8 mountains from left to right.
By the end of the game turn, you must fire on the highest mountain by outputting its index (from 0 to 7).

Firing on a mountain will only destroy part of it, reducing its height. Your ship descends after each pass.  
*/

import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Player {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
            int maxMountainH = 0; // highest mount 0-9
            int maxMountainIndeX = 0; // highest mount number 0-7
        // game loop
        while (true) {
            for (int i = 0; i < 8; i++) {
                int mountainH = in.nextInt(); // represents the height of one mountain.
                if (maxMountainH <= mountainH) {
                    maxMountainH = mountainH;
                    maxMountainIndeX = i;
                    
                }
            }

            // Write an action using System.out.println()
            // To debug: System.err.println("Debug messages...");
            System.err.println(maxMountainH);

            System.out.println(maxMountainIndeX); 
            maxMountainH = 0; 
            maxMountainIndeX = 0;
        
    
    

            // To debug: System.err.println("Debug messages...");

            // either:  FIRE (ship is firing its phase cannons) or HOLD (ship is not firing).
        }
    }

}
