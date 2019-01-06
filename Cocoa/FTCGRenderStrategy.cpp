//
//  FTCGRenderStrategy.cpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright © 2019 Apstery. All rights reserved.
//

#include "FTCGRenderStrategy.hpp"

FTCGRenderStrategy::FTCGRenderStrategy(CGContextRef context, float height) : m_refContext(context), m_fHeight(height)
{
    CGFloat color[4] = { 0.8, 0.8, 0.8, 1.0 };
    m_refColor = CGColorCreate(CGBitmapContextGetColorSpace(context), color);
}

void FTCGRenderStrategy::drawBox(float x, float y, float width, float height)
{
    CGRect rect;
    rect.origin.x = x;
    rect.origin.y = m_fHeight - (y + height);
    rect.size.width = width;
    rect.size.height = height;
    
    CGContextSetFillColorWithColor(m_refContext, m_refColor);
    CGContextFillRect(m_refContext, rect);
}
