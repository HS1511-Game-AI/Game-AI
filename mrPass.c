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
    MJStudents = getStudents(g, getWhoseTurn(g), STUDENT_MJ);
    MTVStudents = getStudents(g, getWhoseTurn(g), STUDENT_MTV);
    MMONEYStudents = getStudents(g, getWhoseTurn(g), STUDENT_MMONEY);
    
    action nextAction;
    
    if (MJStudents > 0 && MTVStudents > 0 && MMONEYStudents > 0) {
        //Start spinoff
        nextAction.actionCode = START_SPINOFF;
    } else {
        // Pass
        nextAction.actionCode = PASS;
    }
    return nextAction;
}
