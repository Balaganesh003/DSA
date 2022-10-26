#include <stdio.h>
#include <stdlib.h>

struct Node {
    int player_id;
    struct Node *next;
}*start, *newNode, *ptr;


int main() {
  
    int no_players, k, i,  count = 0;
    printf("Enter the number of players: ");
    scanf("%d", &no_players);
    printf("Enter the value to be skipped: ");
    scanf("%d", &k);

    // Create a circular linked list
    start = malloc(sizeof(struct Node));
    start->player_id = 1;
    start->next = start;
    ptr = start;

    for (i = 2; i <= no_players; i++) {
        newNode = malloc(sizeof(struct Node));
        newNode->player_id = i;
        ptr->next = newNode;
        newNode->next = start;
        ptr = newNode;
    }

    // Start the game
    for(count = no_players ; count >1 ; count--){
        for(i = 0 ; i < k-1 ; ++i){
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next; // Removing the eliminated player from the linked list
    }
    printf("The winner is player %d", ptr->player_id);

    return 0;
}
