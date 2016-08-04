# Swagger\Client\LineItemApi

All URIs are relative to *https://api.ordercloud.io/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**callList**](LineItemApi.md#callList) | **GET** /buyers/{buyerID}/orders/{orderID}/lineitems | 
[**create**](LineItemApi.md#create) | **POST** /buyers/{buyerID}/orders/{orderID}/lineitems | 
[**delete**](LineItemApi.md#delete) | **DELETE** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID} | 
[**get**](LineItemApi.md#get) | **GET** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID} | 
[**patch**](LineItemApi.md#patch) | **PATCH** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID} | 
[**patchShippingAddress**](LineItemApi.md#patchShippingAddress) | **PATCH** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID}/shipto | 
[**setShippingAddress**](LineItemApi.md#setShippingAddress) | **PUT** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID}/shipto | 
[**update**](LineItemApi.md#update) | **PUT** /buyers/{buyerID}/orders/{orderID}/lineitems/{lineItemID} | 


# **callList**
> object callList($buyer_id, $order_id, $search, $search_on, $sort_by, $page, $page_size)



### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure OAuth2 access token for authorization: auth
Swagger\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');

$api_instance = new Swagger\Client\Api\LineItemApi();
$buyer_id = "buyer_id_example"; // string | ID of the buyer.
$order_id = "order_id_example"; // string | ID of the order.
$search = "search_example"; // string | Word or phrase to search for.
$search_on = "search_on_example"; // string | Comma-delimited list of fields to search on.
$sort_by = "sort_by_example"; // string | Comma-delimited list of fields to sort by.
$page = 56; // int | Page of results to return. Default: 1
$page_size = 56; // int | Number of results to return per page. Default: 20, max: 100.

try {
    $result = $api_instance->callList($buyer_id, $order_id, $search, $search_on, $sort_by, $page, $page_size);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling LineItemApi->callList: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **string**| ID of the buyer. |
 **order_id** | **string**| ID of the order. |
 **search** | **string**| Word or phrase to search for. | [optional]
 **search_on** | **string**| Comma-delimited list of fields to search on. | [optional]
 **sort_by** | **string**| Comma-delimited list of fields to sort by. | [optional]
 **page** | **int**| Page of results to return. Default: 1 | [optional]
 **page_size** | **int**| Number of results to return per page. Default: 20, max: 100. | [optional]

### Return type

**object**

### Authorization

[auth](../../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **create**
> object create($buyer_id, $order_id, $line_item)



### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure OAuth2 access token for authorization: auth
Swagger\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');

$api_instance = new Swagger\Client\Api\LineItemApi();
$buyer_id = "buyer_id_example"; // string | ID of the buyer.
$order_id = "order_id_example"; // string | ID of the order.
$line_item = new \Swagger\Client\Model\LineItem(); // \Swagger\Client\Model\LineItem | 

try {
    $result = $api_instance->create($buyer_id, $order_id, $line_item);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling LineItemApi->create: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **string**| ID of the buyer. |
 **order_id** | **string**| ID of the order. |
 **line_item** | [**\Swagger\Client\Model\LineItem**](../Model/\Swagger\Client\Model\LineItem.md)|  |

### Return type

**object**

### Authorization

[auth](../../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **delete**
> delete($buyer_id, $order_id, $line_item_id)



### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure OAuth2 access token for authorization: auth
Swagger\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');

$api_instance = new Swagger\Client\Api\LineItemApi();
$buyer_id = "buyer_id_example"; // string | ID of the buyer.
$order_id = "order_id_example"; // string | ID of the order.
$line_item_id = "line_item_id_example"; // string | ID of the line item.

try {
    $api_instance->delete($buyer_id, $order_id, $line_item_id);
} catch (Exception $e) {
    echo 'Exception when calling LineItemApi->delete: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **string**| ID of the buyer. |
 **order_id** | **string**| ID of the order. |
 **line_item_id** | **string**| ID of the line item. |

### Return type

void (empty response body)

### Authorization

[auth](../../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **get**
> object get($buyer_id, $order_id, $line_item_id)



### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure OAuth2 access token for authorization: auth
Swagger\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');

$api_instance = new Swagger\Client\Api\LineItemApi();
$buyer_id = "buyer_id_example"; // string | ID of the buyer.
$order_id = "order_id_example"; // string | ID of the order.
$line_item_id = "line_item_id_example"; // string | ID of the line item.

try {
    $result = $api_instance->get($buyer_id, $order_id, $line_item_id);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling LineItemApi->get: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **string**| ID of the buyer. |
 **order_id** | **string**| ID of the order. |
 **line_item_id** | **string**| ID of the line item. |

### Return type

**object**

### Authorization

[auth](../../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **patch**
> object patch($buyer_id, $order_id, $line_item_id, $partial_line_item)



### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure OAuth2 access token for authorization: auth
Swagger\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');

$api_instance = new Swagger\Client\Api\LineItemApi();
$buyer_id = "buyer_id_example"; // string | ID of the buyer.
$order_id = "order_id_example"; // string | ID of the order.
$line_item_id = "line_item_id_example"; // string | ID of the line item.
$partial_line_item = new \Swagger\Client\Model\LineItem(); // \Swagger\Client\Model\LineItem | 

try {
    $result = $api_instance->patch($buyer_id, $order_id, $line_item_id, $partial_line_item);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling LineItemApi->patch: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **string**| ID of the buyer. |
 **order_id** | **string**| ID of the order. |
 **line_item_id** | **string**| ID of the line item. |
 **partial_line_item** | [**\Swagger\Client\Model\LineItem**](../Model/\Swagger\Client\Model\LineItem.md)|  |

### Return type

**object**

### Authorization

[auth](../../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **patchShippingAddress**
> object patchShippingAddress($buyer_id, $order_id, $line_item_id, $address)



### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure OAuth2 access token for authorization: auth
Swagger\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');

$api_instance = new Swagger\Client\Api\LineItemApi();
$buyer_id = "buyer_id_example"; // string | ID of the buyer.
$order_id = "order_id_example"; // string | ID of the order.
$line_item_id = "line_item_id_example"; // string | ID of the line item.
$address = new \Swagger\Client\Model\Address(); // \Swagger\Client\Model\Address | 

try {
    $result = $api_instance->patchShippingAddress($buyer_id, $order_id, $line_item_id, $address);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling LineItemApi->patchShippingAddress: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **string**| ID of the buyer. |
 **order_id** | **string**| ID of the order. |
 **line_item_id** | **string**| ID of the line item. |
 **address** | [**\Swagger\Client\Model\Address**](../Model/\Swagger\Client\Model\Address.md)|  |

### Return type

**object**

### Authorization

[auth](../../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **setShippingAddress**
> object setShippingAddress($buyer_id, $order_id, $line_item_id, $address)



### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure OAuth2 access token for authorization: auth
Swagger\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');

$api_instance = new Swagger\Client\Api\LineItemApi();
$buyer_id = "buyer_id_example"; // string | ID of the buyer.
$order_id = "order_id_example"; // string | ID of the order.
$line_item_id = "line_item_id_example"; // string | ID of the line item.
$address = new \Swagger\Client\Model\Address(); // \Swagger\Client\Model\Address | 

try {
    $result = $api_instance->setShippingAddress($buyer_id, $order_id, $line_item_id, $address);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling LineItemApi->setShippingAddress: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **string**| ID of the buyer. |
 **order_id** | **string**| ID of the order. |
 **line_item_id** | **string**| ID of the line item. |
 **address** | [**\Swagger\Client\Model\Address**](../Model/\Swagger\Client\Model\Address.md)|  |

### Return type

**object**

### Authorization

[auth](../../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)

# **update**
> object update($buyer_id, $order_id, $line_item_id, $line_item)



### Example
```php
<?php
require_once(__DIR__ . '/vendor/autoload.php');

// Configure OAuth2 access token for authorization: auth
Swagger\Client\Configuration::getDefaultConfiguration()->setAccessToken('YOUR_ACCESS_TOKEN');

$api_instance = new Swagger\Client\Api\LineItemApi();
$buyer_id = "buyer_id_example"; // string | ID of the buyer.
$order_id = "order_id_example"; // string | ID of the order.
$line_item_id = "line_item_id_example"; // string | ID of the line item.
$line_item = new \Swagger\Client\Model\LineItem(); // \Swagger\Client\Model\LineItem | 

try {
    $result = $api_instance->update($buyer_id, $order_id, $line_item_id, $line_item);
    print_r($result);
} catch (Exception $e) {
    echo 'Exception when calling LineItemApi->update: ', $e->getMessage(), PHP_EOL;
}
?>
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **string**| ID of the buyer. |
 **order_id** | **string**| ID of the order. |
 **line_item_id** | **string**| ID of the line item. |
 **line_item** | [**\Swagger\Client\Model\LineItem**](../Model/\Swagger\Client\Model\LineItem.md)|  |

### Return type

**object**

### Authorization

[auth](../../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../../README.md#documentation-for-api-endpoints) [[Back to Model list]](../../README.md#documentation-for-models) [[Back to README]](../../README.md)
