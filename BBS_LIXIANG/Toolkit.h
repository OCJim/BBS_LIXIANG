//
//  Toolkit.h
//  weitaozhi
//
//  Created by admin  on 13-8-3.
//  Copyright (c) 2013年 com.seuli. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface Toolkit : NSObject

+ (void)saveUserName:(NSString *)userName;
+ (void)saveID:(NSString *)ID;
+ (void)saveName:(NSString *)name;
+ (void)saveToken:(NSString *)token;
+ (void)saveCollectedSections:(NSMutableArray *)sections;
+ (void)saveUserDictionary:(NSDictionary *)user_dic;

+ (NSString *)getUserName;
+ (NSString *)getID;
+ (NSString *)getName;
+ (NSString *)getToken;
+ (NSMutableArray *)getCollectedSections;
+ (NSDictionary *)getUserDictionary;

@end
