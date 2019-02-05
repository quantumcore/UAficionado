#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h> 
#include <arpa/inet.h>

void levelOne();
void levelTwo();
void levelThree();
void levelFour();
void levelFive();
void ddosNotReally();

int main(int argc, char const *argv[])
{
    char name[20];
    if(argc < 2)
    {
        printf("Morse Security -- |\n");
        printf("Blue Team VS Red Team (Program) Simulator.\n");
        printf("Solve the challanges if you can.\n\nUAficionado --help for more information.\n");
        exit(1);
    }

    if(strcmp(argv[1], "--level-one") == 0)
    {
        memset(name, '\0', strlen(name));
        printf("--> Enter a Name : ");
        fgets(name, 20, stdin);
        printf("--> starting Level 1 for %s\n", name);
        levelOne();     
    } else if(strcmp(argv[1], "--level-two") == 0)
    {
        memset(name, '\0', strlen(name));
        printf("--> Enter a Name : ");
        fgets(name, 20, stdin);
        printf("--> starting Level 2 for %s\n", name);
        levelTwo();     
    } 
    else if(strcmp(argv[1], "--level-three") == 0)
    {
        memset(name, '\0', strlen(name));
        printf("--> Enter a Name : ");
        fgets(name, 20, stdin);
        printf("--> starting Level 3 for %s\n", name);
        levelThree();     
    } 
    else if(strcmp(argv[1], "--level-four") == 0)
    {
        memset(name, '\0', strlen(name));
        printf("--> Enter a Name : ");
        fgets(name, 20, stdin);
        printf("--> starting Level 4 for %s\n", name);
        levelFour();     
    } 
     else if(strcmp(argv[1], "--level-five") == 0)
    {
        printf("--> No level 5 sorry.\n");
        printf("I hope you learned something.\n");
        printf("I am trying to spread knowledge, please support me.\n");
        printf("The whole level 5 was for you that, Setup Countermeasures for these types of attacks.\n");
        printf("Thanks alot for trying UAficionado!\n\n\n\nGoodBye!\n\n\n\n");
        exit(1);
    } else if(strcmp(argv[1], "--help") == 0)
    {
        printf("Morse Security -- |\n");
        printf("UAficionado | help\n");
        printf("--> UAficionado --level-<level>\n");
        printf("--> For Example : UAficionado --level-one\n");
    }
    else {
        printf("Invalid Parameter(s).\n Type UAficionado --help\n");
        exit(1);
    }   
    return 0;
}

void levelOne()
{
    char prompt[50];
    printf("--------------- | Level One | ---------------\n\n");
    printf("~ Difficulty : Very Easy\n");
    printf("~ The Scenario : \n");
    printf("--> Red Team has planted a Backdoor in your Computer and is currently trying to Connect to it.\n");
    printf("--> You have to find the Backdoor, Reverse Engineer it to reveal the Host it responds to..\n");
    printf("--> The Host it will respond to is probably the Red Team's HQ. Which you can then Trace.\n\n\n");
    printf("--> Main Objective : Find out Host of Backdoor\n\n\n");
    printf("--> Starting in 5 Seconds..\n\n");
    usleep(50000);
    printf("\n\n\n--> Enter Backdoor HOST : ");
    memset(prompt, '\0', strlen(prompt));
    scanf("%s", prompt);    
    if(strcmp(prompt, "127.0.0.1") == 0)
    {
        printf("--> Level 1 Passed! Congratulations! Have a Coffee! Now you can start Level 2!\n");
        exit(1);
    } else {
        printf("--> Try again!\n");
        exit(1);
    }
    
}

void levelTwo()
{
    const char* command = "sudo service lighttpd start";
    char smsg[50];

    printf("--------------- | Level Two | ---------------\n\n");
    printf("~ Difficulty : Easy\n");
    printf("~ The Scenario : \n");
    printf("--> Scan the Red Team host for Vulnerabilities.\n");
    printf("--> Exploit the Vulnerability.\n");
    printf("--> Find the File containing the Secret Message.\n\n\n");
    printf("--> Main Objective : Find the Secret Message.\n\n\n");
    printf("--> Starting in 5 Seconds..\n\n");
    usleep(50000);

    printf("--> Setting up things for Level two..\n");
    printf("EXEC : %s\n", command);
    system(command);
    printf("\n\n\n--> Enter the Secret Message : ");
    scanf("%s", smsg);
    if(strcmp(smsg, "DOS") == 0)
    {
        printf("--> Level 2 Passed! Congratulations! You are doing Great! Start Level 3!\n");
        exit(1);
    } else {
        printf("--> Try again!\n");
        exit(1);
    }
}

void levelThree()
{
    char emsg[200];
    const char* comagin = "sudo service lighttpd stop";
    const char* str = "Gur-anzr-bs-gur-Frperg-Crefba-vf-Snunq-Zhfgnsn-nxn-Ylak.";
    printf("--------------- | Level Three | ---------------\n\n");
    printf("~ Difficulty : Medium\n");
    printf("~ The Scenario : \n");
    printf("--> DOS Server is running on your Network.\n");
    printf("--> Stop DOS Server, Get the Message that is being used to DOS with.\n");
    printf("--> Starting in 5 Seconds..\n\n");
    usleep(500000);
    printf("EXEC : %s\n", comagin); 
    system(comagin);
    ddosNotReally();
    printf("--> Enter the Message used to DOS with : ");
    scanf("%s", emsg);
    if(strncmp(emsg, str, strlen(str)) == 0)
    {
        printf("--> Congratulations! Level Three Passed! Only two more to go!\n");
        exit(1);
    } else {
        printf("--> Nope, Try again.\n");
        exit(1);
    }
}

void levelFour()
{
    char usr[50];
    printf("--> Enter the Identity of Person attacking : ");
    scanf("%s", usr);
    if(strcmp(usr, "Lynx") == 0)
    {
        printf("WOAAHH! You are doing GREAAAAAT! Only one more!\n");
        exit(1);
    } else {
        printf("Try Again!\n");
        exit(1);
    }
}

void ddosNotReally()
{
    int sock, csock;
    struct sockaddr_in server, client;
    int port = 80;
    int osz = 1;
    int iResult;
    const char* message = "\r\nGur-anzr-bs-gur-Frperg-Crefba-vf-Snunq-Zhfgnsn-nxn-Ylak.\r\n";

    sock = socket(AF_INET, SOCK_STREAM, 0);
    if(sock == 0)
    {
        perror("Socket Error");
        exit(1);
    }

    if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,   &osz, sizeof(osz))) 
    { 
        perror("setsockopt"); 
        exit(EXIT_FAILURE); 
    } 
    
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_port = htons(port);
    server.sin_family = AF_INET;

    iResult = bind(sock, (struct sockaddr*)&server, sizeof(server));
    if(iResult < 0)
    {
        perror("Bind error");
        exit(1);
    }

    printf("--> Listening for Incoming Connections on a Secret Host that you have to find out yourself.\n");
    printf("--> Keep in mind when you open it, You will be hit with a Lot of Data that may Lag your PC.\n");
    printf("--> You have to Stop it without closing me.\n");
    listen(sock, AF_INET);

    csock = accept(sock, NULL, NULL);
    if(csock < 0)
    {
        perror("Accept Error");
        exit(1);
    }

    printf("--> DOS Victim : %s\n", inet_ntoa(client.sin_addr));
    while(1)
    {
        int val = send(csock, message, strlen(message), 0);
        if(val < 0)
        {
            break;
        }
        
    }

    close(sock);
}
