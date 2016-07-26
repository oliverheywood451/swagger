#import <Foundation/Foundation.h>
#import "SWGShipment.h"
#import "SWGShipmentItem.h"
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


@interface SWGShipmentApi: NSObject <SWGApi>

extern NSString* kSWGShipmentApiErrorDomain;
extern NSInteger kSWGShipmentApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param shipment 
/// 
///  code:201 message:""
///
/// @return NSObject*
-(NSNumber*) createWithBuyerID: (NSString*) buyerID
    shipment: (SWGShipment*) shipment
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param shipmentID ID of the shipment.
/// 
///  code:204 message:""
///
/// @return 
-(NSNumber*) deleteWithBuyerID: (NSString*) buyerID
    shipmentID: (NSString*) shipmentID
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param shipmentID ID of the shipment.
/// @param orderID ID of the order.
/// @param lineItemID ID of the line item.
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) deleteItemWithBuyerID: (NSString*) buyerID
    shipmentID: (NSString*) shipmentID
    orderID: (NSString*) orderID
    lineItemID: (NSString*) lineItemID
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param shipmentID ID of the shipment.
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) getWithBuyerID: (NSString*) buyerID
    shipmentID: (NSString*) shipmentID
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param orderID ID of the order. (optional)
/// @param search Word or phrase to search for. (optional)
/// @param searchOn Comma-delimited list of fields to search on. (optional)
/// @param sortBy Comma-delimited list of fields to sort by. (optional)
/// @param page Page of results to return. Default: 1 (optional)
/// @param pageSize Number of results to return per page. Default: 20, max: 100. (optional)
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) listWithBuyerID: (NSString*) buyerID
    orderID: (NSString*) orderID
    search: (NSString*) search
    searchOn: (NSString*) searchOn
    sortBy: (NSString*) sortBy
    page: (NSNumber*) page
    pageSize: (NSNumber*) pageSize
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param shipmentID ID of the shipment.
/// @param shipment 
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) patchWithBuyerID: (NSString*) buyerID
    shipmentID: (NSString*) shipmentID
    shipment: (SWGShipment*) shipment
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param shipmentID ID of the shipment.
/// @param item 
/// 
///  code:201 message:""
///
/// @return NSObject*
-(NSNumber*) saveItemWithBuyerID: (NSString*) buyerID
    shipmentID: (NSString*) shipmentID
    item: (SWGShipmentItem*) item
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param shipmentID ID of the shipment.
/// @param shipment 
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) updateWithBuyerID: (NSString*) buyerID
    shipmentID: (NSString*) shipmentID
    shipment: (SWGShipment*) shipment
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;



@end
