//
//  FTCocoa.hpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright © 2019 Apstery. All rights reserved.
//

#ifndef FTCocoa_hpp
#define FTCocoa_hpp

#include <ApplicationServices/ApplicationServices.h>

typedef int FTProcessRef;

#ifdef __cplusplus
extern "C" {
#endif

FTProcessRef FTCocoaCreateProcess(void *ctx, float height);
void FTCocoaDraw(FTProcessRef process);

#ifdef __cplusplus
}
#endif

#endif /* FTCocoa_hpp */
