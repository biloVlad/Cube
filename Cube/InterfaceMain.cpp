#include "Main.h"
using namespace Cube;

System::Void Cube::Main::logo_f2l_MouseHover(System::Object ^ sender, System::EventArgs ^ e)
{
	this->logo_f2l->Location = System::Drawing::Point(20, 83);
	this->logo_f2l->Size = System::Drawing::Size(186, 187);

	f->Stream = safe_cast<System::IO::Stream^>(resources->GetObject(L"hoverLogo"));
	f->Play();
}

System::Void Cube::Main::logo_f2l_MouseLeave(System::Object ^ sender, System::EventArgs ^ e)
{
	this->logo_f2l->Location = System::Drawing::Point(30, 93);	
	this->logo_f2l->Size = System::Drawing::Size(176, 177);
}

System::Void Cube::Main::logo_f2l_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	F2L ^f2l = gcnew F2L();
	f2l->Visible = true;
	return System::Void();
}

