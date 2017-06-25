#include "Main.h"
#include "F2L.h"
using namespace Cube;

int X;
int Y;

int WIDTH;
int HEIGHT;

	// Interface for Main

System::Void Cube::Main::logo_f2l_MouseHover(System::Object ^ sender, System::EventArgs ^ e)
{
	this->logo_f2l->Location = System::Drawing::Point(20, 83);
	this->logo_f2l->Size = System::Drawing::Size(186, 187);

//	f->Stream = safe_cast<System::IO::Stream^>(resources->GetObject(L"hoverLogo"));
	//f->Play();
}
//
//System::Void Cube::Main::logo_f2l_MouseLeave(System::Object ^ sender, System::EventArgs ^ e)
//{
//	this->logo_f2l->Location = System::Drawing::Point(30, 93);
//	this->logo_f2l->Size = System::Drawing::Size(176, 177);
//}
//
//System::Void Cube::Main::logo_f2l_Click(System::Object ^ sender, System::EventArgs ^ e) {	
//	f2l = gcnew F2L();
//	this->f2l->SetDesktopLocation(this->Location.X, this->Location.Y);
//	f2l->Show(this);			
//}
//
//System::Void Cube::Main::OnResize(System::Object ^ sender, System::EventArgs ^ e) {
//	WIDTH = this->Width;
//	HEIGHT = this->Height;
//}
//
//System::Void Cube::Main::OnLoad(System::Object ^ sender, System::EventArgs ^ e) {
//	WIDTH = this->Width;
//	HEIGHT = this->Height;
//	
//	X = this->Location.X;
//	Y = this->Location.Y;
//}
//
//System::Void Cube::Main::OnLocationChanged(System::Object ^ sender, System::EventArgs ^ e) {	
//	if(f2l != nullptr)
//		this->f2l->SetDesktopLocation(this->Location.X, this->Location.Y);
//}

	// Interface for F2L

System::Void Cube::F2L::downsidePlank_pcBox_MouseHover(System::Object ^ sender, System::EventArgs ^ e) {
	this->downsidePlank_pcBox->Location = System::Drawing::Point(43, 51);
	this->downsidePlank_pcBox->Size = System::Drawing::Size(110, 110);

	f->Stream = safe_cast<System::IO::Stream^>(resources->GetObject(L"hoverLogo"));
	f->Play();
}

System::Void Cube::F2L::downsidePlank_pcBox_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (downsidePlank == nullptr) {
		downsidePlank = gcnew DownsidePlank();
		downsidePlank->Show(this);
	}
}

System::Void Cube::F2L::OnLoad(System::Object ^ sender, System::EventArgs ^ e) {
	this->SetDesktopLocation(X, Y);
	

	this->Width = WIDTH;
	this->Height = HEIGHT;
}

System::Void Cube::F2L::OnActivated(System::Object ^ sender, System::EventArgs ^ e) {
	

	this->Width = WIDTH;
	this->Height = HEIGHT;
}

System::Void Cube::F2L::downsidePlank_pcBox_MouseLeave(System::Object ^ sender, System::EventArgs ^ e) {
	this->downsidePlank_pcBox->Location = System::Drawing::Point(53, 61);
	this->downsidePlank_pcBox->Size = System::Drawing::Size(100, 100);
}

