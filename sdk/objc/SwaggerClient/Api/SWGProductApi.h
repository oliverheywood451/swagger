#import <Foundation/Foundation.h>
#import "SWGProduct.h"
#import "SWGVariant.h"
#import "SWGProductAssignment.h"
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


@interface SWGProductApi: NSObject <SWGApi>

extern NSString* kSWGProductApiErrorDomain;
extern NSInteger kSWGProductApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// 
/// 
///
/// @param product 
/// 
///  code:201 message:""
///
/// @return NSObject*
-(NSNumber*) createWithProduct: (SWGProduct*) product
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// 
///  code:204 message:""
///
/// @return 
-(NSNumber*) deleteWithProductID: (NSString*) productID
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// 
///
/// @param buyerID ID of the buyer.
/// @param productID ID of the product.
/// @param userID ID of the user. (optional)
/// @param userGroupID ID of the user group. (optional)
/// 
///  code:204 message:"As price schedules aren't assigned to a party without their accompanying product, you don't use Delete Assignment to delete a price schedule. If you need to remove a price schedule assignment, update the assignment to have the price schedule ID as a null. "
///
/// @return 
-(NSNumber*) deleteAssignmentWithBuyerID: (NSString*) buyerID
    productID: (NSString*) productID
    userID: (NSString*) userID
    userGroupID: (NSString*) userGroupID
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// @param overwriteExisting Overwrite existing of the product. (optional)
/// 
///  code:201 message:""
///
/// @return NSObject*
-(NSNumber*) generateVariantsWithProductID: (NSString*) productID
    overwriteExisting: (NSNumber*) overwriteExisting
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) getWithProductID: (NSString*) productID
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// 
///  code:200 message:"Getting the Inventory on an Inventory-enabled product returns two things: the Avalible inventory, and the Reserved inventory. When an Order includes a product on the a lineitem, the total amount of that product is reserved. When that Order is submitted, the products previously reserved for that order are removed from the total inventory and the reserved ammount."
///
/// @return NSObject*
-(NSNumber*) getInventoryWithProductID: (NSString*) productID
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// @param variantID ID of the variant.
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) getVariantWithProductID: (NSString*) productID
    variantID: (NSString*) variantID
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// @param variantID ID of the variant.
/// 
///  code:200 message:"Getting the Variant Inventory will return the Name, Available Inventory and Reserved Inventory for a specific product variant based on the ProductID and VariantID specified. "
///
/// @return NSObject*
-(NSNumber*) getVariantInventoryWithProductID: (NSString*) productID
    variantID: (NSString*) variantID
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
/// @param productID ID of the product. (optional)
/// @param buyerID ID of the buyer. (optional)
/// @param userID ID of the user. (optional)
/// @param userGroupID ID of the user group. (optional)
/// @param level Level of the product. (optional)
/// @param priceScheduleID ID of the price schedule. (optional)
/// @param page Page of results to return. Default: 1 (optional)
/// @param pageSize Number of results to return per page. Default: 20, max: 100. (optional)
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) listAssignmentsWithProductID: (NSString*) productID
    buyerID: (NSString*) buyerID
    userID: (NSString*) userID
    userGroupID: (NSString*) userGroupID
    level: (NSString*) level
    priceScheduleID: (NSString*) priceScheduleID
    page: (NSNumber*) page
    pageSize: (NSNumber*) pageSize
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
-(NSNumber*) listInventoryWithSearch: (NSString*) search
    searchOn: (NSString*) searchOn
    sortBy: (NSString*) sortBy
    page: (NSNumber*) page
    pageSize: (NSNumber*) pageSize
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// @param search Word or phrase to search for. (optional)
/// @param searchOn Comma-delimited list of fields to search on. (optional)
/// @param sortBy Comma-delimited list of fields to sort by. (optional)
/// @param page Page of results to return. Default: 1 (optional)
/// @param pageSize Number of results to return per page. Default: 20, max: 100. (optional)
/// 
///  code:200 message:"Listing the Variant Inventory will return a list of all variants under a specific product and each variant's available and reserved inventory."
///
/// @return NSObject*
-(NSNumber*) listVariantInventoryWithProductID: (NSString*) productID
    search: (NSString*) search
    searchOn: (NSString*) searchOn
    sortBy: (NSString*) sortBy
    page: (NSNumber*) page
    pageSize: (NSNumber*) pageSize
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// @param search Word or phrase to search for. (optional)
/// @param searchOn Comma-delimited list of fields to search on. (optional)
/// @param sortBy Comma-delimited list of fields to sort by. (optional)
/// @param page Page of results to return. Default: 1 (optional)
/// @param pageSize Number of results to return per page. Default: 20, max: 100. (optional)
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) listVariantsWithProductID: (NSString*) productID
    search: (NSString*) search
    searchOn: (NSString*) searchOn
    sortBy: (NSString*) sortBy
    page: (NSNumber*) page
    pageSize: (NSNumber*) pageSize
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// @param product 
/// 
///  code:204 message:""
///
/// @return 
-(NSNumber*) patchWithProductID: (NSString*) productID
    product: (SWGProduct*) product
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// @param variantID ID of the variant.
/// @param variant 
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) patchVariantWithProductID: (NSString*) productID
    variantID: (NSString*) variantID
    variant: (SWGVariant*) variant
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productAssignment 
/// 
///  code:204 message:""
///
/// @return 
-(NSNumber*) saveAssignmentWithProductAssignment: (SWGProductAssignment*) productAssignment
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// @param product 
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) updateWithProductID: (NSString*) productID
    product: (SWGProduct*) product
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// @param inventory Inventory of the product.
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) updateInventoryWithProductID: (NSString*) productID
    inventory: (NSNumber*) inventory
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// @param variantID ID of the variant.
/// @param variant 
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) updateVariantWithProductID: (NSString*) productID
    variantID: (NSString*) variantID
    variant: (SWGVariant*) variant
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// 
/// 
///
/// @param productID ID of the product.
/// @param variantID ID of the variant.
/// @param inventory Inventory of the product.
/// 
///  code:200 message:""
///
/// @return NSObject*
-(NSNumber*) updateVariantInventoryWithProductID: (NSString*) productID
    variantID: (NSString*) variantID
    inventory: (NSNumber*) inventory
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;



@end