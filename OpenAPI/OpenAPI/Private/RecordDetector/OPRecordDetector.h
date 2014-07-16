//
//  RecordHelper.h
//  RecordAndRecognize
//
//  Created by Eugene Polyakov on 4/19/13.
//  Copyright (c) 2013 Eugene Polyakov. All rights reserved.
//

#import "OPRecordDetectorDelegate.h"

@interface OPRecordDetector : NSObject

@property (nonatomic, weak) id <OPRecordDetectorDelegate> delegate;


- (void)start;
- (void)stop;
- (void)cancel;

@end
