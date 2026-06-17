#ifndef INTENT_H
#define INTENT_H

enum IntentType {
    INTENT_GREETING,
    INTENT_QUESTION,
    INTENT_EMOTION,
    INTENT_OTHER
};

int evaluate_intent(const char* input);

#endif