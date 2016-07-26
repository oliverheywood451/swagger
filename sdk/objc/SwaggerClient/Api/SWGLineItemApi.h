#import <Foundation/Foundation.h>
#import "SWGLineItem.h"
#import "SWGAddress.h"
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


@interface SWGLineItemApi: NSObject <SWGApi>

extern NSString* kSWGLineItemApiErrorDomain;
extern NSInteger kSWGLineItemApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param orderID ID of the order.
/// @param lineItem 
/// 
///  code:201 message:""
///
/// @return NSObject*
-(NSNumber*) createWithBuyerID: (NSString*) buyerID
    orderID: (NSString*) orderID
    lineItem: (SWGLineItem*) lineItem
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param orderID ID of the order.
/// @param lineItemID ID of the line item.
/// 
///  code:204 message:""
///
/// @return 
-(NSNumber*) deleteWithBuyerID: (NSString*) buyerID
    orderID: (NSString*) orderID
    lineItemID: (NSString*) lineItemID
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param orderID ID of the order.
/// @param lineItemID ID of the line item.
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) getWithBuyerID: (NSString*) buyerID
    orderID: (NSString*) orderID
    lineItemID: (NSString*) lineItemID
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param orderID ID of the order.
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
/// @param orderID ID of the order.
/// @param lineItemID ID of the line item.
/// @param partialLineItem 
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) patchWithBuyerID: (NSString*) buyerID
    orderID: (NSString*) orderID
    lineItemID: (NSString*) lineItemID
    partialLineItem: (SWGLineItem*) partialLineItem
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param orderID ID of the order.
/// @param lineItemID ID of the line item.
/// @param address 
/// 
///  code:200 message:"Partially update the Shipping Address of the Line Item. Not allowed on unsubmitted Line Items where ShippingAddressID has been set. In that case, use the Addresses resource to update the Saved Address."
///
/// @return NSObject*
-(NSNumber*) patchShippingAddressWithBuyerID: (NSString*) buyerID
    orderID: (NSString*) orderID
    lineItemID: (NSString*) lineItemID
    address: (SWGAddress*) address
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param orderID ID of the order.
/// @param lineItemID ID of the line item.
/// @param address 
/// 
///  code:200 message:"Set the Shipping Address of the Line Item. Appropriate only when the Address is not to be saved/reused. To use a Saved Address (i.e. from the Addresses resource), PATCH the Line Item's ShippingAddressID property instead."
///
/// @return NSObject*
-(NSNumber*) setShippingAddressWithBuyerID: (NSString*) buyerID
    orderID: (NSString*) orderID
    lineItemID: (NSString*) lineItemID
    address: (SWGAddress*) address
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param orderID ID of the order.
/// @param lineItemID ID of the line item.
/// @param lineItem 
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) updateWithBuyerID: (NSString*) buyerID
    orderID: (NSString*) orderID
    lineItemID: (NSString*) lineItemID
    lineItem: (SWGLineItem*) lineItem
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;



@end
