#include "AdminLogin.h"
#include "HMS.h"
#include "Admin.h"
#include "AdmMngUser.h"
#include "AdmMngCust.h"
#include "UserLogin.h"
#include "User.h"
#include "Customer.h"
#include "CustomerLogin.h"
#include "CustomerRegister.h"
#include "HotelRoom.h"
#include "HotelAddRoom.h"
#include "HotelEditRoom.h"
#include "HotelBookings.h"
#include "HotelOccupyRoom.h"
#include "CustSearchRoom.h"
#include "CustBookRoom.h"
#include "CustBHistory.h"
#include "hmsHomepage.h"
#include "HRestaurant.h"
#include "HRcrudItem.h"
#include "HRbilling.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void HMS();
void HomePage();
void adminLogin();
void adminDashboard(AdminData^ admindata);
void userDashboard(UserData^ userdata);
void custsearchroom(CustomerData^ custdata);
void custbookroom(CustomerData^ custdata);
void custbhistory(CustomerData^ custdata);
void customerDashboard(CustomerData^ custdata);
void adminManageUser();
void adminManageCust();
void userLogin();
void custLogin();
void custRegister();
void hotelRoom(UserData^ userdata);
void HRcrudItems(UserData^ userdata);
void HRbilling(UserData^ userdata);
void hRestaurant(UserData^ userdata);
void hotelEditRoom(UserData^ userdata);
void hotelBookings(UserData^ userdata);
void hotelAddRoom(UserData^ userdata);
void hotelOccupyRoom(UserData^ userdata);

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HomePage();
}

void HomePage()
{
	HotelManagementSys::hmsHomepage hmshp;
	Application::Run(% hmshp);
	int sel = hmshp.sel;
	if (sel == 1) {
		HMS();
	}
}

void HMS()
{
	HotelManagementSys::HMS hms;
	Application::Run(% hms);
	int sel = hms.sel;
	if (sel == 1) {
		adminLogin();
	}
	else if (sel == 2)
	{
		userLogin();
	}
	else if (sel == 3)
	{
		custLogin();
	}
}

void adminLogin()
{
	HotelManagementSys::AdminLogin adminlogin;
	Application::Run(% adminlogin);
	AdminData^ admindata = adminlogin.admindata;
	if (admindata != nullptr)
	{
		adminDashboard(admindata);
	}
	int admlogsel = adminlogin.admlogsel;
	if (admlogsel == -1)
	{
		HMS();
	}
}

void adminDashboard(AdminData^ admindata)
{
	HotelManagementSys::Admin admin(admindata);
	Application::Run(% admin);
	int adminsel = admin.adminsel;
	if (adminsel == 1)
	{
		adminManageUser();
	}
	else if (adminsel == 2)
	{
		adminManageCust();
	}
	else if (adminsel == -1)
	{
		adminLogin();
	}
}

void adminManageUser()
{
	HotelManagementSys::AdmMngUser admmnguser;
	Application::Run(% admmnguser);
	int admmngusersel = admmnguser.admmngusersel;
	if (admmngusersel == -1)
	{
		adminLogin();
	}
}

void adminManageCust()
{
	HotelManagementSys::AdmMngCust admmngcust;
	Application::Run(% admmngcust);
	int admmngcustsel = admmngcust.admmngcustsel;
	if (admmngcustsel == -1)
	{
		adminLogin();
	}
}

void userLogin()
{
	HotelManagementSys::UserLogin userlogin;
	Application::Run(% userlogin);
	UserData^ userdata = userlogin.userdata;
	if (userdata != nullptr)
	{
		userDashboard(userdata);
	}
	int userlogsel = userlogin.userlogsel;
	if (userlogsel == -1)
	{
		HMS();
	}
}

void userDashboard(UserData^ userdata)
{
	HotelManagementSys::User user(userdata);
	Application::Run(% user);
	int usersel = user.usersel;
	if (usersel == -1)
	{
		userLogin();
	}
	else if (usersel == 1)
	{
		hotelRoom(userdata);
	}
	else if (usersel == 2)
	{
		hRestaurant(userdata);
	}
}

void custLogin()
{
	HotelManagementSys::CustomerLogin custlogin;
	Application::Run(% custlogin);
	CustomerData^ custdata = custlogin.custdata;
	if (custdata != nullptr)
	{
		customerDashboard(custdata);
	}
	int custlogsel = custlogin.custlogsel;
	if (custlogsel == -1)
	{
		HMS();
	}
	else if (custlogsel == 2)
	{
		custRegister();
	}
}

void custRegister()
{
	HotelManagementSys::CustomerRegister custregis;
	Application::Run(% custregis);
	int custregsel = custregis.custregsel;
	if (custregsel == -1)
	{
		HMS();
	}
	else if (custregsel == 2)
	{
		custLogin();
	}
}

void customerDashboard(CustomerData^ custdata)
{
	HotelManagementSys::Customer cust(custdata);
	Application::Run(% cust);
	int custsel = cust.custsel;
	if (custsel == -1)
	{
		custLogin();
	}
	else if (custsel == 1)
	{
		custsearchroom(custdata);
	}
	else if (custsel == 2)
	{
		custbookroom(custdata);
	}
	else if (custsel == 3)
	{
		custbhistory(custdata);
	}
}

void hotelRoom(UserData^ userdata)
{
	HotelManagementSys::HotelRoom hotelroom(userdata);
	Application::Run(% hotelroom);
	int usersel = hotelroom.usersel;
	if (usersel == -1)
	{
		userDashboard(userdata);
	}
	else if (usersel == 1)
	{
		hotelAddRoom(userdata);
	}
	else if (usersel == 2)
	{
		hotelEditRoom(userdata);
	}
	else if (usersel == 3)
	{
		hotelOccupyRoom(userdata);
	}
	else if (usersel == 4)
	{
		hotelBookings(userdata);
	}
}

void hotelAddRoom(UserData^ userdata)
{
	HotelManagementSys::HotelAddRoom addroom(userdata);
	Application::Run(% addroom);
	int usersel = addroom.usersel;
	if (usersel == -1)
	{
		hotelRoom(userdata);
	}
}

void hotelEditRoom(UserData^ userdata)
{
	HotelManagementSys::HotelEditRoom editroom(userdata);
	Application::Run(% editroom);
	int usersel = editroom.usersel;
	if (usersel == -1)
	{
		hotelRoom(userdata);
	}
}

void hotelOccupyRoom(UserData^ userdata)
{
	HotelManagementSys::HotelOccupyRoom occupyroom(userdata);
	Application::Run(% occupyroom);
	int usersel = occupyroom.usersel;
	if (usersel == -1)
	{
		hotelRoom(userdata);
	}
}

void hotelBookings(UserData^ userdata)
{
	HotelManagementSys::HotelBookings bookroom(userdata);
	Application::Run(% bookroom);
	int usersel = bookroom.usersel;
	if (usersel == -1)
	{
		hotelRoom(userdata);
	}
}

void custsearchroom(CustomerData^ custdata)
{
	HotelManagementSys::CustSearchRoom custsr(custdata);
	Application::Run(% custsr);
	int custsel = custsr.custsel;
	if (custsel == -1)
	{
		customerDashboard(custdata);
	}
}

void custbookroom(CustomerData^ custdata)
{
	HotelManagementSys::CustBookRoom custbr(custdata);
	Application::Run(% custbr);
	int custsel = custbr.custsel;
	if (custsel == -1)
	{
		customerDashboard(custdata);
	}
}

void custbhistory(CustomerData^ custdata)
{
	HotelManagementSys::CustBHistory custhr(custdata);
	Application::Run(% custhr);
	int custsel = custhr.custsel;
	if (custsel == -1)
	{
		customerDashboard(custdata);
	}
}

void hRestaurant(UserData^ userdata)
{
	HotelManagementSys::HRestaurant hotelr(userdata);
	Application::Run(% hotelr);
	int usersel = hotelr.usersel;
	if (usersel == -1)
	{
		userDashboard(userdata);
	}
	else if (usersel == 1)
	{
		HRcrudItems(userdata);
	}
	else if (usersel == 2)
	{
		HRbilling(userdata);
	}
}

void HRcrudItems(UserData^ userdata)
{
	HotelManagementSys::HRcrudItem hrItem(userdata);
	Application::Run(% hrItem);
	int usersel = hrItem.usersel;
	if (usersel == -1)
	{
		hRestaurant(userdata);
	}
}

void HRbilling(UserData^ userdata)
{
	HotelManagementSys::HRbilling hrItem(userdata);
	Application::Run(% hrItem);
	int usersel = hrItem.usersel;
	if (usersel == -1)
	{
		hRestaurant(userdata);
	}
}