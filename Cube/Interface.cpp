#include "Main.h"
using namespace Cube;

System::Void Cube::Main::logo_f2l_MouseHover(System::Object ^ sender, System::EventArgs ^ e) {
	this->logo_f2l->Location = System::Drawing::Point(2, 68);
	this->logo_f2l->Size = System::Drawing::Size(365, 289);
	
	System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
	System::Media::SoundPlayer  ^f = gcnew System::Media::SoundPlayer();
	f->Stream = safe_cast<System::IO::Stream^>(resources->GetObject(L"hoverLogo.Sound"));
	f->Play();
}

System::Void Cube::Main::logo_f2l_MouseLeave(System::Object ^ sender, System::EventArgs ^ e) {
	this->logo_f2l->Location = System::Drawing::Point(12, 78);
	this->logo_f2l->Size = System::Drawing::Size(315, 239);
}
