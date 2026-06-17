#include "action.h"

int choose_action(int intent, const ChatState* state) {
    (void)state; // まだ使わないけど後で性格とか反映する

    switch (intent) {
        case INTENT_GREETING: return ACTION_GREETING;
        case INTENT_QUESTION: return ACTION_REPLY;
        case INTENT_EMOTION:  return ACTION_EMPATHY;
        default:              return ACTION_SMALLTALK;
    }
}