#include "Main.h"
using namespace Cube;

// Interface for Main

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

System::Void Cube::Main::logo_f2l_Click(System::Object ^ sender, System::EventArgs ^ e) {
	f2l = gcnew F2L();
	/*this->f2l->SetDesktopLocation(this->Location.X, this->Location.Y);*/
	f2l->Show(this);
}

System::Void Cube::Main::OnResize(System::Object ^ sender, System::EventArgs ^ e) {
	/*WIDTH = this->Width;
	HEIGHT = this->Height;*/
}

System::Void Cube::Main::OnLoad(System::Object ^ sender, System::EventArgs ^ e) {
	/*WIDTH = this->Width;
	HEIGHT = this->Height;

	X = this->Location.X;
	Y = this->Location.Y;*/
}

System::Void Cube::Main::OnLocationChanged(System::Object ^ sender, System::EventArgs ^ e) {
	/*if(f2l != nullptr)
	this->f2l->SetDesktopLocation(this->Location.X, this->Location.Y);*/
}


