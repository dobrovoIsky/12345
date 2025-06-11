#include "Registration.h"
#include "User.h"
#include "UserPanel.h"
#include <msclr\marshal.h>
using namespace msclr::interop;

System::Void Kursova2::Registration::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    marshal_context^ ctx = gcnew marshal_context();
    Clients A;

    strcpy(A.login, ctx->marshal_as<const char*>(textBox7->Text));
    strcpy(A.PIB, ctx->marshal_as<const char*>(textBox1->Text));
    strcpy(A.Delivery, ctx->marshal_as<const char*>(textBox4->Text));
    strcpy(A.phone, ctx->marshal_as<const char*>(textBox6->Text));
    strcpy(A.email, ctx->marshal_as<const char*>(textBox2->Text));
    strcpy(A.password, ctx->marshal_as<const char*>(textBox3->Text));
    if (SearchClientsByLogin(A.login, A))
    {
        MessageBox::Show("Такий логін вже існує.");
        textBox7->Focus();
    }
    else
    {
        A.ID = GetLastIDClients() + 1;
        strcpy(A.status, "user");
        WriteToFileClients(A);
        MessageBox::Show("Ви успішно зареєструвалися!");
        UserPanel^ users = gcnew UserPanel();
        this->Hide();
        users->Show();
        String^ tmp;
        tmp = gcnew String(A.PIB);
        users->label2->Text = tmp;
        this->Hide();
    }
}
