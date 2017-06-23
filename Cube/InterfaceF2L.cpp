#include "F2L.h"
using namespace Cube;

System::Void Cube::F2L::downsidePlank_pcBox_MouseHover(System::Object ^ sender, System::EventArgs ^ e) {
	this->downsidePlank_pcBox->Location = System::Drawing::Point(43, 51);
	this->downsidePlank_pcBox->Size = System::Drawing::Size(110, 110);

	f->Stream = safe_cast<System::IO::Stream^>(resources->GetObject(L"hoverLogo"));
	f->Play();
}

System::Void Cube::F2L::downsidePlank_pcBox_MouseLeave(System::Object ^ sender, System::EventArgs ^ e) {
	this->downsidePlank_pcBox->Location = System::Drawing::Point(53, 61);
	this->downsidePlank_pcBox->Size = System::Drawing::Size(100, 100);
}

