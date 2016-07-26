#import <Foundation/Foundation.h>
#import "SWGPriceSchedule.h"
#import "SWGPriceBreak.h"
#import "SWGApi.h"

/**
* OrderCloud
* A full ecommerce backend as a service.
*
* OpenAPI spec version: 0.1
* Contact: ordercloud@four51.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


@interface SWGPriceScheduleApi: NSObject <SWGApi>

extern NSString* kSWGPriceScheduleApiErrorDomain;
extern NSInteger kSWGPriceScheduleApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// 
/// 
///
/// @param priceSchedule 
/// 
///  code:201 message:""
///
/// @return NSObject*
-(NSNumber*) createWithPriceSchedule: (SWGPriceSchedule*) priceSchedule
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param priceScheduleID ID of the price schedule.
/// 
///  code:204 message:""
///
/// @return 
-(NSNumber*) deleteWithPriceScheduleID: (NSString*) priceScheduleID
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// 
///
/// @param priceScheduleID ID of the price schedule.
/// @param quantity Quantity of the price schedule.
/// 
///  code:204 message:""
///
/// @return 
-(NSNumber*) deletePriceBreakWithPriceScheduleID: (NSString*) priceScheduleID
    quantity: (NSNumber*) quantity
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// 
///
/// @param priceScheduleID ID of the price schedule.
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) getWithPriceScheduleID: (NSString*) priceScheduleID
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param search Word or phrase to search for. (optional)
/// @param searchOn Comma-delimited list of fields to search on. (optional)
/// @param sortBy Comma-delimited list of fields to sort by. (optional)
/// @param page Page of results to return. Default: 1 (optional)
/// @param pageSize Number of results to return per page. Default: 20, max: 100. (optional)
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) listWithSearch: (NSString*) search
    searchOn: (NSString*) searchOn
    sortBy: (NSString*) sortBy
    page: (NSNumber*) page
    pageSize: (NSNumber*) pageSize
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param priceScheduleID ID of the price schedule.
/// @param priceSchedule 
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) patchWithPriceScheduleID: (NSString*) priceScheduleID
    priceSchedule: (SWGPriceSchedule*) priceSchedule
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param priceScheduleID ID of the price schedule.
/// @param priceBreak 
/// 
///  code:201 message:""
///
/// @return NSObject*
-(NSNumber*) savePriceBreakWithPriceScheduleID: (NSString*) priceScheduleID
    priceBreak: (SWGPriceBreak*) priceBreak
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param priceScheduleID ID of the price schedule.
/// @param priceSchedule 
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) updateWithPriceScheduleID: (NSString*) priceScheduleID
    priceSchedule: (SWGPriceSchedule*) priceSchedule
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;



@end
