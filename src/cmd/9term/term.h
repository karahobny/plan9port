extern int getpts(int[], char*);
extern int childpty(int[], char*);
extern void updatewinsize(int, int, int, int);
extern int rcfd;
extern int rcstart(int, char*[], int*, int*);
extern int isecho(int);
extern int noecho;
extern int getintr(int);
extern int loginshell;
extern void echoed(char*, int);
extern int echocancel(char*, int);
extern int dropcrnl(char*, int);
extern const char *termprog;
