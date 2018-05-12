// Created by Zachary Ching and Djimon Jayasundera
// Plays a variation of the game Settler's of Catan.

#include <stdlib.h>
#include <stdio.h>
#include "mechanicalTurk.h"
#include "Game.h"


// Just an idea but we build an arc 1st turn using one of these
#define UNI_A_ARC_PATH_1 ""
#define UNI_A_ARC_PATH_1 "br"
#define UNI_A_ARC_PATH_1 "lrlrlrlrll"
#define UNI_A_ARC_PATH_1 "lrlrlrlrlll"

#define UNI_B_ARC_PATH_1 ""
#define UNI_B_ARC_PATH_1 ""
#define UNI_B_ARC_PATH_1 ""
#define UNI_B_ARC_PATH_1 ""

#define UNI_C_ARC_PATH_1 ""
#define UNI_C_ARC_PATH_1 ""
#define UNI_C_ARC_PATH_1 ""
#define UNI_C_ARC_PATH_1 ""

action decideAction (Game g) {
    int MJStudents = getStudents(g, getWhoseTurn(g), STUDENT_MJ);
    int MTVStudents = getStudents(g, getWhoseTurn(g), STUDENT_MTV);
    int MMONEYStudents = getStudents(g, getWhoseTurn(g), STUDENT_MMONEY);
    
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
