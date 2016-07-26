#import <Foundation/Foundation.h>
#import "SWGObject.h"

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



@protocol SWGBuyerAddress
@end

@interface SWGBuyerAddress : SWGObject


@property(nonatomic) NSNumber* shipping;

@property(nonatomic) NSNumber* billing;

@property(nonatomic) NSString* companyName;

@property(nonatomic) NSString* firstName;

@property(nonatomic) NSString* lastName;

@property(nonatomic) NSString* street1;

@property(nonatomic) NSString* street2;

@property(nonatomic) NSString* city;

@property(nonatomic) NSString* state;

@property(nonatomic) NSString* zip;

@property(nonatomic) NSString* country;

@property(nonatomic) NSString* phone;

@property(nonatomic) NSString* addressName;

@property(nonatomic) NSObject* xp;

@end
