// C17 Standard

#include <stdio.h>


int main(void)
{

    int numberOfFriends = 5;

    for (int i = 0; numberOfFriends < 150; i++)
    {
        printf("Week %d: %d friends\n", i, numberOfFriends);
        numberOfFriends -= (i+1);
        numberOfFriends *= 2;
    }

    return 0;

}