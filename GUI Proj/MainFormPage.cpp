#include <vcl.h>
#pragma hdrstop
#include "MainFormPage.h"
#include "CreateWalletPage.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
#include"LoginPage.h"




TMainForm *MainForm;

// Constructor
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}


// Create Wallet Button Click
void __fastcall TMainForm::btnCreateWalletClick(TObject *Sender)
{
  TCreateWalletForm *createWalletForm = new TCreateWalletForm(this);
    createWalletForm->ShowModal();  // Use ShowModal to display it as a dialog
}

// Login Button Click
void __fastcall TMainForm::btnLoginClick(TObject *Sender)
{
	TLoginForm *loginForm = new TLoginForm(this);
	loginForm->ShowModal();
}

// Exit Button Click
void __fastcall TMainForm::btnExitClick(TObject *Sender)
{
    Application->Terminate(); // Close the application
}


//---------------------------------------------------------------------------

