////////////////////////////////////////////////////////////////////////
// Copyright(c) 2015-9999, WuHan GoodGame, All Rights Reserved
// Moudle: SignMgr.cpp
// Author: 陈建军(Chen Jianjun)
// Created: 2015-10-31
////////////////////////////////////////////////////////////////////////
#include "SignMgr.h"

SignMgr* SignMgr::m_pInstance = nullptr;
//////////////////////////////////////////////////////////////////////////
SignMgr* SignMgr::getInstance()
{
	if (m_pInstance == nullptr)
	{
		m_pInstance = new SignMgr();
	}
	return m_pInstance;
}

//////////////////////////////////////////////////////////////////////////
void SignMgr::destroyInstance()
{

}

//////////////////////////////////////////////////////////////////////////
SignMgr::SignMgr()
{

}

////////////////////////////////////////////////////////////////////////
// Description: 获取签到奖励信息
// Arguments:
// Author: 陈建军(Chen Jianjun)
// Return Value:  bool
////////////////////////////////////////////////////////////////////////
bool SignMgr::getSignAwardInfo(std::vector<ST_SIGN_AWARD_INFO>& vecInfo)
{
	vecInfo.clear();
	vecInfo.swap(m_vecSignAwardInfo);
	return true;
}

////////////////////////////////////////////////////////////////////////
// Description: 添加一条签到奖励信息
// Arguments:
// Author: 陈建军(Chen Jianjun)
// Return Value:  bool
////////////////////////////////////////////////////////////////////////
void SignMgr::addSignAwardInfo(ST_SIGN_AWARD_INFO& info)
{
	m_vecSignAwardInfo.push_back(info);
}

////////////////////////////////////////////////////////////////////////
// Description: 签到成功处理
// Arguments:
// Author: 陈建军(Chen Jianjun)
// Return Value:  bool
////////////////////////////////////////////////////////////////////////
void SignMgr::signSuc()
{

}
