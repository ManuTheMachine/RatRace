/* 
 * 
 * File:   Ratte.h
 * Author: manuel
 *
 * Created on 21. März 2012, 20:30
 */

#ifndef RATTE_H
#define	RATTE_H
#include <stdlib.h>    
#include <time.h>
#include <iostream>
using namespace std;

class Ratte{
private:
    int position;
    int sprinter;
    int freezer;
    int gloves;
public:
    Ratte(){
        position = 0;
        sprinter = 0;
        freezer = 0;
        gloves = 0;
    }
    
    int MoveCalc(int stepInput){
        
        position = stepInput + position;
        
    }  
    
    void draw(int raceLength, int vectorSize){
        int positionCounter;
        positionCounter = position;
        
        while(positionCounter >= 0){
            cout << " " ;
            positionCounter--;
        }
        cout<< "8:>";
        positionCounter = position + 1;
        while(positionCounter <= raceLength){
            cout << " ";
            positionCounter++;
        }
        cout<< "|" << endl;
    }
    int givePosition(){
        return(position);
    }
        
    
    

        
};


#endif	/* RATTE_H */

