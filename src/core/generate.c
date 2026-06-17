#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "generate.h"

char* generate_response(int action, const char* input, ChatState* state) {
    (void)state; // 後で mood / personality を反映する

    char* buf = malloc(512);
    if (!buf) return NULL;

    switch (action) {
        case ACTION_GREETING:
            snprintf(buf, 512, "こんにちは。ChatAI だよ。");
            break;
        case ACTION_REPLY:
            snprintf(buf, 512, "質問だね。「%s」について考えてみるよ。", input);
            break;
        case ACTION_EMPATHY:
            snprintf(buf, 512, "しんどそうだね。「%s」って感じてるんだね。", input);
            break;
        case ACTION_SMALLTALK:
        default:
            snprintf(buf, 512, "なるほど、「%s」ね。続き聞かせて。", input);
            break;
    }

    return buf;
}