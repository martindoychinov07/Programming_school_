#include <stdio.h>

unsigned char room_mask(int room)
{
    return (1 << (room - 1));
}

int is_on(unsigned char state, int room)
{
    return (state & room_mask(room)) != 0;
}

void print_state(unsigned char state)
{
    for (int i = 1; i <= 8; i++) {
        printf("%d : %s\n", i, is_on(state, i) ? "on" : "off");
    }
}

int main()
{
    int option, room;
    unsigned char state = 0;

    unsigned char room1 = 1 << 0;
    unsigned char room2 = 1 << 1;
    unsigned char room3 = 1 << 2;
    unsigned char room4 = 1 << 3;
    unsigned char room5 = 1 << 4;
    unsigned char room6 = 1 << 5;
    unsigned char room7 = 1 << 6;
    unsigned char room8 = 1 << 7;

    do
    {
        printf("\nPlease select one of the following options:\n1.Switch lights \n2.Print state\n3.Quit\n");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                printf("Room number:");
                scanf("%d", &room);
                unsigned char mask = room_mask(room);
                if (is_on(state, room))
                {
                    state = state & (~mask); // turn off
                }
                else
                {
                    state = state | mask; // turn on
                }
                printf("Room light is switched %s.\n", is_on(state, room) ? "on" : "off");
                break;

            case 2:
                print_state(state);
                break;
        }
    }
    while(option != 3);

    return 0;
}
