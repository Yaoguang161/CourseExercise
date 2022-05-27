
/**************************************************************************
文件名：abstractuser.cpp
功能模块和目的：
开发者：YG
日期：
版权信息：Copyright 2022 by YG .All rights reserved.
更改记录：
**************************************************************************/

#include "AbstractUser.h"
#include<QString>

//构造函数
AbstractUser::AbstractUser(QString newAccount, QString newPassword,
	QString newPhone) :
	Account(newAccount), Password(newPassword), Phone(newPhone)
{

}


//确定密码是否正确
bool AbstractUser::IsCorrect(QString aPassword)
{
	if (aPassword == Password)
		return true;
	return false;
}


