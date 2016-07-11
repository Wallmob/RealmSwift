////////////////////////////////////////////////////////////////////////////
//
// Copyright 2016 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

#import "RLMRealm+Sync.h"

/**
 An enum describing all possible endpoints on the Realm Sync server.
 */
typedef NS_ENUM(NSUInteger, RLMSyncServerEndpoint) {
    RLMSyncServerEndpointSessions,
};

/**
 A simple Realm Sync network client that wraps `NSURLSession`.
 */
@interface RLMSyncNetworkClient : NSObject

+ (void)postSyncRequestToEndpoint:(RLMSyncServerEndpoint)endpoint
                             host:(NSString *)host
                             JSON:(NSDictionary *)jsonDictionary
                            error:(NSError **)error
                       completion:(RLMSyncCompletionBlock)completionBlock;

@end
