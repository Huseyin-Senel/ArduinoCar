namespace GTTarabaKontrol
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
			System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
			this.btnBring = new System.Windows.Forms.Button();
			this.cmbSerialPort = new System.Windows.Forms.ComboBox();
			this.label1 = new System.Windows.Forms.Label();
			this.cmbBaudRate = new System.Windows.Forms.ComboBox();
			this.label2 = new System.Windows.Forms.Label();
			this.cmbStopBits = new System.Windows.Forms.ComboBox();
			this.cmbParity = new System.Windows.Forms.ComboBox();
			this.cmbDataBits = new System.Windows.Forms.ComboBox();
			this.btnConnect = new System.Windows.Forms.Button();
			this.txtSend = new System.Windows.Forms.TextBox();
			this.txtReceived = new System.Windows.Forms.TextBox();
			this.btnClear = new System.Windows.Forms.Button();
			this.btnSendData = new System.Windows.Forms.Button();
			this.label4 = new System.Windows.Forms.Label();
			this.label5 = new System.Windows.Forms.Label();
			this.label6 = new System.Windows.Forms.Label();
			this.button10 = new System.Windows.Forms.Button();
			this.button9 = new System.Windows.Forms.Button();
			this.button8 = new System.Windows.Forms.Button();
			this.button7 = new System.Windows.Forms.Button();
			this.label3 = new System.Windows.Forms.Label();
			this.label7 = new System.Windows.Forms.Label();
			this.label8 = new System.Windows.Forms.Label();
			this.label12 = new System.Windows.Forms.Label();
			this.label13 = new System.Windows.Forms.Label();
			this.label14 = new System.Windows.Forms.Label();
			this.label15 = new System.Windows.Forms.Label();
			this.label16 = new System.Windows.Forms.Label();
			this.label17 = new System.Windows.Forms.Label();
			this.pictureBox2 = new System.Windows.Forms.PictureBox();
			this.pictureBox1 = new System.Windows.Forms.PictureBox();
			this.button6 = new System.Windows.Forms.Button();
			this.button5 = new System.Windows.Forms.Button();
			this.button4 = new System.Windows.Forms.Button();
			this.button3 = new System.Windows.Forms.Button();
			this.button2 = new System.Windows.Forms.Button();
			this.pictureBox3 = new System.Windows.Forms.PictureBox();
			this.pictureBox4 = new System.Windows.Forms.PictureBox();
			this.button1 = new System.Windows.Forms.Button();
			((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).BeginInit();
			this.SuspendLayout();
			// 
			// btnBring
			// 
			this.btnBring.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.btnBring.Location = new System.Drawing.Point(30, 293);
			this.btnBring.Name = "btnBring";
			this.btnBring.Size = new System.Drawing.Size(284, 46);
			this.btnBring.TabIndex = 0;
			this.btnBring.Text = "Gerekenleri Getir";
			this.btnBring.UseVisualStyleBackColor = true;
			this.btnBring.Click += new System.EventHandler(this.btnBringPort_Click);
			// 
			// cmbSerialPort
			// 
			this.cmbSerialPort.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.cmbSerialPort.FormattingEnabled = true;
			this.cmbSerialPort.Location = new System.Drawing.Point(170, 354);
			this.cmbSerialPort.Name = "cmbSerialPort";
			this.cmbSerialPort.Size = new System.Drawing.Size(144, 34);
			this.cmbSerialPort.TabIndex = 1;
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.label1.Location = new System.Drawing.Point(34, 577);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(120, 26);
			this.label1.TabIndex = 2;
			this.label1.Text = "Serial Port:";
			// 
			// cmbBaudRate
			// 
			this.cmbBaudRate.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.cmbBaudRate.FormattingEnabled = true;
			this.cmbBaudRate.Location = new System.Drawing.Point(170, 406);
			this.cmbBaudRate.Name = "cmbBaudRate";
			this.cmbBaudRate.Size = new System.Drawing.Size(144, 34);
			this.cmbBaudRate.TabIndex = 3;
			// 
			// label2
			// 
			this.label2.AutoSize = true;
			this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.label2.Location = new System.Drawing.Point(34, 357);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(121, 26);
			this.label2.TabIndex = 4;
			this.label2.Text = "Baud Rate:";
			// 
			// cmbStopBits
			// 
			this.cmbStopBits.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.cmbStopBits.FormattingEnabled = true;
			this.cmbStopBits.Location = new System.Drawing.Point(170, 460);
			this.cmbStopBits.Name = "cmbStopBits";
			this.cmbStopBits.Size = new System.Drawing.Size(144, 34);
			this.cmbStopBits.TabIndex = 5;
			// 
			// cmbParity
			// 
			this.cmbParity.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.cmbParity.FormattingEnabled = true;
			this.cmbParity.Location = new System.Drawing.Point(170, 574);
			this.cmbParity.Name = "cmbParity";
			this.cmbParity.Size = new System.Drawing.Size(144, 34);
			this.cmbParity.TabIndex = 6;
			// 
			// cmbDataBits
			// 
			this.cmbDataBits.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.cmbDataBits.FormattingEnabled = true;
			this.cmbDataBits.Location = new System.Drawing.Point(170, 516);
			this.cmbDataBits.Name = "cmbDataBits";
			this.cmbDataBits.Size = new System.Drawing.Size(144, 34);
			this.cmbDataBits.TabIndex = 7;
			// 
			// btnConnect
			// 
			this.btnConnect.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.btnConnect.Location = new System.Drawing.Point(331, 293);
			this.btnConnect.Name = "btnConnect";
			this.btnConnect.Size = new System.Drawing.Size(206, 46);
			this.btnConnect.TabIndex = 8;
			this.btnConnect.Text = "Bağlan";
			this.btnConnect.UseVisualStyleBackColor = true;
			this.btnConnect.Click += new System.EventHandler(this.btnConnect_Click);
			// 
			// txtSend
			// 
			this.txtSend.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.txtSend.Location = new System.Drawing.Point(331, 354);
			this.txtSend.Multiline = true;
			this.txtSend.Name = "txtSend";
			this.txtSend.Size = new System.Drawing.Size(206, 256);
			this.txtSend.TabIndex = 9;
			// 
			// txtReceived
			// 
			this.txtReceived.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.txtReceived.Location = new System.Drawing.Point(331, 514);
			this.txtReceived.Multiline = true;
			this.txtReceived.Name = "txtReceived";
			this.txtReceived.ReadOnly = true;
			this.txtReceived.Size = new System.Drawing.Size(206, 96);
			this.txtReceived.TabIndex = 10;
			this.txtReceived.Visible = false;
			this.txtReceived.TextChanged += new System.EventHandler(this.txtReceived_TextChanged);
			// 
			// btnClear
			// 
			this.btnClear.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.btnClear.Location = new System.Drawing.Point(554, 514);
			this.btnClear.Name = "btnClear";
			this.btnClear.Size = new System.Drawing.Size(102, 96);
			this.btnClear.TabIndex = 11;
			this.btnClear.Text = "Temizle";
			this.btnClear.UseVisualStyleBackColor = true;
			this.btnClear.Click += new System.EventHandler(this.btnClear_Click);
			// 
			// btnSendData
			// 
			this.btnSendData.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.btnSendData.Location = new System.Drawing.Point(554, 354);
			this.btnSendData.Name = "btnSendData";
			this.btnSendData.Size = new System.Drawing.Size(102, 154);
			this.btnSendData.TabIndex = 12;
			this.btnSendData.Text = "Veri Gönder";
			this.btnSendData.UseVisualStyleBackColor = true;
			this.btnSendData.Click += new System.EventHandler(this.btnSendData_Click);
			// 
			// label4
			// 
			this.label4.AutoSize = true;
			this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.label4.Location = new System.Drawing.Point(34, 409);
			this.label4.Name = "label4";
			this.label4.Size = new System.Drawing.Size(106, 26);
			this.label4.TabIndex = 14;
			this.label4.Text = "Stop Bits:";
			// 
			// label5
			// 
			this.label5.AutoSize = true;
			this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.label5.Location = new System.Drawing.Point(34, 463);
			this.label5.Name = "label5";
			this.label5.Size = new System.Drawing.Size(74, 26);
			this.label5.TabIndex = 15;
			this.label5.Text = "Parity:";
			// 
			// label6
			// 
			this.label6.AutoSize = true;
			this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.label6.Location = new System.Drawing.Point(34, 519);
			this.label6.Name = "label6";
			this.label6.Size = new System.Drawing.Size(107, 26);
			this.label6.TabIndex = 16;
			this.label6.Text = "Data Bits:";
			// 
			// button10
			// 
			this.button10.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.button10.Location = new System.Drawing.Point(691, 552);
			this.button10.Name = "button10";
			this.button10.Size = new System.Drawing.Size(130, 58);
			this.button10.TabIndex = 41;
			this.button10.Text = "Klavye";
			this.button10.UseVisualStyleBackColor = true;
			this.button10.KeyDown += new System.Windows.Forms.KeyEventHandler(this.button10_KeyDown);
			this.button10.KeyUp += new System.Windows.Forms.KeyEventHandler(this.button10_KeyUp);
			// 
			// button9
			// 
			this.button9.BackColor = System.Drawing.Color.Cyan;
			this.button9.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.button9.Location = new System.Drawing.Point(953, 551);
			this.button9.Name = "button9";
			this.button9.Size = new System.Drawing.Size(130, 130);
			this.button9.TabIndex = 40;
			this.button9.Text = " FAR AÇ";
			this.button9.UseVisualStyleBackColor = false;
			this.button9.Click += new System.EventHandler(this.button9_Click);
			// 
			// button8
			// 
			this.button8.BackColor = System.Drawing.Color.Orange;
			this.button8.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.button8.Location = new System.Drawing.Point(953, 295);
			this.button8.Name = "button8";
			this.button8.Size = new System.Drawing.Size(130, 130);
			this.button8.TabIndex = 39;
			this.button8.Text = "SAĞ SİNYAL AÇ";
			this.button8.UseVisualStyleBackColor = false;
			this.button8.Click += new System.EventHandler(this.button8_Click);
			// 
			// button7
			// 
			this.button7.BackColor = System.Drawing.Color.Orange;
			this.button7.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.button7.Location = new System.Drawing.Point(691, 295);
			this.button7.Name = "button7";
			this.button7.Size = new System.Drawing.Size(130, 130);
			this.button7.TabIndex = 38;
			this.button7.Text = "SOL SİNYAL AÇ";
			this.button7.UseVisualStyleBackColor = false;
			this.button7.Click += new System.EventHandler(this.button7_Click);
			// 
			// label3
			// 
			this.label3.BackColor = System.Drawing.Color.White;
			this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 120F);
			this.label3.Location = new System.Drawing.Point(39, 45);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(366, 178);
			this.label3.TabIndex = 42;
			this.label3.Text = "0";
			// 
			// label7
			// 
			this.label7.AutoSize = true;
			this.label7.BackColor = System.Drawing.Color.White;
			this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 30F);
			this.label7.Location = new System.Drawing.Point(331, 155);
			this.label7.Name = "label7";
			this.label7.Size = new System.Drawing.Size(74, 46);
			this.label7.TabIndex = 43;
			this.label7.Text = "cm";
			// 
			// label8
			// 
			this.label8.AutoSize = true;
			this.label8.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F);
			this.label8.Location = new System.Drawing.Point(211, 9);
			this.label8.Name = "label8";
			this.label8.Size = new System.Drawing.Size(103, 31);
			this.label8.TabIndex = 44;
			this.label8.Text = "Mesafe";
			// 
			// label12
			// 
			this.label12.AutoSize = true;
			this.label12.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F);
			this.label12.Location = new System.Drawing.Point(531, 9);
			this.label12.Name = "label12";
			this.label12.Size = new System.Drawing.Size(324, 31);
			this.label12.TabIndex = 50;
			this.label12.Text = " Mıknatıslara Verilen Akım";
			// 
			// label13
			// 
			this.label13.AutoSize = true;
			this.label13.BackColor = System.Drawing.Color.White;
			this.label13.Font = new System.Drawing.Font("Microsoft Sans Serif", 30F);
			this.label13.Location = new System.Drawing.Point(808, 155);
			this.label13.Name = "label13";
			this.label13.Size = new System.Drawing.Size(47, 46);
			this.label13.TabIndex = 49;
			this.label13.Text = "A";
			// 
			// label14
			// 
			this.label14.BackColor = System.Drawing.Color.White;
			this.label14.Font = new System.Drawing.Font("Microsoft Sans Serif", 120F);
			this.label14.Location = new System.Drawing.Point(539, 46);
			this.label14.Name = "label14";
			this.label14.Size = new System.Drawing.Size(348, 178);
			this.label14.TabIndex = 48;
			this.label14.Text = "0";
			// 
			// label15
			// 
			this.label15.AutoSize = true;
			this.label15.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F);
			this.label15.Location = new System.Drawing.Point(960, 15);
			this.label15.Name = "label15";
			this.label15.Size = new System.Drawing.Size(326, 25);
			this.label15.TabIndex = 53;
			this.label15.Text = "Arabaya Uygulanan Toplam Kuvveti";
			// 
			// label16
			// 
			this.label16.AutoSize = true;
			this.label16.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
			this.label16.Font = new System.Drawing.Font("Microsoft Sans Serif", 30F);
			this.label16.Location = new System.Drawing.Point(1224, 136);
			this.label16.Name = "label16";
			this.label16.Size = new System.Drawing.Size(49, 46);
			this.label16.TabIndex = 52;
			this.label16.Text = "N";
			// 
			// label17
			// 
			this.label17.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
			this.label17.Font = new System.Drawing.Font("Microsoft Sans Serif", 80F);
			this.label17.Location = new System.Drawing.Point(982, 46);
			this.label17.Name = "label17";
			this.label17.Size = new System.Drawing.Size(291, 178);
			this.label17.TabIndex = 51;
			this.label17.Text = "0";
			this.label17.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
			// 
			// pictureBox2
			// 
			this.pictureBox2.Image = global::GTT_araba_Kontrol.Properties.Resources.untitled;
			this.pictureBox2.Location = new System.Drawing.Point(1096, 269);
			this.pictureBox2.Name = "pictureBox2";
			this.pictureBox2.Size = new System.Drawing.Size(275, 267);
			this.pictureBox2.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
			this.pictureBox2.TabIndex = 55;
			this.pictureBox2.TabStop = false;
			// 
			// pictureBox1
			// 
			this.pictureBox1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
			this.pictureBox1.Image = global::GTT_araba_Kontrol.Properties.Resources.images;
			this.pictureBox1.InitialImage = null;
			this.pictureBox1.Location = new System.Drawing.Point(1096, 490);
			this.pictureBox1.Margin = new System.Windows.Forms.Padding(0);
			this.pictureBox1.Name = "pictureBox1";
			this.pictureBox1.Size = new System.Drawing.Size(275, 233);
			this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
			this.pictureBox1.TabIndex = 54;
			this.pictureBox1.TabStop = false;
			// 
			// button6
			// 
			this.button6.Image = ((System.Drawing.Image)(resources.GetObject("button6.Image")));
			this.button6.Location = new System.Drawing.Point(839, 440);
			this.button6.Name = "button6";
			this.button6.Padding = new System.Windows.Forms.Padding(0, 0, 0, 3);
			this.button6.Size = new System.Drawing.Size(96, 96);
			this.button6.TabIndex = 37;
			this.button6.UseVisualStyleBackColor = true;
			this.button6.Click += new System.EventHandler(this.button6_Click);
			// 
			// button5
			// 
			this.button5.BackColor = System.Drawing.Color.Transparent;
			this.button5.Image = ((System.Drawing.Image)(resources.GetObject("button5.Image")));
			this.button5.Location = new System.Drawing.Point(953, 440);
			this.button5.Name = "button5";
			this.button5.Padding = new System.Windows.Forms.Padding(0, 0, 0, 3);
			this.button5.Size = new System.Drawing.Size(130, 96);
			this.button5.TabIndex = 36;
			this.button5.UseVisualStyleBackColor = false;
			this.button5.MouseDown += new System.Windows.Forms.MouseEventHandler(this.button5_MouseDown);
			this.button5.MouseUp += new System.Windows.Forms.MouseEventHandler(this.button5_MouseUp);
			// 
			// button4
			// 
			this.button4.BackColor = System.Drawing.Color.Transparent;
			this.button4.Image = ((System.Drawing.Image)(resources.GetObject("button4.Image")));
			this.button4.Location = new System.Drawing.Point(691, 440);
			this.button4.Name = "button4";
			this.button4.Padding = new System.Windows.Forms.Padding(0, 0, 0, 3);
			this.button4.Size = new System.Drawing.Size(130, 96);
			this.button4.TabIndex = 35;
			this.button4.UseVisualStyleBackColor = false;
			this.button4.MouseDown += new System.Windows.Forms.MouseEventHandler(this.button4_MouseDown);
			this.button4.MouseUp += new System.Windows.Forms.MouseEventHandler(this.button4_MouseUp);
			// 
			// button3
			// 
			this.button3.BackColor = System.Drawing.Color.Transparent;
			this.button3.Image = ((System.Drawing.Image)(resources.GetObject("button3.Image")));
			this.button3.Location = new System.Drawing.Point(839, 551);
			this.button3.Name = "button3";
			this.button3.Size = new System.Drawing.Size(96, 130);
			this.button3.TabIndex = 34;
			this.button3.UseVisualStyleBackColor = false;
			this.button3.MouseDown += new System.Windows.Forms.MouseEventHandler(this.button3_MouseDown);
			this.button3.MouseUp += new System.Windows.Forms.MouseEventHandler(this.button3_MouseUp);
			// 
			// button2
			// 
			this.button2.BackColor = System.Drawing.Color.Transparent;
			this.button2.Image = ((System.Drawing.Image)(resources.GetObject("button2.Image")));
			this.button2.Location = new System.Drawing.Point(839, 295);
			this.button2.Name = "button2";
			this.button2.Size = new System.Drawing.Size(96, 130);
			this.button2.TabIndex = 33;
			this.button2.UseVisualStyleBackColor = false;
			this.button2.MouseDown += new System.Windows.Forms.MouseEventHandler(this.button2_MouseDown);
			this.button2.MouseUp += new System.Windows.Forms.MouseEventHandler(this.button2_MouseUp);
			// 
			// pictureBox3
			// 
			this.pictureBox3.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
			this.pictureBox3.Location = new System.Drawing.Point(39, 214);
			this.pictureBox3.Name = "pictureBox3";
			this.pictureBox3.Size = new System.Drawing.Size(1010, 10);
			this.pictureBox3.TabIndex = 56;
			this.pictureBox3.TabStop = false;
			// 
			// pictureBox4
			// 
			this.pictureBox4.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
			this.pictureBox4.Location = new System.Drawing.Point(39, 46);
			this.pictureBox4.Name = "pictureBox4";
			this.pictureBox4.Size = new System.Drawing.Size(1010, 10);
			this.pictureBox4.TabIndex = 57;
			this.pictureBox4.TabStop = false;
			// 
			// button1
			// 
			this.button1.BackColor = System.Drawing.Color.Gainsboro;
			this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.5F);
			this.button1.Location = new System.Drawing.Point(691, 616);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(130, 58);
			this.button1.TabIndex = 58;
			this.button1.Text = "Mıknatıs";
			this.button1.UseVisualStyleBackColor = false;
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// Form1
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.BackColor = System.Drawing.Color.White;
			this.ClientSize = new System.Drawing.Size(1370, 702);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.pictureBox4);
			this.Controls.Add(this.pictureBox3);
			this.Controls.Add(this.pictureBox2);
			this.Controls.Add(this.pictureBox1);
			this.Controls.Add(this.label15);
			this.Controls.Add(this.label16);
			this.Controls.Add(this.label17);
			this.Controls.Add(this.label12);
			this.Controls.Add(this.label13);
			this.Controls.Add(this.label14);
			this.Controls.Add(this.label8);
			this.Controls.Add(this.label7);
			this.Controls.Add(this.label3);
			this.Controls.Add(this.button10);
			this.Controls.Add(this.button9);
			this.Controls.Add(this.button8);
			this.Controls.Add(this.button7);
			this.Controls.Add(this.button6);
			this.Controls.Add(this.button5);
			this.Controls.Add(this.button4);
			this.Controls.Add(this.button3);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.label6);
			this.Controls.Add(this.label5);
			this.Controls.Add(this.label4);
			this.Controls.Add(this.btnSendData);
			this.Controls.Add(this.btnClear);
			this.Controls.Add(this.txtReceived);
			this.Controls.Add(this.txtSend);
			this.Controls.Add(this.btnConnect);
			this.Controls.Add(this.cmbDataBits);
			this.Controls.Add(this.cmbParity);
			this.Controls.Add(this.cmbStopBits);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.cmbBaudRate);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.cmbSerialPort);
			this.Controls.Add(this.btnBring);
			this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
			this.MaximizeBox = false;
			this.Name = "Form1";
			this.Text = "GTT araç kontrol";
			this.Load += new System.EventHandler(this.Form1_Load);
			((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.pictureBox3)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.pictureBox4)).EndInit();
			this.ResumeLayout(false);
			this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Button btnBring;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.ComboBox cmbSerialPort;
        private System.Windows.Forms.ComboBox cmbBaudRate;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.ComboBox cmbStopBits;
        private System.Windows.Forms.ComboBox cmbParity;
        private System.Windows.Forms.ComboBox cmbDataBits;
        private System.Windows.Forms.Button btnConnect;
        private System.Windows.Forms.TextBox txtSend;
        private System.Windows.Forms.TextBox txtReceived;
        private System.Windows.Forms.Button btnClear;
        private System.Windows.Forms.Button btnSendData;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
		private System.Windows.Forms.Button button10;
		private System.Windows.Forms.Button button9;
		private System.Windows.Forms.Button button8;
		private System.Windows.Forms.Button button7;
		private System.Windows.Forms.Button button5;
		private System.Windows.Forms.Button button4;
		private System.Windows.Forms.Button button3;
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.Label label7;
		private System.Windows.Forms.Label label8;
		private System.Windows.Forms.Label label12;
		private System.Windows.Forms.Label label13;
		private System.Windows.Forms.Label label14;
		private System.Windows.Forms.Label label15;
		private System.Windows.Forms.Label label16;
		private System.Windows.Forms.Label label17;
		private System.Windows.Forms.Button button6;
		private System.Windows.Forms.PictureBox pictureBox1;
		private System.Windows.Forms.PictureBox pictureBox2;
		private System.Windows.Forms.PictureBox pictureBox3;
		private System.Windows.Forms.PictureBox pictureBox4;
		private System.Windows.Forms.Button button1;
	}
}

