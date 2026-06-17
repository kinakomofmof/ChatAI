#ifndef STATE_H
#define STATE_H

#define HISTORY_SIZE 4096

typedef struct {
    char history[HISTORY_SIZE];
    int mood;            // -100〜100
    int personality;     // 0〜n
    int user_emotion;    // -100〜100
} ChatState;

void init_state(ChatState* state);
void update_history(ChatState* state, const char* user, const char* ai);

#endif