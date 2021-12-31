using System;
using System.IO.Ports;
using System.Windows.Forms;

namespace GTTarabaKontrol
{
	public partial class Form1 : Form
	{
		public Form1()
		{
			InitializeComponent();
		}

		SerialPort serialport = new SerialPort();

		public delegate void AddDataDelegate(String myString);
		public AddDataDelegate myDelegate;

		int far = 0;
		int dortlu = 0;
		int sagsinyal = 0;
		int solsinyal = 0;
		String a;
		Boolean W = false;
		Boolean A = false;
		Boolean S = false;
		Boolean D = false;
		int veri;
		Boolean akım = false;
		Boolean mıknatıs = false;  

		private void btnBringPort_Click(object sender, EventArgs e)
		{

			foreach (string port in SerialPort.GetPortNames())
			{
				cmbSerialPort.Items.Add(port);
			}
			cmbSerialPort.SelectedIndex = 0;


			cmbBaudRate.Items.Add("1200");
			cmbBaudRate.Items.Add("2400");
			cmbBaudRate.Items.Add("4800");
			cmbBaudRate.Items.Add("9600");
			cmbBaudRate.Items.Add("19200");
			cmbBaudRate.Items.Add("38400");
			cmbBaudRate.Items.Add("57600");
			cmbBaudRate.Items.Add("115200");
			cmbBaudRate.Items.Add("230400");
			cmbBaudRate.SelectedIndex = 3;


			cmbStopBits.DataSource = Enum.GetValues(typeof(StopBits));
			cmbStopBits.SelectedIndex = 0;
			cmbParity.DataSource = Enum.GetValues(typeof(Parity));
			cmbStopBits.SelectedIndex = 1;


			cmbDataBits.Items.Add("4");
			cmbDataBits.Items.Add("5");
			cmbDataBits.Items.Add("6");
			cmbDataBits.Items.Add("7");
			cmbDataBits.Items.Add("8");
			cmbDataBits.SelectedIndex = 4;
		}

		private void btnConnect_Click(object sender, EventArgs e)
		{
			if (serialport.IsOpen)
			{
				serialport.Close();
				btnConnect.Text = "Bağlan";

				txtSend.Enabled = false;
				txtReceived.Enabled = false;
				btnSendData.Enabled = false;
				btnClear.Enabled = false;
			}
			else if (!serialport.IsOpen)
			{

				serialport.PortName = cmbSerialPort.SelectedItem.ToString();
				serialport.BaudRate = Convert.ToInt16(cmbBaudRate.SelectedItem);
				serialport.StopBits = (StopBits)cmbStopBits.SelectedItem;
				serialport.Parity = (Parity)cmbParity.SelectedItem;
				serialport.DataBits = Convert.ToInt16(cmbDataBits.SelectedItem);

				try
				{

					serialport.Open();
					btnConnect.Text = "Bağlantıyı Kes";
					myDelegate = new AddDataDelegate(AddDataMethod);
					serialport.DataReceived += new SerialDataReceivedEventHandler(DataReceivedHandler);

					txtSend.Enabled = true;
					txtReceived.Enabled = true;
					btnSendData.Enabled = true;
					btnClear.Enabled = true;
				}
				catch
				{
					MessageBox.Show("Bağlantı Kurulmadı: \n" + serialport.PortName.ToString() + " " + serialport.BaudRate.ToString());
					return;
				};
			}
		}
		public void AddDataMethod(String myString)
		{
			txtReceived.AppendText(myString);
		}

		private void DataReceivedHandler(object sender, SerialDataReceivedEventArgs e)
		{

			SerialPort sp = (SerialPort)sender;
			string s = sp.ReadExisting();
			txtReceived.Invoke(myDelegate, new Object[] { s });			
			if (s == "%") { akım = true; }
			if (s == "+") { akım = false; }
			a = s;
			//byte[] buffer;
			//buffer = new byte[1];
			//serialport.Read(buffer,0,0);
			//veri = Convert.ToInt32(buffer[1]);
			//txtReceived.Invoke(myDelegate, new Object[] { Convert.ToString(buffer[0])  });
		}
		//---------------------------------------------------
		private void button2_MouseDown(object sender, MouseEventArgs e)
		{
			DateTime dt = DateTime.Now;
			String dtn = dt.ToShortTimeString();
			String data = "l";
			serialport.WriteLine(data);
			txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
			button2.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\yukariokbasili.png");
		}

		private void button2_MouseUp(object sender, MouseEventArgs e)
		{
			DateTime dt = DateTime.Now;
			String dtn = dt.ToShortTimeString();
			String data = "z";
			serialport.WriteLine(data);
			txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
			button2.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\yukariok.png");
		}
		//------------------------------------------------------------------------------------
		private void button4_MouseDown(object sender, MouseEventArgs e)
		{
			DateTime dt = DateTime.Now;
			String dtn = dt.ToShortTimeString();
			String data = "4";
			serialport.Write(data);
			txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
			button4.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\solokbasili.png");
		}

		private void button4_MouseUp(object sender, MouseEventArgs e)
		{
			DateTime dt = DateTime.Now;
			String dtn = dt.ToShortTimeString();
			String data = "z";
			serialport.Write(data);
			txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
			button4.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\solok.png");
		}
		//----------------------------------------------------------------------------------------------------
		private void button5_MouseDown(object sender, MouseEventArgs e)
		{
			DateTime dt = DateTime.Now;
			String dtn = dt.ToShortTimeString();
			String data = "3";
			serialport.Write(data);
			txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
			button5.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\sagokbasili.png");
		}

		private void button5_MouseUp(object sender, MouseEventArgs e)
		{
			DateTime dt = DateTime.Now;
			String dtn = dt.ToShortTimeString();
			String data = "z";
			serialport.Write(data);
			txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
			button5.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\sagok.png");
		}
		//--------------------------------------------------------------------------------
		private void button3_MouseDown(object sender, MouseEventArgs e)
		{
			DateTime dt = DateTime.Now;
			String dtn = dt.ToShortTimeString();
			String data = "0";
			serialport.Write(data);
			txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
			button3.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\asagiokbasili.png");
		}

		private void button3_MouseUp(object sender, MouseEventArgs e)
		{
			DateTime dt = DateTime.Now;
			String dtn = dt.ToShortTimeString();
			String data = "z";
			serialport.Write(data);
			txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
			button3.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\asagiok.png");
		}

		private void button9_Click(object sender, EventArgs e)
		{
			if (far == 0)
			{
				far = 1;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "m";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button9.Text = "FAR KAPA";
				button9.BackColor = System.Drawing.Color.Teal;
			}
			else
			{
				far = 0;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "n";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button9.Text = "FAR AÇ";
				button9.BackColor = System.Drawing.Color.Cyan;
			}
		}

		private void button8_Click(object sender, EventArgs e)
		{
			if (sagsinyal == 0)
			{
				sagsinyal = 1;
				solsinyal = 0;
				dortlu = 0;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "7";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button8.Text = "SAĞ SİNYAL KAPA";
				button8.BackColor = System.Drawing.Color.DarkGoldenrod;
				button7.Text = "SOL SİNYAL AÇ";
				button7.BackColor = System.Drawing.Color.Orange;
				button6.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\2.flas.png");
			}
			else
			{
				sagsinyal = 0;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "8";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button8.Text = "SAĞ SİNYAL AÇ";
				button8.BackColor = System.Drawing.Color.Orange;
			}
		}

		private void button7_Click(object sender, EventArgs e)
		{
			if (solsinyal == 0)
			{
				solsinyal = 1;
				sagsinyal = 0;
				dortlu = 0;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "9";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button8.Text = "SAĞ SİNYAL AÇ";
				button8.BackColor = System.Drawing.Color.Orange;
				button7.Text = "SOL SİNYAL KAPA";
				button7.BackColor = System.Drawing.Color.DarkGoldenrod;
				button6.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\2.flas.png");
			}
			else
			{
				solsinyal = 0;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "1";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button7.Text = "SOL SİNYAL AÇ";
				button7.BackColor = System.Drawing.Color.Orange;
			}
		}

		private void button6_Click(object sender, EventArgs e)
		{
			if (dortlu == 0)
			{
				dortlu = 1;
				sagsinyal = 0;
				solsinyal = 0;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "5";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button8.Text = "SAĞ SİNYAL AÇ";
				button8.BackColor = System.Drawing.Color.Orange;
				button7.Text = "SOL SİNYAL AÇ";
				button7.BackColor = System.Drawing.Color.Orange;
				button6.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\2.flas kpl.png");
			}
			else
			{
				dortlu = 0;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "6";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button6.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\2.flas.png");
			}
		}

		private void button10_KeyDown(object sender, KeyEventArgs e)
		{
			if (e.KeyData == Keys.W && W == false)
			{
				W = true;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "l";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button2.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\yukariokbasili.png");
			}
			if (e.KeyData == Keys.D && D == false)
			{
				D = true;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "3";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button5.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\sagokbasili.png");
			}
			if (e.KeyData == Keys.S && S == false)
			{
				S = true;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "0";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button3.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\asagiokbasili.png");
			}
			if (e.KeyData == Keys.A && A == false)
			{
				A = true;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "4";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button4.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\solokbasili.png");
			}
			//-------------------------------------------------------------------------------------------------
			if (e.KeyData == Keys.Q)
			{
				if (solsinyal == 0)
				{
					solsinyal = 1;
					sagsinyal = 0;
					dortlu = 0;
					DateTime dt = DateTime.Now;
					String dtn = dt.ToShortTimeString();
					String data = "9";
					serialport.Write(data);
					txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
					button8.Text = "SAĞ SİNYAL AÇ";
					button8.BackColor = System.Drawing.Color.Orange;
					button7.Text = "SOL SİNYAL KAPA";
					button7.BackColor = System.Drawing.Color.DarkGoldenrod;
					button6.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\2.flas.png");
				}
				else
				{
					solsinyal = 0;
					DateTime dt = DateTime.Now;
					String dtn = dt.ToShortTimeString();
					String data = "1";
					serialport.Write(data);
					txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
					button7.Text = "SOL SİNYAL AÇ";
					button7.BackColor = System.Drawing.Color.Orange;
				}
			}
			if (e.KeyData == Keys.E)
			{
				if (sagsinyal == 0)
				{
					sagsinyal = 1;
					solsinyal = 0;
					dortlu = 0;
					DateTime dt = DateTime.Now;
					String dtn = dt.ToShortTimeString();
					String data = "7";
					serialport.Write(data);
					txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
					button8.Text = "SAĞ SİNYAL KAPA";
					button8.BackColor = System.Drawing.Color.DarkGoldenrod;
					button7.Text = "SOL SİNYAL AÇ";
					button7.BackColor = System.Drawing.Color.Orange;
					button6.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\2.flas.png");
				}
				else
				{
					sagsinyal = 0;
					DateTime dt = DateTime.Now;
					String dtn = dt.ToShortTimeString();
					String data = "8";
					serialport.Write(data);
					txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
					button8.Text = "SAĞ SİNYAL AÇ";
					button8.BackColor = System.Drawing.Color.Orange;
				}
			}
			if (e.KeyData == Keys.Z)
			{
				if (dortlu == 0)
				{
					dortlu = 1;
					sagsinyal = 0;
					solsinyal = 0;
					DateTime dt = DateTime.Now;
					String dtn = dt.ToShortTimeString();
					String data = "5";
					serialport.Write(data);
					txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
					button8.Text = "SAĞ SİNYAL AÇ";
					button8.BackColor = System.Drawing.Color.Orange;
					button7.Text = "SOL SİNYAL AÇ";
					button7.BackColor = System.Drawing.Color.Orange;
					button6.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\2.flas kpl.png");
				}
				else
				{
					dortlu = 0;
					DateTime dt = DateTime.Now;
					String dtn = dt.ToShortTimeString();
					String data = "6";
					serialport.Write(data);
					txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
					button6.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\2.flas.png");
				}
			}
			if (e.KeyData == Keys.X)
			{
				if (far == 0)
				{
					far = 1;
					DateTime dt = DateTime.Now;
					String dtn = dt.ToShortTimeString();
					String data = "m";
					serialport.Write(data);
					txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
					button9.Text = "FAR KAPA";
					button9.BackColor = System.Drawing.Color.Teal;
				}
				else
				{
					far = 0;
					DateTime dt = DateTime.Now;
					String dtn = dt.ToShortTimeString();
					String data = "n";
					serialport.Write(data);
					txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
					button9.Text = "FAR AÇ";
					button9.BackColor = System.Drawing.Color.Cyan;
				}
			}
		}

		private void button10_KeyUp(object sender, KeyEventArgs e)
		{
			if (e.KeyData == Keys.W)
			{
				W = false;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "z";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button2.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\yukariok.png");
			}
			if (e.KeyData == Keys.D)
			{
				D = false;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "z";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button5.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\sagok.png");
			}
			if (e.KeyData == Keys.S)
			{
				S = false;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "z";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button3.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\asagiok.png");
			}
			if (e.KeyData == Keys.A)
			{
				A = false;
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = "z";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button4.Image = System.Drawing.Bitmap.FromFile(@"C:\Users\HP\Desktop\GTT_araba_kontrol\GTT_araba_kontrol\Resources\solok.png");
			}
		}
		//----------------------------------------------------
		private void btnClear_Click(object sender, EventArgs e)
		{
			txtReceived.Text = "";
		}
		private void btnSendData_Click(object sender, EventArgs e)
		{
			serialport.WriteLine(txtSend.Text);
			txtSend.Text = "";
		}
		private void Form1_Load(object sender, EventArgs e)
		{
			txtSend.Enabled = false;
			txtReceived.Enabled = false;
			btnSendData.Enabled = false;
			btnClear.Enabled = false;
		}

		private void txtReceived_TextChanged(object sender, EventArgs e)
		{
			//a = Convert.ToInt32(veri);
			//label3.Text= Convert.ToString(veri) +" cm";
			//System.Threading.Thread.Sleep(150);			
			//txtReceived.Text = "";
			//label3.Text = a;

			if (a == "a") { label3.Text = "1"; if (akım == true) { label14.Text = "1.0"; label17.Text = "27.6"; } }
			if (a == "b") { label3.Text = "2"; if (akım == true) { label14.Text = "1.0"; label17.Text = "6.34"; } }
			if (a == "c") { label3.Text = "3"; if (akım == true) { label14.Text = "1.0"; label17.Text = "2.58"; } }
			if (a == "d") { label3.Text = "4"; if (akım == true) { label14.Text = "1.0"; label17.Text = "1.32"; } }
			if (a == "e") { label3.Text = "5"; if (akım == true) { label14.Text = "1.0"; label17.Text = "0.76"; } }
			if (a == "f") { label3.Text = "6"; if (akım == true) { label14.Text = "0.9"; label17.Text = "0.65"; } }
			if (a == "g") { label3.Text = "7"; if (akım == true) { label14.Text = "0.9"; label17.Text = "0.50"; } }
			if (a == "ğ") { label3.Text = "8"; if (akım == true) { label14.Text = "0.9"; label17.Text = "0.37"; } }
			if (a == "h") { label3.Text = "9"; if (akım == true) { label14.Text = "0.9"; label17.Text = "0.25"; } }
			if (a == "ı") { label3.Text = "10"; if (akım == true) { label14.Text = "0.9"; label17.Text = "0.17"; } }
			if (a == "i") { label3.Text = "11"; if (akım == true) { label14.Text = "0.8"; label17.Text = "0.15"; } }
			if (a == "j") { label3.Text = "12"; if (akım == true) { label14.Text = "0.8"; label17.Text = "0.13"; } }
			if (a == "k") { label3.Text = "13"; if (akım == true) { label14.Text = "0.8"; label17.Text = "0.11"; } }
			if (a == "l") { label3.Text = "14"; if (akım == true) { label14.Text = "0.8"; label17.Text = "0.09"; } }
			if (a == "m") { label3.Text = "15"; if (akım == true) { label14.Text = "0.8"; label17.Text = "0.07"; } }
			if (a == "n") { label3.Text = "16"; if (akım == true) { label14.Text = "0.7"; label17.Text = "0.06"; } }
			if (a == "o") { label3.Text = "17"; if (akım == true) { label14.Text = "0.7"; label17.Text = "0.05"; } }
			if (a == "ö") { label3.Text = "18"; if (akım == true) { label14.Text = "0.7"; label17.Text = "0.04"; } }
			if (a == "p") { label3.Text = "19"; if (akım == true) { label14.Text = "0.7"; label17.Text = "0.03"; } }
			if (a == "r") { label3.Text = "20"; if (akım == true) { label14.Text = "0.7"; label17.Text = "0.03"; } }
			if (a == "s") { label3.Text = "21"; if (akım == true) { label14.Text = "0.6"; label17.Text = "0.02"; } }
			if (a == "ş") { label3.Text = "22"; if (akım == true) { label14.Text = "0.6"; label17.Text = "0.02"; } }
			if (a == "t") { label3.Text = "23"; if (akım == true) { label14.Text = "0.6"; label17.Text = "0.02"; } }
			if (a == "u") { label3.Text = "24"; if (akım == true) { label14.Text = "0.6"; label17.Text = "0.02"; } }
			if (a == "ü") { label3.Text = "25"; if (akım == true) { label14.Text = "0.6"; label17.Text = "0.02"; } }
			if (a == "v") { label3.Text = "26"; if (akım == true) { label14.Text = "0.5"; label17.Text = "0.01"; } }
			if (a == "y") { label3.Text = "27"; if (akım == true) { label14.Text = "0.5"; label17.Text = "0.01"; } }
			if (a == "z") { label3.Text = "28"; if (akım == true) { label14.Text = "0.5"; label17.Text = "0.01"; } }
			if (a == "q") { label3.Text = "29"; if (akım == true) { label14.Text = "0.5"; label17.Text = "0.01"; } }
			if (a == "w") { label3.Text = "30"; if (akım == true) { label14.Text = "0.5"; label17.Text = "0.01"; } }
			if (a == "x") { label3.Text = "31"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "0") { label3.Text = "32"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "1") { label3.Text = "33"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "2") { label3.Text = "34"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "3") { label3.Text = "35"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "4") { label3.Text = "36"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "5") { label3.Text = "37"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "6") { label3.Text = "38"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "7") { label3.Text = "39"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "8") { label3.Text = "40"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "9") { label3.Text = "41"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == ".") { label3.Text = "42"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == ";") { label3.Text = "43"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == ":") { label3.Text = "44"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "-") { label3.Text = "45"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "_") { label3.Text = "46"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "*") { label3.Text = "47"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "?") { label3.Text = "48"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "~") { label3.Text = "49"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "|") { label3.Text = "50"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "}") { label3.Text = "51"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "]") { label3.Text = "52"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == ")") { label3.Text = "53"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "[") { label3.Text = "54"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "{") { label3.Text = "55"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "(") { label3.Text = "56"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "@") { label3.Text = "57"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "#") { label3.Text = "58"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "$") { label3.Text = "59"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "&") { label3.Text = "60"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
			if (a == "<") { label3.Text = "61≤"; if (akım == true) { label14.Text = "0.0"; label17.Text = "0"; } }
		}

		private void button1_Click(object sender, EventArgs e)
		{
			if (mıknatıs == false) {
				DateTime dt = DateTime.Now;
				String dtn = dt.ToShortTimeString();
				String data = ">";
				serialport.Write(data);
				txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
				button1.BackColor = System.Drawing.Color.Gray;
				mıknatıs = true;
			}
			else { 
		    DateTime dt = DateTime.Now;
			String dtn = dt.ToShortTimeString();
			String data = "^";
			serialport.Write(data);
			txtSend.AppendText("[" + dtn + "] " + "Gönder: " + data + "\n");
			button1.BackColor = System.Drawing.Color.Gainsboro;
			mıknatıs = false;
		}
		
		}
	}
}
