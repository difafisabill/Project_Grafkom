#pragma once

namespace Project10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;


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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"BAB 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(22, 67);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"BAB 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(22, 107);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"BAB 3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(22, 149);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 34);
			this->button5->TabIndex = 4;
			this->button5->Text = L"BAB 4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(147, 27);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(106, 34);
			this->button6->TabIndex = 5;
			this->button6->Text = L"BAB 6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(147, 67);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(106, 34);
			this->button7->TabIndex = 6;
			this->button7->Text = L"BAB 7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(147, 109);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(106, 34);
			this->button8->TabIndex = 7;
			this->button8->Text = L"BAB 8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(147, 149);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(106, 34);
			this->button9->TabIndex = 8;
			this->button9->Text = L"BAB 9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(22, 189);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 34);
			this->button4->TabIndex = 9;
			this->button4->Text = L"BAB 5";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Process::Start("explorer.exe","C:\\DIFA\\SEMESTER 5\\Grafkom\\TUGAS MINGGUAN\\PROJECT\\Project1\\Debug\\Project1.exe");

	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Process::Start("explorer.exe", "C:\\DIFA\\SEMESTER 5\\Grafkom\\TUGAS MINGGUAN\\PROJECT\\Project2_2\\Debug\\Project2_2.exe");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Process::Start("explorer.exe", "C:\\DIFA\\SEMESTER 5\\Grafkom\\TUGAS MINGGUAN\\PROJECT\\Project3_1\\Debug\\Project3_1.exe");
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 Process::Start("explorer.exe", "C:\\DIFA\\SEMESTER 5\\Grafkom\\TUGAS MINGGUAN\\PROJECT\\Project6\\Debug\\Project6.exe");
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 Process::Start("explorer.exe", "C:\\DIFA\\SEMESTER 5\\Grafkom\\TUGAS MINGGUAN\\PROJECT\\Project7\\Debug\\Project7.exe");
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 Process::Start("explorer.exe", "C:\\DIFA\\SEMESTER 5\\Grafkom\\TUGAS MINGGUAN\\PROJECT\\Project8\\Debug\\Project8.exe");
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Process::Start("explorer.exe", "C:\\DIFA\\SEMESTER 5\\Grafkom\\TUGAS MINGGUAN\\PROJECT\\Project9\\Debug\\Project9.exe");
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Process::Start("explorer.exe", "C:\\DIFA\\SEMESTER 5\\Grafkom\\TUGAS MINGGUAN\\PROJECT\\Project4\\Debug\\Project4.exe");

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Process::Start("explorer.exe", "C:\\DIFA\\SEMESTER 5\\Grafkom\\TUGAS MINGGUAN\\PROJECT\\Project5\\Debug\\Project5.exe");
}
};
}
