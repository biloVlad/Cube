#pragma once
#include "DownsidePlank.h"
namespace Cube {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ F2L
	/// </summary>
	public ref class F2L : public System::Windows::Forms::Form
	{
	public:
		F2L(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~F2L()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  downsidePlank_pcBox;
	protected:
	private: System::Windows::Forms::Label^  downsidePlank_lbl;
	private: System::Media::SoundPlayer  ^f;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(F2L::typeid));
			this->downsidePlank_pcBox = (gcnew System::Windows::Forms::PictureBox());
			this->f = (gcnew System::Media::SoundPlayer());
			this->downsidePlank_lbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->downsidePlank_pcBox))->BeginInit();
			this->SuspendLayout();
			// 
			// downsidePlank_pcBox
			// 
			this->downsidePlank_pcBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downsidePlank_pcBox.Image")));
			this->downsidePlank_pcBox->Location = System::Drawing::Point(53, 51);
			this->downsidePlank_pcBox->Name = L"downsidePlank_pcBox";
			this->downsidePlank_pcBox->Size = System::Drawing::Size(100, 100);
			this->downsidePlank_pcBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->downsidePlank_pcBox->TabIndex = 0;
			this->downsidePlank_pcBox->TabStop = false;
			this->downsidePlank_pcBox->Click += gcnew System::EventHandler(this, &F2L::downsidePlank_pcBox_Click);
			this->downsidePlank_pcBox->MouseLeave += gcnew System::EventHandler(this, &F2L::downsidePlank_pcBox_MouseLeave);
			this->downsidePlank_pcBox->MouseHover += gcnew System::EventHandler(this, &F2L::downsidePlank_pcBox_MouseHover);
			// 
			// f
			// 
			this->f->LoadTimeout = 10000;
			this->f->SoundLocation = L"";
			this->f->Stream = nullptr;
			this->f->Tag = nullptr;
			// 
			// downsidePlank_lbl
			// 
			this->downsidePlank_lbl->AutoSize = true;
			this->downsidePlank_lbl->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->downsidePlank_lbl->Location = System::Drawing::Point(31, 18);
			this->downsidePlank_lbl->Name = L"downsidePlank_lbl";
			this->downsidePlank_lbl->Size = System::Drawing::Size(150, 30);
			this->downsidePlank_lbl->TabIndex = 1;
			this->downsidePlank_lbl->Text = L"Downside Plank";
			// 
			// F2L
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 392);
			this->Controls->Add(this->downsidePlank_lbl);
			this->Controls->Add(this->downsidePlank_pcBox);
			this->Name = L"F2L";
			this->Text = L"F2L";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->downsidePlank_pcBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void downsidePlank_pcBox_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void downsidePlank_pcBox_MouseHover(System::Object^  sender, System::EventArgs^  e);
			 
	private: System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(F2L::typeid));
			 
	private: DownsidePlank ^downsidePlank;
	private: System::Void downsidePlank_pcBox_Click(System::Object^  sender, System::EventArgs^  e) {
		if (downsidePlank == nullptr) {
			downsidePlank = gcnew DownsidePlank();
			downsidePlank->Show();
		}
	}
	};
}
