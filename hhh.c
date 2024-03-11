#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int pos;
    int type; // 0 for start, 1 for end
} Event;

// Comparison function for sorting events
int compareEvents(const void* a, const void* b) {
    return ((Event*)a)->pos - ((Event*)b)->pos;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        // Create an array to store events
        Event events[2 * n];
        
        for (int i = 0; i < n; ++i) {
            scanf("%d", &events[i * 2].pos);
            events[i * 2].type = 0; // start
            scanf("%d", &events[i * 2 + 1].pos);
            events[i * 2 + 1].type = 1; // end
        }

        // Sort the events based on positions
        qsort(events, 2 * n, sizeof(Event), compareEvents);

        int greetings = 0;
        int active_people = 0;

        for (int i = 0; i < 2 * n; ++i) {
            if (events[i].type == 0) {
                active_people++;
            } else {
                greetings += active_people;
                active_people--;
            }
        }

        printf("%d\n", greetings);
    }

    return 0;
}
