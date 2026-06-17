#include <string.h>
#include <stdio.h>
#include "state.h"

void init_state(ChatState* state) {
    memset(state->history, 0, HISTORY_SIZE);
    state->mood = 0;
    state->personality = 0;
    state->user_emotion = 0;
}

void update_history(ChatState* state, const char* user, const char* ai) {
    char buffer[1024];
    snprintf(buffer, sizeof(buffer), "You: %s\nAI: %s\n", user, ai);

    // 履歴が溢れないようにする
    if (strlen(state->history) + strlen(buffer) < HISTORY_SIZE) {
        strcat(state->history, buffer);
    } else {
        // シンプルに履歴をリセット（後でリングバッファにしてもOK）
        memset(state->history, 0, HISTORY_SIZE);
        strcat(state->history, buffer);
    }
}