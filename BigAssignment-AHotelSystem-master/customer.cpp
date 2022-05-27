#include "customer.h"
#include <QString>

/********************************************************************
文件名：customer.cpp
功能模块和目的：实现customer类的功能
开发者：YG
日期：
版权信息：Copyright 2022 by YG .All rights reserved.
更改记录：
**********************************************************************/

//用于从数据库中读取数据的构造函数
Customer::Customer(QString newAccount, QString newPassord,
	QString newPhone, int newTotalCost) :
	AbstractUser(newAccount, newPassord, newPhone), totalCost(newTotalCost)
{

}

//用于在程序中新建用户类的构造函数

Customer::Customer(QString newAccount, QString newPassword,
	QString newPhone) :
	AbstractUser(newAccount, newPassword, newPhone)
{
	totalCost = 0;
}
