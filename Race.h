/* 
 * File:   Race.h
 * Author: manuel themachine
 *
 * Created on 21. März 2012, 20:31
 */

#ifndef RACE_H
#define	RACE_H
#include <vector>
#include <time.h>
#include "Menu.h"
#include "Ratte.h"

static int my_sleep( unsigned long _t ){

return usleep( 1000 * _t );
}

class Race{
private:
    vector<Ratte*>* ratVector;
    
public:
    Race(){
        ratVector = NULL;
    }
    int randomGenerator(){
        
        int addToRat;
        
        1 + (addToRat = rand() % 3 );
        
        return(addToRat);
    }
    
    void draw(int raceLength){
        int vectorSize = 0;
        
        if(ratVector != NULL){
            vectorSize = ratVector -> size() -1;
            
            while(vectorSize >= 0){
                int ratStep;
                
                ratStep = randomGenerator();
                Ratte* ratte = ratVector->at(vectorSize);
                ratte -> MoveCalc(ratStep);
                ratte -> draw(raceLength, vectorSize);
                vectorSize--;
            }
        }
        
    }
    
    void setRatVector(vector<Ratte*>* ratVector){
        
        this -> ratVector = ratVector;
        
    }
    
    int RaceStructure(int raceLength,int players){
        int length = raceLength;
        while(length >= 0){
            system("clear");
            draw(raceLength);
            my_sleep(500);
            if(winCheck(raceLength, players)== 33){
                return(33);
            }
            length--;
        }
        return raceLength;
    }
    int winCheck(int RaceLength, int players){
        int playerCount; 
        int position = 0;
        
        
        playerCount = players - 1;
        while(playerCount >= 0){
            Ratte* ratte = ratVector -> at(playerCount);
            position = ratte -> givePosition();
            if(position-1 >= RaceLength){
                cout<< "player " << playerCount << " won the Game" << endl;
                return(33); 
                playerCount = -5;
                }
                playerCount--;       
        }
    }
    
    
    
};





#endif	/* RACE_H */

