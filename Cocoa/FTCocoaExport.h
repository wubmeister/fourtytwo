//
//  FTCocoaExport.h
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright © 2019 Apstery. All rights reserved.
//

#ifndef FTCocoaExport_h
#define FTCocoaExport_h

typedef int FTProcessRef;

FTProcessRef FTCocoaCreateProcess(void *ctx, float height);
void FTCocoaDraw(FTProcessRef process);

#endif /* FTCocoaExport_h */
