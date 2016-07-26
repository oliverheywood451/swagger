#import "SWGLineItem.h"

@implementation SWGLineItem

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"ID": @"_iD", @"ProductID": @"productID", @"Quantity": @"quantity", @"UnitPrice": @"unitPrice", @"CostCenter": @"costCenter", @"DateNeeded": @"dateNeeded", @"ShippingAccount": @"shippingAccount", @"ShippingAddressID": @"shippingAddressID", @"ShipfromAddressID": @"shipfromAddressID", @"ShipperID": @"shipperID", @"Specs": @"specs", @"xp": @"xp" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_iD", @"productID", @"quantity", @"unitPrice", @"costCenter", @"dateNeeded", @"shippingAccount", @"shippingAddressID", @"shipfromAddressID", @"shipperID", @"specs", @"xp"];
  return [optionalProperties containsObject:propertyName];
}

@end
