#ifndef ACTION_H
#define ACTION_H

#include "state.h"
#include "intent.h"

enum ActionType {
    ACTION_REPLY,
    ACTION_EMPATHY,
    ACTION_SMALLTALK,
    ACTION_GREETING
};

int choose_action(int intent, const ChatState* state);

#endif