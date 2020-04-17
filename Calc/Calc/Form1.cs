using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Calc
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            result.Font = new Font("Microsoft San Serif", 20,FontStyle.Bold);

        }
       
        private void button1_Click(object sender, EventArgs e)
        {

            result.Text += button1.Text;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            result.Text += button2.Text;
           
        }

        private void button3_Click(object sender, EventArgs e)
        {
            result.Text += button3.Text;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            result.Text += button4.Text;
        }


        private void button12_Click(object sender, EventArgs e)
        {
            result.Text += button12.Text;
        }


        private void button13_Click(object sender, EventArgs e)
        {
            result.Text += button13.Text;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            result.Text += "*";
        }

        private void button15_Click(object sender, EventArgs e)
        {
            result.Text += button15.Text;
        }

        private void button16_Click(object sender, EventArgs e)
        {
            string value = new DataTable().Compute(result.Text, null).ToString();
            result.Clear();
            result.Text = value;
        }

        private void button11_Click(object sender, EventArgs e)
        {
            result.ResetText();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            result.Text += button5.Text;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            result.Text += button6.Text;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            result.Text += button7.Text;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            result.Text += button8.Text;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            result.Text += button9.Text;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            result.Text += button10.Text; 
        }        

       
    }
}
