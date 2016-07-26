# OrderCloud
A full ecommerce backend as a service.

This Python package is automatically generated by the [Swagger Codegen](https://github.com/swagger-api/swagger-codegen) project:

- API version: 0.1
- Package version: 1.0.0
- Build date: 2016-07-26T18:52:23.416Z
- Build package: class io.swagger.codegen.languages.PythonClientCodegen
For more information, please visit [http://public.four51.com/](http://public.four51.com/)

## Requirements.

Python 2.7 and 3.4+

## Installation & Usage
### pip install

If the python package is hosted on Github, you can install directly from Github

```sh
pip install git+https://github.com/GIT_USER_ID/GIT_REPO_ID.git
```
(you may need to run `pip` with root permission: `sudo pip install git+https://github.com/GIT_USER_ID/GIT_REPO_ID.git`)

Then import the package:
```python
import OrderCloud 
```

### Setuptools

Install via [Setuptools](http://pypi.python.org/pypi/setuptools).

```sh
python setup.py install --user
```
(or `sudo python setup.py install` to install the package for all users)

Then import the package:
```python
import OrderCloud
```

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```python
#Import the OrderCloud SDK
import OrderCloud as oc

#Authenticate so we can use the API 
oc.auth.login("<<username>>","<<password>>","<<client_id>>","FullAccess")
#Get the current user
print(oc.MeApi().get())

```

## Documentation for API Endpoints

All URIs are relative to *https://api.ordercloud.io/v1*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AddressApi* | [**create**](docs/AddressApi.md#create) | **POST** /buyers/{buyerID}/addresses | 
*AddressApi* | [**delete**](docs/AddressApi.md#delete) | **DELETE** /buyers/{buyerID}/addresses/{addressID} | 
*AddressApi* | [**delete_assignment**](docs/AddressApi.md#delete_assignment) | **DELETE** /buyers/{buyerID}/addresses/{addressID}/assignments | 
*AddressApi* | [**get**](docs/AddressApi.md#get) | **GET** /buyers/{buyerID}/addresses/{addressID} | 
*AddressApi* | [**list**](docs/AddressApi.md#list) | **GET** /buyers/{buyerID}/addresses | 
*AddressApi* | [**list_assignments**](docs/AddressApi.md#list_assignments) | **GET** /buyers/{buyerID}/addresses/assignments | 
*AddressApi* | [**patch**](docs/AddressApi.md#patch) | **PATCH** /buyers/{buyerID}/addresses/{addressID} | 
*AddressApi* | [**save_assignment**](docs/AddressApi.md#save_assignment) | **POST** /buyers/{buyerID}/addresses/assignments | 
*AddressApi* | [**update**](docs/AddressApi.md#update) | **PUT** /buyers/{buyerID}/addresses/{addressID} | 
*AdminUserApi* | [**create**](docs/AdminUserApi.md#create) | **POST** /adminusers | 
*AdminUserApi* | [**delete**](docs/AdminUserApi.md#delete) | **DELETE** /adminusers/{userID} | 
*AdminUserApi* | [**get**](docs/AdminUserApi.md#get) | **GET** /adminusers/{userID} | 
*AdminUserApi* | [**list**](docs/AdminUserApi.md#list) | **GET** /adminusers | 
*AdminUserApi* | [**patch**](docs/AdminUserApi.md#patch) | **PATCH** /adminusers/{userID} | 
*AdminUserApi* | [**update**](docs/AdminUserApi.md#update) | **PUT** /adminusers/{userID} | 
*ApprovalRuleApi* | [**create**](docs/ApprovalRuleApi.md#create) | **POST** /buyers/{buyerID}/approvalrules | 
*ApprovalRuleApi* | [**delete**](docs/ApprovalRuleApi.md#delete) | **DELETE** /buyers/{buyerID}/approvalrules/{approvalRuleID} | 
*ApprovalRuleApi* | [**get**](docs/ApprovalRuleApi.md#get) | **GET** /buyers/{buyerID}/approvalrules/{approvalRuleID} | 
*ApprovalRuleApi* | [**list**](docs/ApprovalRuleApi.md#list) | **GET** /buyers/{buyerID}/approvalrules | 
*ApprovalRuleApi* | [**patch**](docs/ApprovalRuleApi.md#patch) | **PATCH** /buyers/{buyerID}/approvalrules/{approvalRuleID} | 
*ApprovalRuleApi* | [**update**](docs/ApprovalRuleApi.md#update) | **PUT** /buyers/{buyerID}/approvalrules/{approvalRuleID} | 
*BuyerApi* | [**create**](docs/BuyerApi.md#create) | **POST** /buyers | 
*BuyerApi* | [**delete**](docs/BuyerApi.md#delete) | **DELETE** /buyers/{buyerID} | 
*BuyerApi* | [**get**](docs/BuyerApi.md#get) | **GET** /buyers/{buyerID} | 
*BuyerApi* | [**list**](docs/BuyerApi.md#list) | **GET** /buyers | 
*BuyerApi* | [**update**](docs/BuyerApi.md#update) | **PUT** /buyers/{buyerID} | 
*CategoryApi* | [**create**](docs/CategoryApi.md#create) | **POST** /buyers/{buyerID}/categories | 
*CategoryApi* | [**delete**](docs/CategoryApi.md#delete) | **DELETE** /buyers/{buyerID}/categories/{categoryID} | 
*CategoryApi* | [**delete_assignment**](docs/CategoryApi.md#delete_assignment) | **DELETE** /buyers/{buyerID}/categories/{categoryID}/assignments | 
*CategoryApi* | [**delete_product_assignment**](docs/CategoryApi.md#delete_product_assignment) | **DELETE** /buyers/{buyerID}/categories/{categoryID}/productassignments/{productID} | 
*CategoryApi* | [**get**](docs/CategoryApi.md#get) | **GET** /buyers/{buyerID}/categories/{categoryID} | 
*CategoryApi* | [**list**](docs/CategoryApi.md#list) | **GET** /buyers/{buyerID}/categories | 
*CategoryApi* | [**list_assignments**](docs/CategoryApi.md#list_assignments) | **GET** /buyers/{buyerID}/categories/assignments | 
*CategoryApi* | [**list_children**](docs/CategoryApi.md#list_children) | **GET** /buyers/{buyerID}/categories/{parentID}/categories | 
*CategoryApi* | [**list_product_assignments**](docs/CategoryApi.md#list_product_assignments) | **GET** /buyers/{buyerID}/categories/productassignments | 
*CategoryApi* | [**patch**](docs/CategoryApi.md#patch) | **PATCH** /buyers/{buyerID}/categories/{categoryID} | 
*CategoryApi* | [**save_assignment**](docs/CategoryApi.md#save_assignment) | **POST** /buyers/{buyerID}/categories/assignments | 
*CategoryApi* | [**save_product_assignment**](docs/CategoryApi.md#save_product_assignment) | **POST** /buyers/{buyerID}/categories/productassignments | 
*CategoryApi* | [**update**](docs/CategoryApi.md#update) | **PUT** /buyers/{buyerID}/categories/{categoryID} | 
*CostCenterApi* | [**create**](docs/CostCenterApi.md#create) | **POST** /buyers/{buyerID}/costcenters | 
*CostCenterApi* | [**delete**](docs/CostCenterApi.md#delete) | **DELETE** /buyers/{buyerID}/costcenters/{costCenterID} | 
*CostCenterApi* | [**delete_assignment**](docs/CostCenterApi.md#delete_assignment) | **DELETE** /buyers/{buyerID}/costcenters/{costCenterID}/assignments | 
*CostCenterApi* | [**get**](docs/CostCenterApi.md#get) | **GET** /buyers/{buyerID}/costcenters/{costCenterID} | 
*CostCenterApi* | [**list**](docs/CostCenterApi.md#list) | **GET** /buyers/{buyerID}/costcenters | 
*CostCenterApi* | [**list_assignments**](docs/CostCenterApi.md#list_assignments) | **GET** /buyers/{buyerID}/costcenters/assignments | 
*CostCenterApi* | [**patch**](docs/CostCenterApi.md#patch) | **PATCH** /buyers/{buyerID}/costcenters/{costCenterID} | 
*CostCenterApi* | [**save_assignment**](docs/CostCenterApi.md#save_assignment) | **POST** /buyers/{buyerID}/costcenters/assignments | 
*CostCenterApi* | [**update**](docs/CostCenterApi.md#update) | **PUT** /buyers/{buyerID}/costcenters/{costCenterID} | 
*CreditCardApi* | [**create**](docs/CreditCardApi.md#create) | **POST** /buyers/{buyerID}/creditcards | 
*CreditCardApi* | [**delete**](docs/CreditCardApi.md#delete) | **DELETE** /buyers/{buyerID}/creditcards/{creditCardID} | 
*CreditCardApi* | [**delete_assignment**](docs/CreditCardApi.md#delete_assignment) | **DELETE** /buyers/{buyerID}/creditcards/{creditCardID}/assignments | 
*CreditCardApi* | [**get**](docs/CreditCardApi.md#get) | **GET** /buyers/{buyerID}/creditcards/{creditCardID} | 
*CreditCardApi* | [**list**](docs/CreditCardApi.md#list) | **GET** /buyers/{buyerID}/creditcards | 
*CreditCardApi* | [**list_assignments**](docs/CreditCardApi.md#list_assignments) | **GET** /buyers/{buyerID}/creditcards/assignments | 
*CreditCardApi* | [**patch**](docs/CreditCardApi.md#patch) | **PATCH** /buyers/{buyerID}/creditcards/{creditCardID} | 
*CreditCardApi* | [**save_assignment**](docs/CreditCardApi.md#save_assignment) | **POST** /buyers/{buyerID}/creditcards/assignments | 
*CreditCardApi* | [**update**](docs/CreditCardApi.md#update) | **PUT** /buyers/{buyerID}/creditcards/{creditCardID} | 
*EmailTemplateApi* | [**get**](docs/EmailTemplateApi.md#get) | **GET** /buyers/{buyerID}/emailtemplates/{emailTemplateType} | 
*EmailTemplateApi* | [**patch**](docs/EmailTemplateApi.md#patch) | **PATCH** /buyers/{buyerID}/emailtemplates/{emailTemplateType} | 
*EmailTemplateApi* | [**reset_to_default**](docs/EmailTemplateApi.md#reset_to_default) | **DELETE** /buyers/{buyerID}/emailtemplates/{emailTemplateType} | 
*EmailTemplateApi* | [**update**](docs/EmailTemplateApi.md#update) | **PUT** /buyers/{buyerID}/emailtemplates/{emailTemplateType} | 
*FileApi* | [**get**](docs/FileApi.md#get) | **GET** /files/{fileID} | 
*FileApi* | [**list**](docs/FileApi.md#list) | **GET** /files | 
*FileApi* | [**post_file_data**](docs/FileApi.md#post_file_data) | **POST** /files | 
*LineItemApi* | [**create**](docs/LineItemApi.md#create) | **POST** /buyers/{buyerID}/orders/{orderID}/lineitems | 
*LineItemApi* | [**delete**](docs/LineItemApi.md#delete) | **DELETE** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID} | 
*LineItemApi* | [**get**](docs/LineItemApi.md#get) | **GET** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID} | 
*LineItemApi* | [**list**](docs/LineItemApi.md#list) | **GET** /buyers/{buyerID}/orders/{orderID}/lineitems | 
*LineItemApi* | [**patch**](docs/LineItemApi.md#patch) | **PATCH** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID} | 
*LineItemApi* | [**patch_shipping_address**](docs/LineItemApi.md#patch_shipping_address) | **PATCH** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID}/shipto | 
*LineItemApi* | [**set_shipping_address**](docs/LineItemApi.md#set_shipping_address) | **PUT** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID}/shipto | 
*LineItemApi* | [**update**](docs/LineItemApi.md#update) | **PUT** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID} | 
*MeApi* | [**create_address**](docs/MeApi.md#create_address) | **POST** /me/addresses | 
*MeApi* | [**create_credit_card**](docs/MeApi.md#create_credit_card) | **POST** /me/creditcards | 
*MeApi* | [**delete_address**](docs/MeApi.md#delete_address) | **DELETE** /me/addresses/{addressID} | 
*MeApi* | [**delete_credit_card**](docs/MeApi.md#delete_credit_card) | **DELETE** /me/creditcards/{creditcardID} | 
*MeApi* | [**get**](docs/MeApi.md#get) | **GET** /me | 
*MeApi* | [**get_address**](docs/MeApi.md#get_address) | **GET** /me/addresses/{addressID} | 
*MeApi* | [**get_credit_card**](docs/MeApi.md#get_credit_card) | **GET** /me/creditcards/{creditcardID} | 
*MeApi* | [**get_order**](docs/MeApi.md#get_order) | **GET** /me/orders/{orderID} | 
*MeApi* | [**get_product**](docs/MeApi.md#get_product) | **GET** /me/products/{productID} | 
*MeApi* | [**get_promotion**](docs/MeApi.md#get_promotion) | **GET** /me/promotions/{promotionID} | 
*MeApi* | [**get_spec**](docs/MeApi.md#get_spec) | **GET** /me/products/{productID}/specs/{specID} | 
*MeApi* | [**list_addresses**](docs/MeApi.md#list_addresses) | **GET** /me/addresses | 
*MeApi* | [**list_categories**](docs/MeApi.md#list_categories) | **GET** /me/categories | 
*MeApi* | [**list_cost_centers**](docs/MeApi.md#list_cost_centers) | **GET** /me/costcenters | 
*MeApi* | [**list_credit_cards**](docs/MeApi.md#list_credit_cards) | **GET** /me/creditcards | 
*MeApi* | [**list_incoming_orders**](docs/MeApi.md#list_incoming_orders) | **GET** /me/orders/incoming | 
*MeApi* | [**list_outgoing_orders**](docs/MeApi.md#list_outgoing_orders) | **GET** /me/orders/outgoing | 
*MeApi* | [**list_products**](docs/MeApi.md#list_products) | **GET** /me/products | 
*MeApi* | [**list_promotions**](docs/MeApi.md#list_promotions) | **GET** /me/promotions | 
*MeApi* | [**list_specs**](docs/MeApi.md#list_specs) | **GET** /me/products/{productID}/specs | 
*MeApi* | [**list_subcategories**](docs/MeApi.md#list_subcategories) | **GET** /me/categories/{parentID}/categories | 
*MeApi* | [**list_user_groups**](docs/MeApi.md#list_user_groups) | **GET** /me/usergroups | 
*MeApi* | [**patch**](docs/MeApi.md#patch) | **PATCH** /me | 
*MeApi* | [**patch_address**](docs/MeApi.md#patch_address) | **PATCH** /me/addresses/{addressID} | 
*MeApi* | [**patch_credit_card**](docs/MeApi.md#patch_credit_card) | **PATCH** /me/creditcards/{creditcardID} | 
*MeApi* | [**update**](docs/MeApi.md#update) | **PUT** /me | 
*MeApi* | [**update_address**](docs/MeApi.md#update_address) | **PUT** /me/addresses/{addressID} | 
*MeApi* | [**update_credit_card**](docs/MeApi.md#update_credit_card) | **PUT** /me/creditcards/{creditcardID} | 
*OrderApi* | [**add_promotion**](docs/OrderApi.md#add_promotion) | **POST** /buyers/{buyerID}/orders/{orderID}/promotions/{promoCode} | 
*OrderApi* | [**approve**](docs/OrderApi.md#approve) | **POST** /buyers/{buyerID}/orders/{orderID}/approve | 
*OrderApi* | [**cancel**](docs/OrderApi.md#cancel) | **POST** /buyers/{buyerID}/orders/{orderID}/cancel | 
*OrderApi* | [**create**](docs/OrderApi.md#create) | **POST** /buyers/{buyerID}/orders | 
*OrderApi* | [**decline**](docs/OrderApi.md#decline) | **POST** /buyers/{buyerID}/orders/{orderID}/decline | 
*OrderApi* | [**delete**](docs/OrderApi.md#delete) | **DELETE** /buyers/{buyerID}/orders/{orderID} | 
*OrderApi* | [**get**](docs/OrderApi.md#get) | **GET** /buyers/{buyerID}/orders/{orderID} | 
*OrderApi* | [**list_approvals**](docs/OrderApi.md#list_approvals) | **GET** /buyers/{buyerID}/orders/{orderID}/approvals | 
*OrderApi* | [**list_eligible_approvers**](docs/OrderApi.md#list_eligible_approvers) | **GET** /buyers/{buyerID}/orders/{orderID}/eligibleapprovers | 
*OrderApi* | [**list_incoming**](docs/OrderApi.md#list_incoming) | **GET** /orders/incoming | 
*OrderApi* | [**list_outgoing**](docs/OrderApi.md#list_outgoing) | **GET** /orders/outgoing | 
*OrderApi* | [**list_promotions**](docs/OrderApi.md#list_promotions) | **GET** /buyers/{buyerID}/orders/{orderID}/promotions | 
*OrderApi* | [**patch**](docs/OrderApi.md#patch) | **PATCH** /buyers/{buyerID}/orders/{orderID} | 
*OrderApi* | [**patch_billing_address**](docs/OrderApi.md#patch_billing_address) | **PATCH** /buyers/{buyerID}/orders/{orderID}/billto | 
*OrderApi* | [**patch_shipping_address**](docs/OrderApi.md#patch_shipping_address) | **PATCH** /buyers/{buyerID}/orders/{orderID}/shipto | 
*OrderApi* | [**remove_promotion**](docs/OrderApi.md#remove_promotion) | **DELETE** /buyers/{buyerID}/orders/{orderID}/promotions/{promoCode} | 
*OrderApi* | [**set_billing_address**](docs/OrderApi.md#set_billing_address) | **PUT** /buyers/{buyerID}/orders/{orderID}/billto | 
*OrderApi* | [**set_shipping_address**](docs/OrderApi.md#set_shipping_address) | **PUT** /buyers/{buyerID}/orders/{orderID}/shipto | 
*OrderApi* | [**ship**](docs/OrderApi.md#ship) | **POST** /buyers/{buyerID}/orders/{orderID}/ship | 
*OrderApi* | [**submit**](docs/OrderApi.md#submit) | **POST** /buyers/{buyerID}/orders/{orderID}/submit | 
*OrderApi* | [**transfer_temp_user_order**](docs/OrderApi.md#transfer_temp_user_order) | **PUT** /buyers/{buyerID}/orders | 
*OrderApi* | [**update**](docs/OrderApi.md#update) | **PUT** /buyers/{buyerID}/orders/{orderID} | 
*PasswordResetApi* | [**reset_password**](docs/PasswordResetApi.md#reset_password) | **PUT** /password/reset/{verificationCode} | 
*PasswordResetApi* | [**send_verification_code**](docs/PasswordResetApi.md#send_verification_code) | **POST** /password/reset | 
*PaymentApi* | [**create**](docs/PaymentApi.md#create) | **POST** /buyers/{buyerID}/orders/{orderID}/payments | 
*PaymentApi* | [**create_transaction**](docs/PaymentApi.md#create_transaction) | **POST** /buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions | 
*PaymentApi* | [**delete**](docs/PaymentApi.md#delete) | **DELETE** /buyers/{buyerID}/orders/{orderID}/payments/{paymentID} | 
*PaymentApi* | [**delete_transaction**](docs/PaymentApi.md#delete_transaction) | **DELETE** /buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions/{transactionID} | 
*PaymentApi* | [**get**](docs/PaymentApi.md#get) | **GET** /buyers/{buyerID}/orders/{orderID}/payments/{paymentID} | 
*PaymentApi* | [**list**](docs/PaymentApi.md#list) | **GET** /buyers/{buyerID}/orders/{orderID}/payments | 
*PaymentApi* | [**patch**](docs/PaymentApi.md#patch) | **PATCH** /buyers/{buyerID}/orders/{orderID}/payments/{paymentID} | 
*PaymentApi* | [**patch_transaction**](docs/PaymentApi.md#patch_transaction) | **PATCH** /buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions/{transactionID} | 
*PaymentApi* | [**update**](docs/PaymentApi.md#update) | **PUT** /buyers/{buyerID}/orders/{orderID}/payments/{paymentID} | 
*PaymentApi* | [**update_transaction**](docs/PaymentApi.md#update_transaction) | **PUT** /buyers/{buyerID}/orders/{orderID}/payments/{paymentID}/transactions/{transactionID} | 
*PriceScheduleApi* | [**create**](docs/PriceScheduleApi.md#create) | **POST** /priceschedules | 
*PriceScheduleApi* | [**delete**](docs/PriceScheduleApi.md#delete) | **DELETE** /priceschedules/{priceScheduleID} | 
*PriceScheduleApi* | [**delete_price_break**](docs/PriceScheduleApi.md#delete_price_break) | **DELETE** /priceschedules/{priceScheduleID}/PriceBreaks | 
*PriceScheduleApi* | [**get**](docs/PriceScheduleApi.md#get) | **GET** /priceschedules/{priceScheduleID} | 
*PriceScheduleApi* | [**list**](docs/PriceScheduleApi.md#list) | **GET** /priceschedules | 
*PriceScheduleApi* | [**patch**](docs/PriceScheduleApi.md#patch) | **PATCH** /priceschedules/{priceScheduleID} | 
*PriceScheduleApi* | [**save_price_break**](docs/PriceScheduleApi.md#save_price_break) | **POST** /priceschedules/{priceScheduleID}/PriceBreaks | 
*PriceScheduleApi* | [**update**](docs/PriceScheduleApi.md#update) | **PUT** /priceschedules/{priceScheduleID} | 
*ProductApi* | [**create**](docs/ProductApi.md#create) | **POST** /products | 
*ProductApi* | [**delete**](docs/ProductApi.md#delete) | **DELETE** /products/{productID} | 
*ProductApi* | [**delete_assignment**](docs/ProductApi.md#delete_assignment) | **DELETE** /products/{productID}/assignments/{buyerID} | 
*ProductApi* | [**generate_variants**](docs/ProductApi.md#generate_variants) | **POST** /products/{productID}/variants/generate | 
*ProductApi* | [**get**](docs/ProductApi.md#get) | **GET** /products/{productID} | 
*ProductApi* | [**get_inventory**](docs/ProductApi.md#get_inventory) | **GET** /products/{productID}/inventory | 
*ProductApi* | [**get_variant**](docs/ProductApi.md#get_variant) | **GET** /products/{productID}/variants/{variantID} | 
*ProductApi* | [**get_variant_inventory**](docs/ProductApi.md#get_variant_inventory) | **GET** /products/{productID}/variants/inventory/{variantID} | 
*ProductApi* | [**list**](docs/ProductApi.md#list) | **GET** /products | 
*ProductApi* | [**list_assignments**](docs/ProductApi.md#list_assignments) | **GET** /products/assignments | 
*ProductApi* | [**list_inventory**](docs/ProductApi.md#list_inventory) | **GET** /products/inventory | 
*ProductApi* | [**list_variant_inventory**](docs/ProductApi.md#list_variant_inventory) | **GET** /products/{productID}/variants/inventory | 
*ProductApi* | [**list_variants**](docs/ProductApi.md#list_variants) | **GET** /products/{productID}/variants | 
*ProductApi* | [**patch**](docs/ProductApi.md#patch) | **PATCH** /products/{productID} | 
*ProductApi* | [**patch_variant**](docs/ProductApi.md#patch_variant) | **PATCH** /products/{productID}/variants/{variantID} | 
*ProductApi* | [**save_assignment**](docs/ProductApi.md#save_assignment) | **POST** /products/assignments | 
*ProductApi* | [**update**](docs/ProductApi.md#update) | **PUT** /products/{productID} | 
*ProductApi* | [**update_inventory**](docs/ProductApi.md#update_inventory) | **PUT** /products/{productID}/inventory/{inventory} | 
*ProductApi* | [**update_variant**](docs/ProductApi.md#update_variant) | **PUT** /products/{productID}/variants/{variantID} | 
*ProductApi* | [**update_variant_inventory**](docs/ProductApi.md#update_variant_inventory) | **PUT** /products/{productID}/variants/inventory/{variantID}/{inventory} | 
*PromotionApi* | [**create**](docs/PromotionApi.md#create) | **POST** /promotions | 
*PromotionApi* | [**delete**](docs/PromotionApi.md#delete) | **DELETE** /promotions/{promotionID} | 
*PromotionApi* | [**delete_assignment**](docs/PromotionApi.md#delete_assignment) | **DELETE** /promotions/{promotionID}/assignments | 
*PromotionApi* | [**get**](docs/PromotionApi.md#get) | **GET** /promotions/{promotionID} | 
*PromotionApi* | [**list**](docs/PromotionApi.md#list) | **GET** /promotions | 
*PromotionApi* | [**list_assignments**](docs/PromotionApi.md#list_assignments) | **GET** /promotions/assignments | 
*PromotionApi* | [**patch**](docs/PromotionApi.md#patch) | **PATCH** /promotions/{promotionID} | 
*PromotionApi* | [**save_assignment**](docs/PromotionApi.md#save_assignment) | **POST** /promotions/assignments | 
*PromotionApi* | [**update**](docs/PromotionApi.md#update) | **PUT** /promotions/{promotionID} | 
*SecurityProfileApi* | [**get**](docs/SecurityProfileApi.md#get) | **GET** /SecurityProfiles/{securityProfileID} | 
*SecurityProfileApi* | [**list**](docs/SecurityProfileApi.md#list) | **GET** /SecurityProfiles | 
*ShipmentApi* | [**create**](docs/ShipmentApi.md#create) | **POST** /buyers/{buyerID}/shipments | 
*ShipmentApi* | [**delete**](docs/ShipmentApi.md#delete) | **DELETE** /buyers/{buyerID}/shipments/{shipmentID} | 
*ShipmentApi* | [**delete_item**](docs/ShipmentApi.md#delete_item) | **DELETE** /buyers/{buyerID}/shipments/{shipmentID}/items/{orderID}/{lineItemID} | 
*ShipmentApi* | [**get**](docs/ShipmentApi.md#get) | **GET** /buyers/{buyerID}/shipments/{shipmentID} | 
*ShipmentApi* | [**list**](docs/ShipmentApi.md#list) | **GET** /buyers/{buyerID}/shipments | 
*ShipmentApi* | [**patch**](docs/ShipmentApi.md#patch) | **PATCH** /buyers/{buyerID}/shipments/{shipmentID} | 
*ShipmentApi* | [**save_item**](docs/ShipmentApi.md#save_item) | **POST** /buyers/{buyerID}/shipments/{shipmentID}/items | 
*ShipmentApi* | [**update**](docs/ShipmentApi.md#update) | **PUT** /buyers/{buyerID}/shipments/{shipmentID} | 
*SpecApi* | [**create**](docs/SpecApi.md#create) | **POST** /specs | 
*SpecApi* | [**create_option**](docs/SpecApi.md#create_option) | **POST** /specs/{specID}/options | 
*SpecApi* | [**delete**](docs/SpecApi.md#delete) | **DELETE** /specs/{specID} | 
*SpecApi* | [**delete_option**](docs/SpecApi.md#delete_option) | **DELETE** /specs/{specID}/options/{optionID} | 
*SpecApi* | [**delete_product_assignment**](docs/SpecApi.md#delete_product_assignment) | **DELETE** /specs/{specID}/productassignments/{productID} | 
*SpecApi* | [**get**](docs/SpecApi.md#get) | **GET** /specs/{specID} | 
*SpecApi* | [**get_option**](docs/SpecApi.md#get_option) | **GET** /specs/{specID}/options/{optionID} | 
*SpecApi* | [**list**](docs/SpecApi.md#list) | **GET** /specs | 
*SpecApi* | [**list_options**](docs/SpecApi.md#list_options) | **GET** /specs/{specID}/options | 
*SpecApi* | [**list_product_assignments**](docs/SpecApi.md#list_product_assignments) | **GET** /specs/productassignments | 
*SpecApi* | [**patch**](docs/SpecApi.md#patch) | **PATCH** /specs/{specID} | 
*SpecApi* | [**patch_option**](docs/SpecApi.md#patch_option) | **PATCH** /specs/{specID}/options/{optionID} | 
*SpecApi* | [**save_product_assignment**](docs/SpecApi.md#save_product_assignment) | **POST** /specs/productassignments | 
*SpecApi* | [**update**](docs/SpecApi.md#update) | **PUT** /specs/{specID} | 
*SpecApi* | [**update_option**](docs/SpecApi.md#update_option) | **PUT** /specs/{specID}/options/{optionID} | 
*SpendingAccountApi* | [**create**](docs/SpendingAccountApi.md#create) | **POST** /buyers/{buyerID}/spendingaccounts | 
*SpendingAccountApi* | [**delete**](docs/SpendingAccountApi.md#delete) | **DELETE** /buyers/{buyerID}/spendingaccounts/{spendingAccountID} | 
*SpendingAccountApi* | [**delete_assignment**](docs/SpendingAccountApi.md#delete_assignment) | **DELETE** /buyers/{buyerID}/spendingaccounts/{spendingAccountID}/assignments | 
*SpendingAccountApi* | [**get**](docs/SpendingAccountApi.md#get) | **GET** /buyers/{buyerID}/spendingaccounts/{spendingAccountID} | 
*SpendingAccountApi* | [**list**](docs/SpendingAccountApi.md#list) | **GET** /buyers/{buyerID}/spendingaccounts | 
*SpendingAccountApi* | [**list_assignments**](docs/SpendingAccountApi.md#list_assignments) | **GET** /buyers/{buyerID}/spendingaccounts/assignments | 
*SpendingAccountApi* | [**patch**](docs/SpendingAccountApi.md#patch) | **PATCH** /buyers/{buyerID}/spendingaccounts/{spendingAccountID} | 
*SpendingAccountApi* | [**save_assignment**](docs/SpendingAccountApi.md#save_assignment) | **POST** /buyers/{buyerID}/spendingaccounts/assignments | 
*SpendingAccountApi* | [**update**](docs/SpendingAccountApi.md#update) | **PUT** /buyers/{buyerID}/spendingaccounts/{spendingAccountID} | 
*UserApi* | [**create**](docs/UserApi.md#create) | **POST** /buyers/{buyerID}/users | 
*UserApi* | [**delete**](docs/UserApi.md#delete) | **DELETE** /buyers/{buyerID}/users/{userID} | 
*UserApi* | [**get**](docs/UserApi.md#get) | **GET** /buyers/{buyerID}/users/{userID} | 
*UserApi* | [**get_access_token**](docs/UserApi.md#get_access_token) | **POST** /buyers/{buyerID}/users/{userID}/accesstoken | 
*UserApi* | [**list**](docs/UserApi.md#list) | **GET** /buyers/{buyerID}/users | 
*UserApi* | [**patch**](docs/UserApi.md#patch) | **PATCH** /buyers/{buyerID}/users/{userID} | 
*UserApi* | [**update**](docs/UserApi.md#update) | **PUT** /buyers/{buyerID}/users/{userID} | 
*UserGroupApi* | [**create**](docs/UserGroupApi.md#create) | **POST** /buyers/{buyerID}/usergroups | 
*UserGroupApi* | [**delete**](docs/UserGroupApi.md#delete) | **DELETE** /buyers/{buyerID}/usergroups/{userGroupID} | 
*UserGroupApi* | [**delete_user_assignment**](docs/UserGroupApi.md#delete_user_assignment) | **DELETE** /buyers/{buyerID}/usergroups/{userGroupID}/assignments/{userID} | 
*UserGroupApi* | [**get**](docs/UserGroupApi.md#get) | **GET** /buyers/{buyerID}/usergroups/{userGroupID} | 
*UserGroupApi* | [**list**](docs/UserGroupApi.md#list) | **GET** /buyers/{buyerID}/usergroups | 
*UserGroupApi* | [**list_user_assignments**](docs/UserGroupApi.md#list_user_assignments) | **GET** /buyers/{buyerID}/usergroups/assignments | 
*UserGroupApi* | [**patch**](docs/UserGroupApi.md#patch) | **PATCH** /buyers/{buyerID}/usergroups/{userGroupID} | 
*UserGroupApi* | [**save_user_assignment**](docs/UserGroupApi.md#save_user_assignment) | **POST** /buyers/{buyerID}/usergroups/assignments | 
*UserGroupApi* | [**update**](docs/UserGroupApi.md#update) | **PUT** /buyers/{buyerID}/usergroups/{userGroupID} | 


## Documentation For Models

 - [Address](docs/Address.md)
 - [AddressAssignment](docs/AddressAssignment.md)
 - [ApprovalRule](docs/ApprovalRule.md)
 - [Buyer](docs/Buyer.md)
 - [BuyerAddress](docs/BuyerAddress.md)
 - [BuyerCreditCard](docs/BuyerCreditCard.md)
 - [Category](docs/Category.md)
 - [CategoryAssignment](docs/CategoryAssignment.md)
 - [CategoryProductAssignment](docs/CategoryProductAssignment.md)
 - [CostCenter](docs/CostCenter.md)
 - [CostCenterAssignment](docs/CostCenterAssignment.md)
 - [CreditCard](docs/CreditCard.md)
 - [CreditCardAssignment](docs/CreditCardAssignment.md)
 - [EmailTemplate](docs/EmailTemplate.md)
 - [ImpersonateTokenRequest](docs/ImpersonateTokenRequest.md)
 - [LineItem](docs/LineItem.md)
 - [Order](docs/Order.md)
 - [Partial1](docs/Partial1.md)
 - [PasswordReset](docs/PasswordReset.md)
 - [PasswordResetRequest](docs/PasswordResetRequest.md)
 - [Payment](docs/Payment.md)
 - [PaymentTransaction](docs/PaymentTransaction.md)
 - [PriceBreak](docs/PriceBreak.md)
 - [PriceSchedule](docs/PriceSchedule.md)
 - [Product](docs/Product.md)
 - [ProductAssignment](docs/ProductAssignment.md)
 - [Promotion](docs/Promotion.md)
 - [PromotionAssignment](docs/PromotionAssignment.md)
 - [Shipment](docs/Shipment.md)
 - [ShipmentItem](docs/ShipmentItem.md)
 - [Spec](docs/Spec.md)
 - [SpecOption](docs/SpecOption.md)
 - [SpecProductAssignment](docs/SpecProductAssignment.md)
 - [SpendingAccount](docs/SpendingAccount.md)
 - [SpendingAccountAssignment](docs/SpendingAccountAssignment.md)
 - [User](docs/User.md)
 - [UserGroup](docs/UserGroup.md)
 - [UserGroupAssignment](docs/UserGroupAssignment.md)
 - [Variant](docs/Variant.md)


## Documentation For Authorization


## auth

- **Type**: OAuth
- **Flow**: password
- **Authorization URL**: 
- **Scopes**: 
 - **FullAccess**: Full access of the security profile.
 - **ProductAdmin**: Product admin of the security profile.
 - **ProductReader**: Product reader of the security profile.
 - **InventoryAdmin**: Inventory admin of the security profile.
 - **ProductAssignmentAdmin**: Product assignment admin of the security profile.
 - **BuyerAdmin**: Buyer admin of the security profile.
 - **BuyerReader**: Buyer reader of the security profile.
 - **CategoryAdmin**: Category admin of the security profile.
 - **CategoryReader**: Category reader of the security profile.
 - **AddressAdmin**: Address admin of the security profile.
 - **AddressReader**: Address reader of the security profile.
 - **CostCenterAdmin**: Cost center admin of the security profile.
 - **CostCenterReader**: Cost center reader of the security profile.
 - **PromotionAdmin**: Promotion admin of the security profile.
 - **PromotionReader**: Promotion reader of the security profile.
 - **CreditCardAdmin**: Credit card admin of the security profile.
 - **CreditCardReader**: Credit card reader of the security profile.
 - **EmailTemplateAdmin**: Email template admin of the security profile.
 - **EmailTemplateReader**: Email template reader of the security profile.
 - **PriceScheduleAdmin**: Price schedule admin of the security profile.
 - **PriceScheduleReader**: Price schedule reader of the security profile.
 - **SpendingAccountAdmin**: Spending account admin of the security profile.
 - **SpendingAccountReader**: Spending account reader of the security profile.
 - **BuyerUserAdmin**: Buyer user admin of the security profile.
 - **BuyerUserReader**: Buyer user reader of the security profile.
 - **UserGroupAdmin**: User group admin of the security profile.
 - **UserGroupReader**: User group reader of the security profile.
 - **ApprovalRuleAdmin**: Approval rule admin of the security profile.
 - **ApprovalRuleReader**: Approval rule reader of the security profile.
 - **PermissionAdmin**: Permission admin of the security profile.
 - **OrderAdmin**: Order admin of the security profile.
 - **OrderReader**: Order reader of the security profile.
 - **UnsubmittedOrderReader**: Unsubmitted order reader of the security profile.
 - **MeAdmin**: Me admin of the security profile.
 - **MeXpAdmin**: Me xp admin of the security profile.
 - **MeAddressAdmin**: Me address admin of the security profile.
 - **MeCreditCardAdmin**: Me credit card admin of the security profile.
 - **OverrideUnitPrice**: Override unit price of the security profile.
 - **OverrideShipping**: Override shipping of the security profile.
 - **OverrideTax**: Override tax of the security profile.


## Author

ordercloud@four51.com
