/*
 *  Mr Pass.  Brain the size of a planet!
 *
 *  Proundly Created by Richard Buckland
 *  Share Freely Creative Commons SA-BY-NC 3.0. 
 *
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
#include "Game.h"
#include "mechanicalTurk.h"
 
action decideAction (Game g) {
 
    if (actionCode == START_SPINOFF) {
        
        if (STUDENT_THD < 1 && STUDENT_MTV < 1 && STUDENT_MMONEY < 1) {
    
        action nextAction;
        nextAction.actionCode = PASS;
        }
       
        else {
        // enter spinoff logic here i.e. 1/3 chance for IP, 2/3 chance for publication
        int chance;
        chance = rand(void) % 3 + 1;
            if (chance = 1) {
                // give IP
            }
            else {
                //give publication
            }
        }
       
    }
   return nextAction;
}

