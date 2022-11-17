#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum suits {CLUB, DIAMOND, HEART, SPADE};

struct card {
	enum suits suit;
	short int value;
} trump[52];

char *suit_symbol[] = {"��", "��", "��", "��" };
char *suit_series[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

void print_cardsuit(void);
void card_shuffle(void);
void init_card(void);

int main()
{
	init_card();	// ī�� �ʱ�ȭ 

	printf("ī�� ���� ��\n"); 
	print_cardsuit();

	card_shuffle();	// ī�� ���� 

	printf("ī�� ���� ��\n"); 
	print_cardsuit();
}

void init_card(void)	{	// ī�� �ʱ�ȭ 
	int cnt=0, card_no, cardsuit;
	for(cardsuit=CLUB; cardsuit<=SPADE; cardsuit++) {
		for(card_no = 0; card_no<13; card_no++) {
			trump[cnt].suit = cardsuit;
			trump[cnt].value = card_no;
			cnt++;
		}
	}
}

void card_shuffle(void) {	// ī�� ���� 
 	struct card tmp;
	int random[52], i, j;
	srand(time(0));		// ���� �ʱ�ȭ 

	for(i=0; i<52; i++)	// ���� 52�� �߻� 
		random[i]= rand();

	for(i=0; i<51; i++) {		// double sorting
		for(j=i+1; j<52; j++){
			if(random[i]<random[j]) {  // ���� ���� 
				random[i] ^= random[j]; 
				random[j] ^= random[i];
				random[i] ^= random[j];

				tmp = trump[i];		// �� ����ü ���� �ٲ� 
				trump[i] = trump[j];
				trump[j] = tmp;
			}
		}
	}
}

void print_cardsuit(void)	{ // ī�� ��� 
	int x, cnt=0;
	for(x=0, cnt=0; x<4; cnt++) {
		printf("%s%s  ", suit_symbol[trump[cnt+13*x].suit],
				suit_series[trump[cnt+13*x].value]);
		if( cnt == 12) {
			x++;
			cnt = -1;
			printf("\n");
		}
	}
	printf("\n");
}
