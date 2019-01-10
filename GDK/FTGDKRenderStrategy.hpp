//
//  FTGDKRenderStrategy.hpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright � 2019 Apstery. All rights reserved.
//

#ifndef FTGDKRenderStrategy_hpp
#define FTGDKRenderStrategy_hpp

#include "../FTRender/IFTRenderStrategy.hpp"
#include <gtk/gtk.h>

class FTGDKRenderStrategy : public IFTRenderStrategy
{
public:
	FTGDKRenderStrategy(cairo_t *cr);
	virtual void drawBox(float x, float y, float width, float height);

private:
	cairo_t *m_cr;
};

#endif /* FTGDIRenderStrategy_hpp */
