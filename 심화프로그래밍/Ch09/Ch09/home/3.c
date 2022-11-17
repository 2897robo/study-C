#include <stdio.h>
#include <string.h>

const char ID_ENCRYPT_KEY = 0xAA;
const char PW_ENCRYPT_KEY = 0x55;

typedef struct {
    char id[50];
    char pw[50];
    char name[50];
    char nickname[50];
} Member;

void encrypt(char* str, char key) {
    for(int i = 0; i < strlen(str); i++)
        str[i] = str[i] ^ key;
}

void inputMember(Member* member) {
    scanf("%s %s %s %s",
            member->id,
            member->pw,
            member->name,
            member->nickname);
    encrypt(member->id, ID_ENCRYPT_KEY);
    encrypt(member->pw, PW_ENCRYPT_KEY);
}

const Member* signIn(const Member members[], int len, const char* id, const char* pw) {
    for(int i=0; i<len; i++) {
        if(!strcmp(members[i].id, id) && !strcmp(members[i].pw, pw))
            return &members[i];
    }
    return NULL;
}

int main() {
	printf("20194487 ����\n");
    	Member members[5];
    	for(int i=0; i<5; i++) {
	        printf("%d��° ȸ���� ID, password, �̸�, ���� �Է�.\n", i+1);
	        inputMember(&members[i]);
 	}

    	while(1) {
  	char id[50];
        	char pw[50];
        	printf("id: ");
        	scanf("%s", id);
        	printf("pw: ");
        	scanf("%s", pw);
        	encrypt(id, ID_ENCRYPT_KEY);
        	encrypt(pw, PW_ENCRYPT_KEY);

        	const Member* m = signIn(members, 5, id, pw);
        	if(!m) {
    		printf("����\n");
        	    	continue;
        	}
        	printf("\n�̸�: %s\n�г���: %s\n\n",
                m->name,
                m->nickname);
    	}
   	return 0;
}