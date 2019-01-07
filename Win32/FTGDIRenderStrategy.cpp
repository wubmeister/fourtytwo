//
//  FTGDIRenderStrategy.cpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright © 2019 Apstery. All rights reserved.
//

#include "FTGDIRenderStrategy.hpp"

FTGDIRenderStrategy::FTGDIRenderStrategy(HDC hdc) : m_hdc(hdc) {}

void FTGDIRenderStrategy::drawBox(float x, float y, float width, float height)
{
	HBRUSH hbr = CreateSolidBrush(0x00E0E0E0);
	SelectObject(m_hdc, hbr);

	BeginPath(m_hdc);
	MoveToEx(m_hdc, x, y, NULL);
	LineTo(m_hdc, x + width, y);
	LineTo(m_hdc, x + width, y + height);
	LineTo(m_hdc, x, y + height);
	CloseFigure(m_hdc);
	EndPath(m_hdc);

	FillPath(m_hdc);
}