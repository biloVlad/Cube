#pragma once
namespace Cube {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для DownsidePlank
	/// </summary>
	public ref class DownsidePlank : public System::Windows::Forms::Form
	{
	public:
		DownsidePlank(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~DownsidePlank()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  downsidePlank_pnl_2;
	private: System::Windows::Forms::Button^  changePage_btn;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox8;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DownsidePlank::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->downsidePlank_pnl_2 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->changePage_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->downsidePlank_pnl_2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(158, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(309, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Downside plank 1 (FR) ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(34, 78);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(140, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 51);
			this->label2->TabIndex = 2;
			this->label2->Text = L"1. (~0.69)\r\nR U\' R\' U R U2 R\' U R U R\'\r\nU + 4\r\n";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(387, 78);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(493, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 51);
			this->label3->TabIndex = 4;
			this->label3->Text = L"2. (~0.85)\r\nR\' U\' R U\' R\' U2 R2 U\' R\'\r\nU\' + 3\r\n";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(34, 241);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 100);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(140, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 68);
			this->label4->TabIndex = 6;
			this->label4->Text = L"3. (~0.85)\r\nR U R\' U\' R U\' R\' U2 R U\' R\'\r\nR U2\' R\' U\' R U\' R\' U R U\' R\'\r\nR2 U2 R\'"
				L" U\' R U\' R2\r\n";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(387, 241);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 100);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(493, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 34);
			this->label5->TabIndex = 8;
			this->label5->Text = L"4. (~0.65)\r\nR U\' R\' U\' R U\' R\' U R U\' R\'\r\n";
			// 
			// downsidePlank_pnl_2
			// 
			this->downsidePlank_pnl_2->Controls->Add(this->label10);
			this->downsidePlank_pnl_2->Controls->Add(this->pictureBox8);
			this->downsidePlank_pnl_2->Controls->Add(this->label9);
			this->downsidePlank_pnl_2->Controls->Add(this->pictureBox7);
			this->downsidePlank_pnl_2->Controls->Add(this->label8);
			this->downsidePlank_pnl_2->Controls->Add(this->pictureBox6);
			this->downsidePlank_pnl_2->Controls->Add(this->label7);
			this->downsidePlank_pnl_2->Controls->Add(this->pictureBox5);
			this->downsidePlank_pnl_2->Controls->Add(this->label6);
			this->downsidePlank_pnl_2->Location = System::Drawing::Point(0, 0);
			this->downsidePlank_pnl_2->Name = L"downsidePlank_pnl_2";
			this->downsidePlank_pnl_2->Size = System::Drawing::Size(695, 341);
			this->downsidePlank_pnl_2->TabIndex = 9;
			this->downsidePlank_pnl_2->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(487, 241);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(208, 85);
			this->label10->TabIndex = 8;
			this->label10->Text = L"8. (~0.95)\r\nM\' U R U\' Rw\' R U2 R\' U R U\' R\'\r\nF R\' F\' R2 U2 R\' U R U R\'\r\nF\' L\' U L"
				L" F R U R\'\r\nU2 + 6\r\n";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(387, 241);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(100, 100);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(140, 241);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(191, 51);
			this->label9->TabIndex = 6;
			this->label9->Text = L"7. (~0.85)\r\nRw U\' Rw\' U Rw U Rw\' F\' U\' F\r\nU + 6\r\n";
			this->label9->Click += gcnew System::EventHandler(this, &DownsidePlank::label9_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(34, 241);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 100);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 5;
			this->pictureBox7->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(489, 78);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 34);
			this->label8->TabIndex = 4;
			this->label8->Text = L"6. (~0.75)\r\nR U R2 F R F\' R U\' R\'\r\n";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(387, 78);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(100, 100);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 3;
			this->pictureBox6->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(136, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(191, 34);
			this->label7->TabIndex = 2;
			this->label7->Text = L"5. (~0.80)\r\nR U\' R\' U Rw U\' R\' U R U Rw\'\r\n";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(34, 78);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 100);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F));
			this->label6->Location = System::Drawing::Point(158, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(309, 42);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Downside plank 2 (FR) ";
			// 
			// changePage_btn
			// 
			this->changePage_btn->Location = System::Drawing::Point(587, 347);
			this->changePage_btn->Name = L"changePage_btn";
			this->changePage_btn->Size = System::Drawing::Size(91, 23);
			this->changePage_btn->TabIndex = 10;
			this->changePage_btn->Text = L"Далее ->";
			this->changePage_btn->UseVisualStyleBackColor = true;
			this->changePage_btn->Click += gcnew System::EventHandler(this, &DownsidePlank::changePage_btn_Click);
			// 
			// DownsidePlank
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(695, 378);
			this->Controls->Add(this->downsidePlank_pnl_2);
			this->Controls->Add(this->changePage_btn);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"DownsidePlank";
			this->Text = L"DownsidePlank";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->downsidePlank_pnl_2->ResumeLayout(false);
			this->downsidePlank_pnl_2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void changePage_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->downsidePlank_pnl_2->Visible) {
			this->downsidePlank_pnl_2->Visible = false;
			this->changePage_btn->Text = L"Далее ->";
		}
		else {
			this->downsidePlank_pnl_2->Visible = true;
			this->changePage_btn->Text = L"<- Назад";
		}
	}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
