﻿//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "ToDoList.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
	String task = TaskInputField -> Text;
	TasksListBox -> Items -> Add(task);
	TaskInputField -> Text = "" ;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index = Item -> Index;
	TasksListBox -> Items -> Delete(index);
}
//---------------------------------------------------------------------------
