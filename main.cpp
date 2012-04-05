/* 
 * File:   main.cpp
 * Author: manuel
 *
 * Created on 21. März 2012, 20:29
 */

#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <time.h>
#include "Menu.h"
#include "Ratte.h"
#include "Race.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    srand ( time(NULL) );
    
    
    Menu* start = new Menu;
    start -> welcome();
    start -> howManyPlayers();       
    start -> makeRats();
    
    Race* race = new Race();
    race -> setRatVector(start->getRatVector()) ;
    
    race -> RaceStructure(start ->raceLength(), start -> givePlayers());
    
    
    
    
    
    return 0;
}

