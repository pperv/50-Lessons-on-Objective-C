//
//  PMCrosfiter.h
//  protocolsDZ
//
//  Created by Петр Первухин on 29.04.17.
//  Copyright © 2017 Петр Первухин. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PMJumpers.h"


@interface PMCrosfiter : NSObject <PMJumpers>

@property(strong,nonatomic) NSString* name;

@end
