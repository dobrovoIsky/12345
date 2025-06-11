#include "User.h"
#include <fstream>
using namespace std;
//----------------------------------------------------------------------------
void WriteToFileClients(Clients A)
{
    ofstream f_out;
    f_out.open(nm_file_clients, ios_base::app | ios_base::binary);
    if (f_out.is_open())
    {
        f_out.write((char*)&A, sizeof(Clients));
    }
    f_out.close();
}
//----------------------------------------------------------------------------
int ReadFromFileClients(Clients arr[N_clients])
{
    ifstream f_in;
    f_in.open(nm_file_clients, ios_base::in | ios_base::binary);
    int i = 0;
    if (f_in.is_open())
    {
        Clients A;
        while (f_in.read((char*)&A, sizeof(Clients)))
        {
            arr[i] = A;
            i++;
        }
    }
    f_in.close();
    return i;
}
int GetLastIDClients()
{
    Clients arr[N_clients];
    int n = ReadFromFileClients(arr);
    if (n == 0) return 0;
    else return arr[n - 1].ID;
}
//----------------------------------------------------------------------------
void EditClient(int key, Clients new_A)
{
    Clients arr[N_clients];
    int n = ReadFromFileClients(arr);
    for (int i = 0; i < n; i++)
        if (arr[i].ID == key) arr[i] = new_A;
    ofstream f_out;
    f_out.open(nm_file_clients, ios_base::out | ios_base::binary);
    if (f_out.is_open())
    {
        for (int i = 0; i < n; i++)
            f_out.write((char*)&arr[i], sizeof(Clients));
    }
    f_out.close();
}
//--------------------------------------------------------------------------
void DeleteClient(int key)
{
    Clients arr[N_clients];
    int n = ReadFromFileClients(arr);
    ofstream f_out;
    f_out.open(nm_file_clients, ios_base::out | ios_base::binary);
    if (f_out.is_open())
    {
        for (int i = 0; i < n; i++)
            if (arr[i].ID != key)
                f_out.write((char*)&arr[i], sizeof(Clients));
    }
    f_out.close();
}

bool SearchClientsByID(int key_id, Clients& res)
{
    Clients arr[N_clients];
    int n = ReadFromFileClients(arr);
    for (int i = 0; i < n; i++)
        if (arr[i].ID == key_id)
        {
            res = arr[i];
            return true;
        }
    return false;
}
bool SearchClientsByLogin(char key_log[50], Clients& res)
{
    Clients arr[N_clients];
    int n = ReadFromFileClients(arr);
    for (int i = 0; i < n; i++)
        if (strcmp(arr[i].login, key_log) == 0)
        {
            res = arr[i];
            return true;
        }
    return false;
}

bool CheckClientsPassword(Clients A, char key_pass[20])
{
    if (strcmp(A.password, key_pass) == 0) return true;
    else return false;
}

int SearchClientsByStatus(char key_status[20], Clients res[])
{
    Clients arr[N_clients];
    int n = ReadFromFileClients(arr);
    int j = 0;
    for (int i = 0; i < n; i++)
        if (strcmp(arr[i].status, key_status) == 0)
        {
            res[j] = arr[i];
            j++;
        }
    return j;
}
