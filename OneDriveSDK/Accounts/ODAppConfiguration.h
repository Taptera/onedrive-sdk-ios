//  Copyright 2015 Microsoft Corporation
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
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


@class ODServiceInfo;
#import <Foundation/Foundation.h>
#import "ODHttpProvider.h"
#import "ODAccountStoreProtocol.h"
#import "ODAuthConstants.h"
#import "ODServiceInfoProvider.h"
#import "ODAuthProvider.h"
#import "ODLoggerProtocol.h"

/**
 Configuration for the application
 All app information should match your app portal with Microsoft Accounts or Azure Active Directory
 visit https://dev.onedrive.com/README.htm for more information
 */
@interface ODAppConfiguration : NSObject

/**
 Application Id for OneDrive Microsoft Account 
 @see https://dev.onedrive.com/auth/msa_oauth.htm for registration information
 */
@property (strong, nonatomic) NSString *microsoftAccountAppId;

/**
 Scopes to be used for OneDrive Microsoft Account 
 @see https://dev.onedrive.com/auth/msa_oauth.htm for registration information
 */
@property (strong, nonatomic) NSArray  *microsoftAccountScopes;

/**
 Any flags to be passed into the ODClient if the client is a OneDrive Microsoft Account 
 */
@property (strong, nonatomic) NSDictionary *microsoftAccountFlags;

/**
 Application Id for OneDrive for Business 
 @see https://dev.onedrive.com/auth/aad_oauth.htm for registration information
 */
@property (strong, nonatomic) NSString *activeDirectoryAppId;

/**
 Redirect URL for OneDrive for Business 
 @see https://dev.onedrive.com/auth/aad_oauth.htm for registration information
 @warning this must be the same as the RedirectURL provided in the Azure Active Directory portal
 */
@property (strong, nonatomic) NSString *activeDirectoryRedirectURL;

/**
 Scopes to be used for OneDrive for Business @see https://dev.onedrive.com/auth/aad_oauth.htm for registration information
 */
@property (strong, nonatomic) NSArray  *activeDirectoryScopes;

/**
 Any flags to be passed into the ODClient if the client is a OneDrive for Business account 
 @see [ODClient serviceFlags]
 */
@property (strong, nonatomic) NSDictionary *activeDirectoryFlags;

/**
 The parent view controller to present the Authentication View controller on top of
 @warning if no ParentAuthController is provided, the default will be the root view controller of the application
 */
@property (strong, nonatomic) UIViewController *parentAuthController;

/**
 The Service Info Provider to be used to discovery the correct authentication service
 @warning if this is nil you must provide an authentication provider
 @see authProvider
 */
@property (strong, nonatomic) ODServiceInfoProvider *serviceInfoProvider;

/**
 The httpProvider to be used for all network requests
 @warning this must not be nil
 */
@property (strong, nonatomic) id <ODHttpProvider> httpProvider;

/**
 The accountStore to be used for persistent access to the service
 @warning if this is nil there will be no storage of accounts, users will have to sign in every time they re-open the application
 */
@property (strong, nonatomic) id <ODAccountStore> accountStore;

/**
 The Authentication Provider to be used.
 @warning This may be nil, if it is there must be an ODServiceInfoProvider to discover the correct authentication provider to use
 @see serviceInfoProvider
 */
@property (strong, nonatomic) id <ODAuthProvider> authProvider;

/**
 The logger to be used in the ODClient
 */
@property (strong, nonatomic) id <ODLogger> logger;

@end

