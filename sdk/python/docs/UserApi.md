# OrderCloud.UserApi

All URIs are relative to *https://api.ordercloud.io/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**create**](UserApi.md#create) | **POST** /buyers/{buyerID}/users | 
[**delete**](UserApi.md#delete) | **DELETE** /buyers/{buyerID}/users/{userID} | 
[**get**](UserApi.md#get) | **GET** /buyers/{buyerID}/users/{userID} | 
[**get_access_token**](UserApi.md#get_access_token) | **POST** /buyers/{buyerID}/users/{userID}/accesstoken | 
[**list**](UserApi.md#list) | **GET** /buyers/{buyerID}/users | 
[**patch**](UserApi.md#patch) | **PATCH** /buyers/{buyerID}/users/{userID} | 
[**update**](UserApi.md#update) | **PUT** /buyers/{buyerID}/users/{userID} | 


# **create**
> object create(buyer_id, user)



### Example 
```python
import time
import OrderCloud
from OrderCloud.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: auth
OrderCloud.configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = OrderCloud.UserApi()
buyer_id = 'buyer_id_example' # str | ID of the buyer.
user = OrderCloud.User() # User | 

try: 
    api_response = api_instance.create(buyer_id, user)
    pprint(api_response)
except ApiException as e:
    print "Exception when calling UserApi->create: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **str**| ID of the buyer. | 
 **user** | [**User**](User.md)|  | 

### Return type

**object**

### Authorization

[auth](../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **delete**
> delete(buyer_id, user_id)



### Example 
```python
import time
import OrderCloud
from OrderCloud.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: auth
OrderCloud.configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = OrderCloud.UserApi()
buyer_id = 'buyer_id_example' # str | ID of the buyer.
user_id = 'user_id_example' # str | ID of the user.

try: 
    api_instance.delete(buyer_id, user_id)
except ApiException as e:
    print "Exception when calling UserApi->delete: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **str**| ID of the buyer. | 
 **user_id** | **str**| ID of the user. | 

### Return type

void (empty response body)

### Authorization

[auth](../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get**
> object get(buyer_id, user_id)



### Example 
```python
import time
import OrderCloud
from OrderCloud.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: auth
OrderCloud.configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = OrderCloud.UserApi()
buyer_id = 'buyer_id_example' # str | ID of the buyer.
user_id = 'user_id_example' # str | ID of the user.

try: 
    api_response = api_instance.get(buyer_id, user_id)
    pprint(api_response)
except ApiException as e:
    print "Exception when calling UserApi->get: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **str**| ID of the buyer. | 
 **user_id** | **str**| ID of the user. | 

### Return type

**object**

### Authorization

[auth](../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **get_access_token**
> object get_access_token(buyer_id, user_id, token_request)



### Example 
```python
import time
import OrderCloud
from OrderCloud.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: auth
OrderCloud.configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = OrderCloud.UserApi()
buyer_id = 'buyer_id_example' # str | ID of the buyer.
user_id = 'user_id_example' # str | ID of the user.
token_request = OrderCloud.ImpersonateTokenRequest() # ImpersonateTokenRequest | 

try: 
    api_response = api_instance.get_access_token(buyer_id, user_id, token_request)
    pprint(api_response)
except ApiException as e:
    print "Exception when calling UserApi->get_access_token: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **str**| ID of the buyer. | 
 **user_id** | **str**| ID of the user. | 
 **token_request** | [**ImpersonateTokenRequest**](ImpersonateTokenRequest.md)|  | 

### Return type

**object**

### Authorization

[auth](../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **list**
> object list(buyer_id, user_group_id=user_group_id, search=search, search_on=search_on, sort_by=sort_by, page=page, page_size=page_size)



### Example 
```python
import time
import OrderCloud
from OrderCloud.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: auth
OrderCloud.configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = OrderCloud.UserApi()
buyer_id = 'buyer_id_example' # str | ID of the buyer.
user_group_id = 'user_group_id_example' # str | ID of the user group. (optional)
search = 'search_example' # str | Word or phrase to search for. (optional)
search_on = 'search_on_example' # str | Comma-delimited list of fields to search on. (optional)
sort_by = 'sort_by_example' # str | Comma-delimited list of fields to sort by. (optional)
page = 56 # int | Page of results to return. Default: 1 (optional)
page_size = 56 # int | Number of results to return per page. Default: 20, max: 100. (optional)

try: 
    api_response = api_instance.list(buyer_id, user_group_id=user_group_id, search=search, search_on=search_on, sort_by=sort_by, page=page, page_size=page_size)
    pprint(api_response)
except ApiException as e:
    print "Exception when calling UserApi->list: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **str**| ID of the buyer. | 
 **user_group_id** | **str**| ID of the user group. | [optional] 
 **search** | **str**| Word or phrase to search for. | [optional] 
 **search_on** | **str**| Comma-delimited list of fields to search on. | [optional] 
 **sort_by** | **str**| Comma-delimited list of fields to sort by. | [optional] 
 **page** | **int**| Page of results to return. Default: 1 | [optional] 
 **page_size** | **int**| Number of results to return per page. Default: 20, max: 100. | [optional] 

### Return type

**object**

### Authorization

[auth](../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **patch**
> patch(buyer_id, user_id, user)



### Example 
```python
import time
import OrderCloud
from OrderCloud.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: auth
OrderCloud.configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = OrderCloud.UserApi()
buyer_id = 'buyer_id_example' # str | ID of the buyer.
user_id = 'user_id_example' # str | ID of the user.
user = OrderCloud.User() # User | 

try: 
    api_instance.patch(buyer_id, user_id, user)
except ApiException as e:
    print "Exception when calling UserApi->patch: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **str**| ID of the buyer. | 
 **user_id** | **str**| ID of the user. | 
 **user** | [**User**](User.md)|  | 

### Return type

void (empty response body)

### Authorization

[auth](../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **update**
> object update(buyer_id, user_id, user)



### Example 
```python
import time
import OrderCloud
from OrderCloud.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: auth
OrderCloud.configuration.access_token = 'YOUR_ACCESS_TOKEN'

# create an instance of the API class
api_instance = OrderCloud.UserApi()
buyer_id = 'buyer_id_example' # str | ID of the buyer.
user_id = 'user_id_example' # str | ID of the user.
user = OrderCloud.User() # User | 

try: 
    api_response = api_instance.update(buyer_id, user_id, user)
    pprint(api_response)
except ApiException as e:
    print "Exception when calling UserApi->update: %s\n" % e
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **buyer_id** | **str**| ID of the buyer. | 
 **user_id** | **str**| ID of the user. | 
 **user** | [**User**](User.md)|  | 

### Return type

**object**

### Authorization

[auth](../README.md#auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
