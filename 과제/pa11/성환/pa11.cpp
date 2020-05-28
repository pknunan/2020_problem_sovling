#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int numInRank[NUM_RANKS + 1];
int numInSuit[NUM_SUITS];

void initData();
void readCard();
int isNotVaild(int rank, int suit);
void analyzeHand();
int isFourCards();
int isFlush();
int isStraight();
int isTriple();
int isPair();
char askMore();

int main()
{
    char more = 'y';
    while (more == 'y')
    {
        readCard();
        analyzeHand();
        more = askMore();
    }
    return 0;
}

void initData()
{
    for (int rank = 0; rank <= NUM_RANKS; rank++)
        numInRank[rank] = 0;
    for (int suit = 0; suit < NUM_SUITS; suit++)
        numInSuit[suit] = 0;
}

void readCard()
{
    char rankCh, suitCh;
    int rank, suit;
    initData();
    int cardsRead = 0;

    while (cardsRead < NUM_CARDS) {
        printf("Enter a card: ");
        scanf(" %c", &rankCh);
        switch (rankCh) {
            case 'a': rank = 1; break;
            case '2': rank = 2; break;
            case '3': rank = 3; break;
            case '4': rank = 4; break;
            case '5': rank = 5; break;
            case '6': rank = 6; break;
            case '7': rank = 7; break;
            case '8': rank = 8; break;
            case '9': rank = 9; break;
            case 't': rank = 10; break;
            case 'j': rank = 11; break;
            case 'q': rank = 12; break;
            case 'k': rank = 13; break;
            default: rank = -1;
        }
        scanf(" %c", &suitCh);
        switch (suitCh) {
            case 'c': suit = 0; break;
            case 'd': suit = 1; break;
            case 'h': suit = 2; break;
            case 's': suit = 3; break;
            default: suit = -1;
        }

        if (isNotVaild(rank, suit))
        {
            printf("Not valid. Choose another.\n");
            continue;
        }

        numInRank[rank]++;
        numInSuit[suit]++;
        cardsRead++;
    }
}

int isNotVaild(int rank, int suit)
{
    if (rank < 0 || suit < 0 || numInRank[rank] && numInSuit[suit])
        return 1;
    return 0;
}

void analyzeHand()
{
    if (isStraight() && isFlush())
        printf("%s", "Straight Flush\n");
    else if (isFourCards()) 
        printf("%s", "Four Cards\n");
    else if (isTriple() && isPair())
        printf("%s", "Full House\n");
    else if (isFlush()) 
        printf("%s", "Flush\n");
    else if (isStraight())
        printf("%s", "Straight\n");
    else if (isTriple())
        printf("%s", "Triple\n");
    else if (isPair() == 2)
        printf("%s", "Two Pairs\n");
    else if (isPair() == 1)
        printf("%s", "Pair\n");
    else
        printf("%s", "High Card\n");
}

int isStraight()
{
    int sequence;
    for (int i = 1; i <= 10; i++)
    {
        sequence = 0;
        if (numInRank[i] == 1) 
            for (int j = i; j < i+5 && j <= NUM_RANKS; j++)
            {
                if (numInRank[j] == 1)
                    sequence++;
                else
                    break;
            }
        if (i == 10 && numInRank[1] == 1)
            sequence++;
        if (sequence == 5)
            return 1;
    }
    return 0;
}

int isFlush()
{
    for (int i = 0; i < NUM_SUITS; i++)
    {
        if (numInSuit[i] == 5)
            return 1;
    }
    return 0;
}

int isFourCards()
{
    for (int i = 1; i <= NUM_RANKS; i++)
    {
        if (numInRank[i] >= 4)
            return 1;
    }
    return 0;
}

int isTriple()
{
    for (int i = 1; i <= NUM_RANKS; i++)
    {
        if (numInRank[i] == 3)
            return 1;
    }
    return 0;
}

int isPair()
{
    int cnt = 0;
    for (int i = 1; i <= NUM_RANKS; i++)
    {
        if (numInRank[i] == 2)
            cnt++;
    }
    return cnt;
}

char askMore()
{
    char c = '\0';
    while (c != 'y' && c != 'n')
    {
        printf("more? (y/n)");
        scanf(" %c", &c);
    }
    return c;
}