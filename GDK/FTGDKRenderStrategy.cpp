//
//  FTGDKRenderStrategy.cpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright � 2019 Apstery. All rights reserved.
//

#include "FTGDKRenderStrategy.hpp"

FTGDKRenderStrategy::FTGDKRenderStrategy(cairo_t *cr) : m_cr(cr) {}

void FTGDKRenderStrategy::drawBox(float x, float y, float width, float height)
{
    GdkRGBA color = { 0.88, 0.88, 0.88, 1.0 };
    cairo_rectangle(m_cr, x, y, width, height);
    gdk_cairo_set_source_rgba(m_cr, &color);

    cairo_fill(m_cr);
}
