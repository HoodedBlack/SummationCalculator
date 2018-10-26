#pragma once
#include <iostream>
#include <stdio.h>
#include <msclr\marshal_cppstd.h>
#include <msclr/marshal.h>



namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(253, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 20);
			this->textBox1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->ImageLocation = L"D:\\Pictures\\Roblox\\Greek_uc_sigma.svg.png";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(253, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(117, 114);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label1->Location = System::Drawing::Point(250, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"n = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(376, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 46);
			this->label2->TabIndex = 5;
			this->label2->Text = L"n";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(281, 156);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(89, 20);
			this->textBox3->TabIndex = 6;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 268);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(599, 293);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(242, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 59);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Run Summonation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(643, 573);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
		int naive_char_2_int(const char *p) {
			int x = 0;
			bool neg = false;
			if (*p == '-') {
				neg = true;
				++p;
			}
			while (*p >= '0' && *p <= '9') {
				x = (x * 10) + (*p - '0');
				++p;
			}
			if (neg) {
				x = -x;
			}
			return x;
		}
		/* TODO: Add my own .NET System::String to std::String function
		static std::string toss(System::String ^ s)
		{
			
			const char* cstr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			std::string sstr = cstr;
			Marshal::FreeHGlobal(System::IntPtr((void*)cstr));
			return sstr;
		}
		*/
		std::string managedStrToNative(System::String^ sysstr)
		{
			using System::IntPtr;
			using System::Runtime::InteropServices::Marshal;

			IntPtr ip = Marshal::StringToHGlobalAnsi(sysstr);
			std::string outString = static_cast<const char*>(ip.ToPointer());
			Marshal::FreeHGlobal(ip);
			return outString;
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		richTextBox1->Text = "";
		int startIndex = Convert::ToInt32(textBox3->Text);
		int endIndex = Convert::ToInt32(textBox1->Text);
		std::cout << startIndex << std::endl;
		bool started = false;
		bool finished = false;
		int lastnum = 0;
		int sum = 0;
		String^ a;

		for (int i = startIndex; i <= endIndex; i++) {

			sum += i;
			if (lastnum != i && started == true && finished == false) {
				lastnum = i;
				a+="+"+i;
				
			}

			if (started == false) {
				started = true;
				a+=i;
			}

			if (i == endIndex && finished == false) {
				a+="=";
				a+=sum;
				msclr::interop::marshal_context oMarshalContext;

				const char* pParameter = oMarshalContext.marshal_as<const char*>(a);
				
				richTextBox1->Text = a;
				finished = true;
			}

		}
	}
};
}
