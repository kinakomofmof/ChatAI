#include <string.h>
#include "intent.h"

int evaluate_intent(const char* input) {
    if (strstr(input, "こんにちは") || strstr(input, "おはよう"))
        return INTENT_GREETING;
    if (strchr(input, '?') || strstr(input, "？"))
        return INTENT_QUESTION;
    if (strstr(input, "疲れた") || strstr(input, "しんどい"))
        return INTENT_EMOTION;
    return INTENT_OTHER;
}