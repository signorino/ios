//
//  HandleCredentials.h
//  Owncloud iOs Client
//
//  Created by Noelia Alvarez on 08/08/2017.
//
//

/*
 Copyright (C) 2017, ownCloud GmbH.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <Foundation/Foundation.h>
#import "CredentialsDto.h"
#import "OCCommunication.h"
#import "UtilsUrls.h"
#import "AppDelegate.h"

@interface HandleCredentials : NSObject

+(void)setUserAgentAndCredentials:(CredentialsDto *)credentials ofSharedOCCommunication:(OCCommunication *)sharedOCCommunication;


@end
