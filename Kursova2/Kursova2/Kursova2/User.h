#pragma once

const int N_clients = 50;
const char nm_file_clients[] = "Clients.dat";
struct Clients
{
	int ID;
	char login[50];
	char password[20];
	char PIB[50];
	char email[50];
	char phone[20];
	char Delivery[50];
	char status[20];
};

void WriteToFileClients(Clients A);
int ReadFromFileClients(Clients arr[N_clients]);
int GetLastIDClients();
void EditClient(int key, Clients new_A);
void DeleteClient(int key);
bool SearchClientsByID(int key_id, Clients&res);
bool SearchClientsByLogin(char key_log[50], Clients& res);
bool CheckClientsPassword(Clients A, char key_pass[20]);
int SearchClientsByStatus(char key_status[20], Clients res[]);

