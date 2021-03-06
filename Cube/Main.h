#pragma once
#include "F2L.h"

namespace Cube {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}	
	private: System::Windows::Forms::PictureBox^  logo_f2l;
	protected:
	private: System::Windows::Forms::Label^  label1;	
	protected:
	private: System::Media::SoundPlayer  ^f;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->logo_f2l = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->f = (gcnew System::Media::SoundPlayer());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_f2l))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// logo_f2l
			// 
			this->logo_f2l->BackColor = System::Drawing::Color::White;
			this->logo_f2l->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo_f2l.Image")));
			this->logo_f2l->Location = System::Drawing::Point(30, 93);
			this->logo_f2l->Name = L"logo_f2l";
			this->logo_f2l->Size = System::Drawing::Size(176, 177);
			this->logo_f2l->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->logo_f2l->TabIndex = 0;
			this->logo_f2l->TabStop = false;
			this->logo_f2l->Click += gcnew System::EventHandler(this, &Main::logo_f2l_Click);
			this->logo_f2l->MouseLeave += gcnew System::EventHandler(this, &Main::logo_f2l_MouseLeave);
			this->logo_f2l->MouseHover += gcnew System::EventHandler(this, &Main::logo_f2l_MouseHover);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 57);
			this->label1->TabIndex = 1;
			this->label1->Text = L"F2L";
			// 
			// f
			// 
			this->f->LoadTimeout = 1;
			this->f->SoundLocation = L"Data\\Sounds\\hoverLogo.wav";
			this->f->Stream = nullptr;
			this->f->Tag = nullptr;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(692, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(31, 31);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Main::pictureBox1_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(735, 378);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->logo_f2l);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Main";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::OnLoad);
			this->LocationChanged += gcnew System::EventHandler(this, &Main::OnLocationChanged);
			this->Resize += gcnew System::EventHandler(this, &Main::OnResize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo_f2l))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		
	private: F2L ^f2l;
	private: System::Void logo_f2l_MouseHover(System::Object^  sender, System::EventArgs^  e);
	private: System::Void logo_f2l_MouseLeave(System::Object^  sender, System::EventArgs^  e);	
	private: System::Void logo_f2l_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(F2L::typeid));

	private: System::Void OnResize(System::Object ^sender, System::EventArgs ^e);		
	private: System::Void OnLoad(System::Object ^sender, System::EventArgs ^e);
	private: System::Void OnLocationChanged(System::Object ^sender, System::EventArgs ^e);
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}


