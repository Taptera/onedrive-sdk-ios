//  Copyright 2015 Microsoft Corporation
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal 
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/ or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
// 
//
//  This file was generated and any changes will be overwritten.

#import "ODModels.h"

@interface ODObject()

@property (strong, nonatomic) NSMutableDictionary *dictionary;

@end

@interface ODVideo()
{
}
@end

/**
* The implementation file for type video.
*/

@implementation ODVideo	


- (NSInteger)bitrate
{
    
    if (self.dictionary[@"bitrate"]){
        return [self.dictionary[@"bitrate"] intValue];
    }
    //default value if it doesn't exists
    return [@(0) intValue];
}

- (void)setBitrate:(NSInteger)bitrate
{
    self.dictionary[@"bitrate"] = @(bitrate);
}


- (NSInteger)duration
{
    
    if (self.dictionary[@"duration"]){
        return [self.dictionary[@"duration"] intValue];
    }
    //default value if it doesn't exists
    return [@(0) intValue];
}

- (void)setDuration:(NSInteger)duration
{
    self.dictionary[@"duration"] = @(duration);
}


- (NSInteger)height
{
    
    if (self.dictionary[@"height"]){
        return [self.dictionary[@"height"] intValue];
    }
    //default value if it doesn't exists
    return [@(0) intValue];
}

- (void)setHeight:(NSInteger)height
{
    self.dictionary[@"height"] = @(height);
}


- (NSInteger)width
{
    
    if (self.dictionary[@"width"]){
        return [self.dictionary[@"width"] intValue];
    }
    //default value if it doesn't exists
    return [@(0) intValue];
}

- (void)setWidth:(NSInteger)width
{
    self.dictionary[@"width"] = @(width);
}

@end
