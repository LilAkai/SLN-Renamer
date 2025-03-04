#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <stdbool.h>

void printMenu(){
	printf("  ___ _    _  _   ___                              \n / __| |  | \\| | | _ \\___ _ _  __ _ _ __  ___ _ _  \n \\__ \\ |__| .` | |   / -_) ' \\/ _` | '  \\/ -_) '_| \n |___/____|_|\\_| |_|_\\___|_||_\\__,_|_|_|_\\___|_|   ");
	printf("\t\t\tmade by LilAkai_\n\n");
}

void main(int argc, char** argv){
    //TODO: ne pas regarder les .vs et le "x64" au niveau des fichiers sources
	if (argv[1] == NULL) {
		printMenu();
		printf("No Folder Found");
		Sleep(2000);
		for (int i = 3; i>=0;i--) {
			system("cls");
			printMenu();
			printf("exit in %d",i);
			Sleep(1000);
		}
		exit(1);
	}
	printMenu();
	//PATH OF THE FOLDER TO RENAME [FIXED]
	char* path = malloc(sizeof(argv[1]));
	strcpy(path, argv[1]);
	strcat(path, "\\");

	//ACTUAL NAME OF THE FOLDER [FIXED]
	char* oldName = malloc(sizeof(argv[1]));
	strcpy(oldName, argv[1]);
	char* token = strtok(oldName,"/:\\");
	while (token != NULL) {
		strcpy(oldName, token); //CROP THE STRING TO THE FOLDER NAME & REMOVE THE "SEPARATORS"
		token = strtok(NULL,"/:\\");
	}

	char newName[21];
	char buffer;
	strcpy(path,argv[1]);

	printf("folder's path: %s\n",path);
    printf("old name: %s\n",oldName);
	printf("Enter the new name of your folder (max 20):");
	scanf_s("%s",newName);
	FILE* file = fopen(path, "r");
	while(!feof(file)) {

	}


	system("pause");
}