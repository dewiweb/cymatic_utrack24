/********************************************************************
 This sample code is supplied by the Company ICT7 s.a. to support 
 CopperLan SDK understanding.
 This source code is open and not protected. Redistribution and use 
 in source and binary forms, with or without modification, are 
 permitted without conditions.

 THIS SOFTWARE IS PROVIDED IN AN “AS IS” CONDITION. NO WARRANTIES,
 WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED
 TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. THE COMPANY SHALL NOT,
 IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR
 CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
********************************************************************/
#include "BaseEngine.h"


CBaseEngine::CBaseEngine()
    : m_fInitialized(FALSE)
{
}

CBaseEngine::~CBaseEngine()
{
	DeInit();
}

CPT::boolean CBaseEngine::Initialize(CPT::char8 const * const freewareKey)
{
    CPT::boolean fRet = TRUE;

	m_fInitialized = TRUE;
    m_fLearning = FALSE;

    // Create the CHAI
	m_pCHAI = CPNS::Factory::CreateCHAI(freewareKey);

    // Register notification handlers
    m_pCHAI->RegisterNotificationHandler(this);
    m_pCHAI->RegisterSignalNotificationHandler(this);
    // Init CopperLan stuff

    fRet = CreateCopperLanObjects();

    if (fRet)
    {
        m_LearningTimer = m_pCHAI->AddTimer(this);

        // Get connected
        m_pCHAI->Connect();
    }

	return fRet;
}

CPT::boolean CBaseEngine::DeInit()
{
	m_fInitialized = FALSE;

    if (m_pCHAI)
    {
        m_pCHAI->Destroy();
	    m_pCHAI = NULL;
    }
	return TRUE;
}

//////////////////////////////////////////////////////////////////////////
// CPNS::ICHAI_NotificationHandler
void CBaseEngine::OnCHAI_Notification(
    CPNS::ICHAI * const pCHAI,
    CPNS::Enums::CHAINotificationTypes const notification)
{
    // Avoid warning due to not used argument
    pCHAI;

	switch (notification)
    {
    case CPNS::Enums::CNT_Connected:
        OnConnected();
        break;
    case CPNS::Enums::CNT_Disconnected:
        OnDisconnected();
        break;
    case CPNS::Enums::CNT_NetworkStable:
        OnNetworkStable();
        break;
    case CPNS::Enums::CNT_NetworkChanged:
        OnNetworkChanged();
        break;
    case CPNS::Enums::CNT_GroupsChanged:
		OnGroupChanged();
        break;
	}
}

void CBaseEngine::OnCHAI_DeviceDeclaration(
    CPNS::ICHAI * const pCHAI,
    CPNS::Enums::DeviceDeclarationNotificationTypes const declarationType,
    CPNS::IRemoteDevice* const pRemDev)
{
    // Avoid warning due to not used argument
    pCHAI;
    declarationType;
    pRemDev;

}

void CBaseEngine::OnCHAI_DeviceDiscarded(
    CPNS::ICHAI * const pCHAI,
    CPT::CDeviceID const & devID,
    CPNS::Enums::DeviceDiscardedReasons const reason)
{
    // Avoid warning due to not used argument
    pCHAI;
    devID;
    reason;

}

void CBaseEngine::OnCHAI_DeviceIdentityChanged(
	CPNS::ICHAI* const pCHAI,
	CPT::CDeviceID const &oldDeviceID,
	CPT::CDeviceID const &newDeviceID)
{
    // Avoid warning due to not used argument
    pCHAI;
    oldDeviceID;
    newDeviceID;

}

void CBaseEngine::OnCHAI_Warning(
    CPNS::ICHAI * const pCHAI,
    CPT::CEndPoint const & optionalSource,
    CPNS::CombinedWarningCodes const code,
    CPNS::Enums::WarningDomains const domain,
    CPT::UTF8String const & strTitle,
    CPT::UTF8String const & strContent)
{
    // Avoid warning due to not used argument
    pCHAI;
    optionalSource;
    code;
    domain;
    strTitle;
    strContent;
}





void CBaseEngine::OnCHAI_Timer( 
    IN CPNS::ICHAI * const pCHAI, 
    IN CPNS::ITimer * const pTimer, 
    IN CPT::SystemTime const globalTime )
{
    // Avoid warning due to not used argument
    pCHAI;
    globalTime;

    if (pTimer == m_LearningTimer)
    {
        m_fLearning = FALSE;
        OnGlobalLearningChanged(FALSE);
    }
}

void CBaseEngine::OnCHAI_Signal( 
    IN CPNS::ICHAI * const pCHAI, 
    IN CPT::uint16 const wSignalNumber, 
    IN CPT::uint16 const wOptionalData0, 
    IN CPT::uint16 const wOptionalData1, 
    IN CPT::uint16 const wOptionalData2, 
    IN CPT::uint16 const wOptionalData3, 
    IN CPT::UTF8String const & strOptionalData, 
    IN CPT::CEndPoint const & optionalEndPoint, 
    IN CPT::CDeviceID const & source )
{
    // Avoid warning due to not used argument
    pCHAI;
    wOptionalData1;
    wOptionalData2;
    wOptionalData3;
    strOptionalData;
    optionalEndPoint;
    source;

    if (wSignalNumber == CPNS::Enums::SIG_Learning)
    {
        if (wOptionalData0 == 0)
        {
            m_fLearning = FALSE;
            m_LearningTimer->Stop();
            OnGlobalLearningChanged(FALSE);
        }
        else
        {
            m_fLearning = TRUE;
            // Start or reset 2 second one shot timer
            m_LearningTimer->SetTime(2000, TRUE);
            OnGlobalLearningChanged(TRUE);
        }
    }
}


