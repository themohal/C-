using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        string t1 = "admin";
        string t2 = "admin";
 
        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (t1 == textBox1.Text && t2 == textBox2.Text)
            {


                Form2 ss = new Form2();
               ss.Show();
            }
            else
            {
                MessageBox.Show("Wrong Credential Try Again! ");
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

      

        
    }
}
