#include <stdio.h>
#include "core/state.h"
#include "core/intent.h"
#include "core/action.h"
#include "core/generate.h"

int main(void) {
    ChatState state;
    init_state(&state);

    char input[512];

    while (1) {
        printf("You: ");
        if (!fgets(input, sizeof(input), stdin)) break;

        int intent = evaluate_intent(input);
        int action = choose_action(intent, &state);
        char* response = generate_response(action, input, &state);

        printf("AI: %s\n", response);

        update_history(&state, input, response);
        free(response);
    }
    return 0;
}