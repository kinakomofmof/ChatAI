#ifndef GENERATE_H
#define GENERATE_H

#include "state.h"
#include "action.h"

char* generate_response(int action, const char* input, ChatState* state);

#endif