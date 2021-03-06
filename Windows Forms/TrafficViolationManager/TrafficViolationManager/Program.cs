﻿using System;
using System.Windows.Forms;

namespace Moreniell.TrafficViolationManager
{
	static class Program
	{
		/// <summary>
		/// Главная точка входа для приложения.
		/// </summary>
		[STAThread]
		static void Main()
		{
			try
			{
				Application.EnableVisualStyles();
				Application.SetCompatibleTextRenderingDefault(false);
				Application.Run(new LauncherForm());
			}
			catch (Exception ex)
			{
				MessageBox.Show(ex.StackTrace);
			}
		}
	}
}
