/* 
 * File:   Menu.h
 * Author: manuel
 *
 * Created on 21. März 2012, 20:31
 */

#ifndef MENU_H
#define	MENU_H
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <time.h>
#include "Ratte.h"
#include "Race.h"

using namespace std;

class Menu{
private:
    int players;
    vector<Ratte*>* ratVector;
    
public:
    
    Menu(){
        ratVector = new vector<Ratte*>(); //konstruktor von vektor  (erzeugt ein objekt vom typ vektor)
        players = 0;
        
    }
    int welcome(){
        
        cout<< " Welcome to Rat Race! " << endl << endl << endl;
    }
    int howManyPlayers(){
        cout<< "how many players ?"<< endl;
        cin>> players ;
        
    }
    
    int raceLength(){
        int length;
        
        cout<< "Choose the length of the Race" << endl;
        cin>> length;
        return length;
    }
    
    int makeRats(){
        int counter = players;
        while(counter >= 1){
            Ratte* eineRatte = new Ratte();
            ratVector -> push_back (eineRatte);
            counter--;
        }
    }
    
    vector<Ratte*>* getRatVector(){
        return ratVector;
    }
    
    int givePlayers(){
        return (players);
    }
    
    
    
};



#endif	/* MENU_H */

