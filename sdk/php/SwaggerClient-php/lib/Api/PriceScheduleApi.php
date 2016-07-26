<?php
/**
 * PriceScheduleApi
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   http://github.com/swagger-api/swagger-codegen
 * @license  http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * OrderCloud
 *
 * A full ecommerce backend as a service.
 *
 * OpenAPI spec version: 0.1
 * Contact: ordercloud@four51.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Api;

use \Swagger\Client\Configuration;
use \Swagger\Client\ApiClient;
use \Swagger\Client\ApiException;
use \Swagger\Client\ObjectSerializer;

/**
 * PriceScheduleApi Class Doc Comment
 *
 * @category Class
 * @package  Swagger\Client
 * @author   http://github.com/swagger-api/swagger-codegen
 * @license  http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link     https://github.com/swagger-api/swagger-codegen
 */
class PriceScheduleApi
{

    /**
     * API Client
     *
     * @var \Swagger\Client\ApiClient instance of the ApiClient
     */
    protected $apiClient;

    /**
     * Constructor
     *
     * @param \Swagger\Client\ApiClient|null $apiClient The api client to use
     */
    public function __construct(\Swagger\Client\ApiClient $apiClient = null)
    {
        if ($apiClient == null) {
            $apiClient = new ApiClient();
            $apiClient->getConfig()->setHost('https://api.ordercloud.io/v1');
        }

        $this->apiClient = $apiClient;
    }

    /**
     * Get API client
     *
     * @return \Swagger\Client\ApiClient get the API client
     */
    public function getApiClient()
    {
        return $this->apiClient;
    }

    /**
     * Set the API client
     *
     * @param \Swagger\Client\ApiClient $apiClient set the API client
     *
     * @return PriceScheduleApi
     */
    public function setApiClient(\Swagger\Client\ApiClient $apiClient)
    {
        $this->apiClient = $apiClient;
        return $this;
    }

    /**
     * Operation callList
     *
     * 
     *
     * @param string $search Word or phrase to search for. (optional)
     * @param string $search_on Comma-delimited list of fields to search on. (optional)
     * @param string $sort_by Comma-delimited list of fields to sort by. (optional)
     * @param int $page Page of results to return. Default: 1 (optional)
     * @param int $page_size Number of results to return per page. Default: 20, max: 100. (optional)
     * @return object
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function callList($search = null, $search_on = null, $sort_by = null, $page = null, $page_size = null)
    {
        list($response) = $this->callListWithHttpInfo($search, $search_on, $sort_by, $page, $page_size);
        return $response;
    }

    /**
     * Operation callListWithHttpInfo
     *
     * 
     *
     * @param string $search Word or phrase to search for. (optional)
     * @param string $search_on Comma-delimited list of fields to search on. (optional)
     * @param string $sort_by Comma-delimited list of fields to sort by. (optional)
     * @param int $page Page of results to return. Default: 1 (optional)
     * @param int $page_size Number of results to return per page. Default: 20, max: 100. (optional)
     * @return Array of object, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function callListWithHttpInfo($search = null, $search_on = null, $sort_by = null, $page = null, $page_size = null)
    {
        // parse inputs
        $resourcePath = "/priceschedules";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = $this->apiClient->selectHeaderAccept(array());
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = $this->apiClient->selectHeaderContentType(array());

        // query params
        if ($search !== null) {
            $queryParams['search'] = $this->apiClient->getSerializer()->toQueryValue($search);
        }
        // query params
        if ($search_on !== null) {
            $queryParams['searchOn'] = $this->apiClient->getSerializer()->toQueryValue($search_on);
        }
        // query params
        if ($sort_by !== null) {
            $queryParams['sortBy'] = $this->apiClient->getSerializer()->toQueryValue($sort_by);
        }
        // query params
        if ($page !== null) {
            $queryParams['page'] = $this->apiClient->getSerializer()->toQueryValue($page);
        }
        // query params
        if ($page_size !== null) {
            $queryParams['pageSize'] = $this->apiClient->getSerializer()->toQueryValue($page_size);
        }
        // default format to json
        $resourcePath = str_replace("{format}", "json", $resourcePath);

        
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } elseif (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        // this endpoint requires OAuth (access token)
        if (strlen($this->apiClient->getConfig()->getAccessToken()) !== 0) {
            $headerParams['Authorization'] = 'Bearer ' . $this->apiClient->getConfig()->getAccessToken();
        }
        // make the API Call
        try {
            list($response, $statusCode, $httpHeader) = $this->apiClient->callApi(
                $resourcePath,
                'GET',
                $queryParams,
                $httpBody,
                $headerParams,
                'object',
                '/priceschedules'
            );

            return array($this->apiClient->getSerializer()->deserialize($response, 'object', $httpHeader), $statusCode, $httpHeader);
        } catch (ApiException $e) {
            switch ($e->getCode()) {
                case 200:
                    $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), 'object', $e->getResponseHeaders());
                    $e->setResponseObject($data);
                    break;
            }

            throw $e;
        }
    }

    /**
     * Operation create
     *
     * 
     *
     * @param \Swagger\Client\Model\PriceSchedule $price_schedule  (required)
     * @return object
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function create($price_schedule)
    {
        list($response) = $this->createWithHttpInfo($price_schedule);
        return $response;
    }

    /**
     * Operation createWithHttpInfo
     *
     * 
     *
     * @param \Swagger\Client\Model\PriceSchedule $price_schedule  (required)
     * @return Array of object, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function createWithHttpInfo($price_schedule)
    {
        // verify the required parameter 'price_schedule' is set
        if ($price_schedule === null) {
            throw new \InvalidArgumentException('Missing the required parameter $price_schedule when calling create');
        }
        // parse inputs
        $resourcePath = "/priceschedules";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = $this->apiClient->selectHeaderAccept(array());
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = $this->apiClient->selectHeaderContentType(array());

        // default format to json
        $resourcePath = str_replace("{format}", "json", $resourcePath);

        // body params
        $_tempBody = null;
        if (isset($price_schedule)) {
            $_tempBody = $price_schedule;
        }

        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } elseif (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        // this endpoint requires OAuth (access token)
        if (strlen($this->apiClient->getConfig()->getAccessToken()) !== 0) {
            $headerParams['Authorization'] = 'Bearer ' . $this->apiClient->getConfig()->getAccessToken();
        }
        // make the API Call
        try {
            list($response, $statusCode, $httpHeader) = $this->apiClient->callApi(
                $resourcePath,
                'POST',
                $queryParams,
                $httpBody,
                $headerParams,
                'object',
                '/priceschedules'
            );

            return array($this->apiClient->getSerializer()->deserialize($response, 'object', $httpHeader), $statusCode, $httpHeader);
        } catch (ApiException $e) {
            switch ($e->getCode()) {
                case 201:
                    $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), 'object', $e->getResponseHeaders());
                    $e->setResponseObject($data);
                    break;
            }

            throw $e;
        }
    }

    /**
     * Operation delete
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @return void
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function delete($price_schedule_id)
    {
        list($response) = $this->deleteWithHttpInfo($price_schedule_id);
        return $response;
    }

    /**
     * Operation deleteWithHttpInfo
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @return Array of null, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function deleteWithHttpInfo($price_schedule_id)
    {
        // verify the required parameter 'price_schedule_id' is set
        if ($price_schedule_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $price_schedule_id when calling delete');
        }
        // parse inputs
        $resourcePath = "/priceschedules/{priceScheduleID}";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = $this->apiClient->selectHeaderAccept(array());
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = $this->apiClient->selectHeaderContentType(array());

        // path params
        if ($price_schedule_id !== null) {
            $resourcePath = str_replace(
                "{" . "priceScheduleID" . "}",
                $this->apiClient->getSerializer()->toPathValue($price_schedule_id),
                $resourcePath
            );
        }
        // default format to json
        $resourcePath = str_replace("{format}", "json", $resourcePath);

        
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } elseif (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        // this endpoint requires OAuth (access token)
        if (strlen($this->apiClient->getConfig()->getAccessToken()) !== 0) {
            $headerParams['Authorization'] = 'Bearer ' . $this->apiClient->getConfig()->getAccessToken();
        }
        // make the API Call
        try {
            list($response, $statusCode, $httpHeader) = $this->apiClient->callApi(
                $resourcePath,
                'DELETE',
                $queryParams,
                $httpBody,
                $headerParams,
                null,
                '/priceschedules/{priceScheduleID}'
            );

            return array(null, $statusCode, $httpHeader);
        } catch (ApiException $e) {
            switch ($e->getCode()) {
            }

            throw $e;
        }
    }

    /**
     * Operation deletePriceBreak
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @param int $quantity Quantity of the price schedule. (required)
     * @return void
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function deletePriceBreak($price_schedule_id, $quantity)
    {
        list($response) = $this->deletePriceBreakWithHttpInfo($price_schedule_id, $quantity);
        return $response;
    }

    /**
     * Operation deletePriceBreakWithHttpInfo
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @param int $quantity Quantity of the price schedule. (required)
     * @return Array of null, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function deletePriceBreakWithHttpInfo($price_schedule_id, $quantity)
    {
        // verify the required parameter 'price_schedule_id' is set
        if ($price_schedule_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $price_schedule_id when calling deletePriceBreak');
        }
        // verify the required parameter 'quantity' is set
        if ($quantity === null) {
            throw new \InvalidArgumentException('Missing the required parameter $quantity when calling deletePriceBreak');
        }
        // parse inputs
        $resourcePath = "/priceschedules/{priceScheduleID}/PriceBreaks";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = $this->apiClient->selectHeaderAccept(array());
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = $this->apiClient->selectHeaderContentType(array());

        // query params
        if ($quantity !== null) {
            $queryParams['quantity'] = $this->apiClient->getSerializer()->toQueryValue($quantity);
        }
        // path params
        if ($price_schedule_id !== null) {
            $resourcePath = str_replace(
                "{" . "priceScheduleID" . "}",
                $this->apiClient->getSerializer()->toPathValue($price_schedule_id),
                $resourcePath
            );
        }
        // default format to json
        $resourcePath = str_replace("{format}", "json", $resourcePath);

        
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } elseif (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        // this endpoint requires OAuth (access token)
        if (strlen($this->apiClient->getConfig()->getAccessToken()) !== 0) {
            $headerParams['Authorization'] = 'Bearer ' . $this->apiClient->getConfig()->getAccessToken();
        }
        // make the API Call
        try {
            list($response, $statusCode, $httpHeader) = $this->apiClient->callApi(
                $resourcePath,
                'DELETE',
                $queryParams,
                $httpBody,
                $headerParams,
                null,
                '/priceschedules/{priceScheduleID}/PriceBreaks'
            );

            return array(null, $statusCode, $httpHeader);
        } catch (ApiException $e) {
            switch ($e->getCode()) {
            }

            throw $e;
        }
    }

    /**
     * Operation get
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @return object
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function get($price_schedule_id)
    {
        list($response) = $this->getWithHttpInfo($price_schedule_id);
        return $response;
    }

    /**
     * Operation getWithHttpInfo
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @return Array of object, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function getWithHttpInfo($price_schedule_id)
    {
        // verify the required parameter 'price_schedule_id' is set
        if ($price_schedule_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $price_schedule_id when calling get');
        }
        // parse inputs
        $resourcePath = "/priceschedules/{priceScheduleID}";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = $this->apiClient->selectHeaderAccept(array());
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = $this->apiClient->selectHeaderContentType(array());

        // path params
        if ($price_schedule_id !== null) {
            $resourcePath = str_replace(
                "{" . "priceScheduleID" . "}",
                $this->apiClient->getSerializer()->toPathValue($price_schedule_id),
                $resourcePath
            );
        }
        // default format to json
        $resourcePath = str_replace("{format}", "json", $resourcePath);

        
        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } elseif (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        // this endpoint requires OAuth (access token)
        if (strlen($this->apiClient->getConfig()->getAccessToken()) !== 0) {
            $headerParams['Authorization'] = 'Bearer ' . $this->apiClient->getConfig()->getAccessToken();
        }
        // make the API Call
        try {
            list($response, $statusCode, $httpHeader) = $this->apiClient->callApi(
                $resourcePath,
                'GET',
                $queryParams,
                $httpBody,
                $headerParams,
                'object',
                '/priceschedules/{priceScheduleID}'
            );

            return array($this->apiClient->getSerializer()->deserialize($response, 'object', $httpHeader), $statusCode, $httpHeader);
        } catch (ApiException $e) {
            switch ($e->getCode()) {
                case 200:
                    $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), 'object', $e->getResponseHeaders());
                    $e->setResponseObject($data);
                    break;
            }

            throw $e;
        }
    }

    /**
     * Operation patch
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @param \Swagger\Client\Model\PriceSchedule $price_schedule  (required)
     * @return object
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function patch($price_schedule_id, $price_schedule)
    {
        list($response) = $this->patchWithHttpInfo($price_schedule_id, $price_schedule);
        return $response;
    }

    /**
     * Operation patchWithHttpInfo
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @param \Swagger\Client\Model\PriceSchedule $price_schedule  (required)
     * @return Array of object, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function patchWithHttpInfo($price_schedule_id, $price_schedule)
    {
        // verify the required parameter 'price_schedule_id' is set
        if ($price_schedule_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $price_schedule_id when calling patch');
        }
        // verify the required parameter 'price_schedule' is set
        if ($price_schedule === null) {
            throw new \InvalidArgumentException('Missing the required parameter $price_schedule when calling patch');
        }
        // parse inputs
        $resourcePath = "/priceschedules/{priceScheduleID}";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = $this->apiClient->selectHeaderAccept(array());
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = $this->apiClient->selectHeaderContentType(array());

        // path params
        if ($price_schedule_id !== null) {
            $resourcePath = str_replace(
                "{" . "priceScheduleID" . "}",
                $this->apiClient->getSerializer()->toPathValue($price_schedule_id),
                $resourcePath
            );
        }
        // default format to json
        $resourcePath = str_replace("{format}", "json", $resourcePath);

        // body params
        $_tempBody = null;
        if (isset($price_schedule)) {
            $_tempBody = $price_schedule;
        }

        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } elseif (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        // this endpoint requires OAuth (access token)
        if (strlen($this->apiClient->getConfig()->getAccessToken()) !== 0) {
            $headerParams['Authorization'] = 'Bearer ' . $this->apiClient->getConfig()->getAccessToken();
        }
        // make the API Call
        try {
            list($response, $statusCode, $httpHeader) = $this->apiClient->callApi(
                $resourcePath,
                'PATCH',
                $queryParams,
                $httpBody,
                $headerParams,
                'object',
                '/priceschedules/{priceScheduleID}'
            );

            return array($this->apiClient->getSerializer()->deserialize($response, 'object', $httpHeader), $statusCode, $httpHeader);
        } catch (ApiException $e) {
            switch ($e->getCode()) {
                case 200:
                    $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), 'object', $e->getResponseHeaders());
                    $e->setResponseObject($data);
                    break;
            }

            throw $e;
        }
    }

    /**
     * Operation savePriceBreak
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @param \Swagger\Client\Model\PriceBreak $price_break  (required)
     * @return object
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function savePriceBreak($price_schedule_id, $price_break)
    {
        list($response) = $this->savePriceBreakWithHttpInfo($price_schedule_id, $price_break);
        return $response;
    }

    /**
     * Operation savePriceBreakWithHttpInfo
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @param \Swagger\Client\Model\PriceBreak $price_break  (required)
     * @return Array of object, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function savePriceBreakWithHttpInfo($price_schedule_id, $price_break)
    {
        // verify the required parameter 'price_schedule_id' is set
        if ($price_schedule_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $price_schedule_id when calling savePriceBreak');
        }
        // verify the required parameter 'price_break' is set
        if ($price_break === null) {
            throw new \InvalidArgumentException('Missing the required parameter $price_break when calling savePriceBreak');
        }
        // parse inputs
        $resourcePath = "/priceschedules/{priceScheduleID}/PriceBreaks";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = $this->apiClient->selectHeaderAccept(array());
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = $this->apiClient->selectHeaderContentType(array());

        // path params
        if ($price_schedule_id !== null) {
            $resourcePath = str_replace(
                "{" . "priceScheduleID" . "}",
                $this->apiClient->getSerializer()->toPathValue($price_schedule_id),
                $resourcePath
            );
        }
        // default format to json
        $resourcePath = str_replace("{format}", "json", $resourcePath);

        // body params
        $_tempBody = null;
        if (isset($price_break)) {
            $_tempBody = $price_break;
        }

        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } elseif (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        // this endpoint requires OAuth (access token)
        if (strlen($this->apiClient->getConfig()->getAccessToken()) !== 0) {
            $headerParams['Authorization'] = 'Bearer ' . $this->apiClient->getConfig()->getAccessToken();
        }
        // make the API Call
        try {
            list($response, $statusCode, $httpHeader) = $this->apiClient->callApi(
                $resourcePath,
                'POST',
                $queryParams,
                $httpBody,
                $headerParams,
                'object',
                '/priceschedules/{priceScheduleID}/PriceBreaks'
            );

            return array($this->apiClient->getSerializer()->deserialize($response, 'object', $httpHeader), $statusCode, $httpHeader);
        } catch (ApiException $e) {
            switch ($e->getCode()) {
                case 201:
                    $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), 'object', $e->getResponseHeaders());
                    $e->setResponseObject($data);
                    break;
            }

            throw $e;
        }
    }

    /**
     * Operation update
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @param \Swagger\Client\Model\PriceSchedule $price_schedule  (required)
     * @return object
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function update($price_schedule_id, $price_schedule)
    {
        list($response) = $this->updateWithHttpInfo($price_schedule_id, $price_schedule);
        return $response;
    }

    /**
     * Operation updateWithHttpInfo
     *
     * 
     *
     * @param string $price_schedule_id ID of the price schedule. (required)
     * @param \Swagger\Client\Model\PriceSchedule $price_schedule  (required)
     * @return Array of object, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function updateWithHttpInfo($price_schedule_id, $price_schedule)
    {
        // verify the required parameter 'price_schedule_id' is set
        if ($price_schedule_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $price_schedule_id when calling update');
        }
        // verify the required parameter 'price_schedule' is set
        if ($price_schedule === null) {
            throw new \InvalidArgumentException('Missing the required parameter $price_schedule when calling update');
        }
        // parse inputs
        $resourcePath = "/priceschedules/{priceScheduleID}";
        $httpBody = '';
        $queryParams = array();
        $headerParams = array();
        $formParams = array();
        $_header_accept = $this->apiClient->selectHeaderAccept(array());
        if (!is_null($_header_accept)) {
            $headerParams['Accept'] = $_header_accept;
        }
        $headerParams['Content-Type'] = $this->apiClient->selectHeaderContentType(array());

        // path params
        if ($price_schedule_id !== null) {
            $resourcePath = str_replace(
                "{" . "priceScheduleID" . "}",
                $this->apiClient->getSerializer()->toPathValue($price_schedule_id),
                $resourcePath
            );
        }
        // default format to json
        $resourcePath = str_replace("{format}", "json", $resourcePath);

        // body params
        $_tempBody = null;
        if (isset($price_schedule)) {
            $_tempBody = $price_schedule;
        }

        // for model (json/xml)
        if (isset($_tempBody)) {
            $httpBody = $_tempBody; // $_tempBody is the method argument, if present
        } elseif (count($formParams) > 0) {
            $httpBody = $formParams; // for HTTP post (form)
        }
        // this endpoint requires OAuth (access token)
        if (strlen($this->apiClient->getConfig()->getAccessToken()) !== 0) {
            $headerParams['Authorization'] = 'Bearer ' . $this->apiClient->getConfig()->getAccessToken();
        }
        // make the API Call
        try {
            list($response, $statusCode, $httpHeader) = $this->apiClient->callApi(
                $resourcePath,
                'PUT',
                $queryParams,
                $httpBody,
                $headerParams,
                'object',
                '/priceschedules/{priceScheduleID}'
            );

            return array($this->apiClient->getSerializer()->deserialize($response, 'object', $httpHeader), $statusCode, $httpHeader);
        } catch (ApiException $e) {
            switch ($e->getCode()) {
                case 200:
                    $data = $this->apiClient->getSerializer()->deserialize($e->getResponseBody(), 'object', $e->getResponseHeaders());
                    $e->setResponseObject($data);
                    break;
            }

            throw $e;
        }
    }

}
