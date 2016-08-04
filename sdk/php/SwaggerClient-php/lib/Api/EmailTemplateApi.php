<?php
/**
 * EmailTemplateApi
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
 * EmailTemplateApi Class Doc Comment
 *
 * @category Class
 * @package  Swagger\Client
 * @author   http://github.com/swagger-api/swagger-codegen
 * @license  http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link     https://github.com/swagger-api/swagger-codegen
 */
class EmailTemplateApi
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
     * @return EmailTemplateApi
     */
    public function setApiClient(\Swagger\Client\ApiClient $apiClient)
    {
        $this->apiClient = $apiClient;
        return $this;
    }

    /**
     * Operation get
     *
     * 
     *
     * @param string $buyer_id ID of the buyer. (required)
     * @param string $email_template_type Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. (required)
     * @return object
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function get($buyer_id, $email_template_type)
    {
        list($response) = $this->getWithHttpInfo($buyer_id, $email_template_type);
        return $response;
    }

    /**
     * Operation getWithHttpInfo
     *
     * 
     *
     * @param string $buyer_id ID of the buyer. (required)
     * @param string $email_template_type Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. (required)
     * @return Array of object, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function getWithHttpInfo($buyer_id, $email_template_type)
    {
        // verify the required parameter 'buyer_id' is set
        if ($buyer_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $buyer_id when calling get');
        }
        // verify the required parameter 'email_template_type' is set
        if ($email_template_type === null) {
            throw new \InvalidArgumentException('Missing the required parameter $email_template_type when calling get');
        }
        // parse inputs
        $resourcePath = "/buyers/{buyerID}/emailtemplates/{emailTemplateType}";
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
        if ($buyer_id !== null) {
            $resourcePath = str_replace(
                "{" . "buyerID" . "}",
                $this->apiClient->getSerializer()->toPathValue($buyer_id),
                $resourcePath
            );
        }
        // path params
        if ($email_template_type !== null) {
            $resourcePath = str_replace(
                "{" . "emailTemplateType" . "}",
                $this->apiClient->getSerializer()->toPathValue($email_template_type),
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
                '/buyers/{buyerID}/emailtemplates/{emailTemplateType}'
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
     * @param string $buyer_id ID of the buyer. (required)
     * @param string $email_template_type Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. (required)
     * @param \Swagger\Client\Model\EmailTemplate $email_template  (required)
     * @return void
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function patch($buyer_id, $email_template_type, $email_template)
    {
        list($response) = $this->patchWithHttpInfo($buyer_id, $email_template_type, $email_template);
        return $response;
    }

    /**
     * Operation patchWithHttpInfo
     *
     * 
     *
     * @param string $buyer_id ID of the buyer. (required)
     * @param string $email_template_type Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. (required)
     * @param \Swagger\Client\Model\EmailTemplate $email_template  (required)
     * @return Array of null, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function patchWithHttpInfo($buyer_id, $email_template_type, $email_template)
    {
        // verify the required parameter 'buyer_id' is set
        if ($buyer_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $buyer_id when calling patch');
        }
        // verify the required parameter 'email_template_type' is set
        if ($email_template_type === null) {
            throw new \InvalidArgumentException('Missing the required parameter $email_template_type when calling patch');
        }
        // verify the required parameter 'email_template' is set
        if ($email_template === null) {
            throw new \InvalidArgumentException('Missing the required parameter $email_template when calling patch');
        }
        // parse inputs
        $resourcePath = "/buyers/{buyerID}/emailtemplates/{emailTemplateType}";
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
        if ($buyer_id !== null) {
            $resourcePath = str_replace(
                "{" . "buyerID" . "}",
                $this->apiClient->getSerializer()->toPathValue($buyer_id),
                $resourcePath
            );
        }
        // path params
        if ($email_template_type !== null) {
            $resourcePath = str_replace(
                "{" . "emailTemplateType" . "}",
                $this->apiClient->getSerializer()->toPathValue($email_template_type),
                $resourcePath
            );
        }
        // default format to json
        $resourcePath = str_replace("{format}", "json", $resourcePath);

        // body params
        $_tempBody = null;
        if (isset($email_template)) {
            $_tempBody = $email_template;
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
                null,
                '/buyers/{buyerID}/emailtemplates/{emailTemplateType}'
            );

            return array(null, $statusCode, $httpHeader);
        } catch (ApiException $e) {
            switch ($e->getCode()) {
            }

            throw $e;
        }
    }

    /**
     * Operation resetToDefault
     *
     * 
     *
     * @param string $buyer_id ID of the buyer. (required)
     * @param string $email_template_type Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. (required)
     * @return void
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function resetToDefault($buyer_id, $email_template_type)
    {
        list($response) = $this->resetToDefaultWithHttpInfo($buyer_id, $email_template_type);
        return $response;
    }

    /**
     * Operation resetToDefaultWithHttpInfo
     *
     * 
     *
     * @param string $buyer_id ID of the buyer. (required)
     * @param string $email_template_type Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. (required)
     * @return Array of null, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function resetToDefaultWithHttpInfo($buyer_id, $email_template_type)
    {
        // verify the required parameter 'buyer_id' is set
        if ($buyer_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $buyer_id when calling resetToDefault');
        }
        // verify the required parameter 'email_template_type' is set
        if ($email_template_type === null) {
            throw new \InvalidArgumentException('Missing the required parameter $email_template_type when calling resetToDefault');
        }
        // parse inputs
        $resourcePath = "/buyers/{buyerID}/emailtemplates/{emailTemplateType}";
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
        if ($buyer_id !== null) {
            $resourcePath = str_replace(
                "{" . "buyerID" . "}",
                $this->apiClient->getSerializer()->toPathValue($buyer_id),
                $resourcePath
            );
        }
        // path params
        if ($email_template_type !== null) {
            $resourcePath = str_replace(
                "{" . "emailTemplateType" . "}",
                $this->apiClient->getSerializer()->toPathValue($email_template_type),
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
                '/buyers/{buyerID}/emailtemplates/{emailTemplateType}'
            );

            return array(null, $statusCode, $httpHeader);
        } catch (ApiException $e) {
            switch ($e->getCode()) {
            }

            throw $e;
        }
    }

    /**
     * Operation update
     *
     * 
     *
     * @param string $buyer_id ID of the buyer. (required)
     * @param string $email_template_type Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. (required)
     * @param \Swagger\Client\Model\EmailTemplate $email_template  (required)
     * @return void
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function update($buyer_id, $email_template_type, $email_template)
    {
        list($response) = $this->updateWithHttpInfo($buyer_id, $email_template_type, $email_template);
        return $response;
    }

    /**
     * Operation updateWithHttpInfo
     *
     * 
     *
     * @param string $buyer_id ID of the buyer. (required)
     * @param string $email_template_type Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. (required)
     * @param \Swagger\Client\Model\EmailTemplate $email_template  (required)
     * @return Array of null, HTTP status code, HTTP response headers (array of strings)
     * @throws \Swagger\Client\ApiException on non-2xx response
     */
    public function updateWithHttpInfo($buyer_id, $email_template_type, $email_template)
    {
        // verify the required parameter 'buyer_id' is set
        if ($buyer_id === null) {
            throw new \InvalidArgumentException('Missing the required parameter $buyer_id when calling update');
        }
        // verify the required parameter 'email_template_type' is set
        if ($email_template_type === null) {
            throw new \InvalidArgumentException('Missing the required parameter $email_template_type when calling update');
        }
        // verify the required parameter 'email_template' is set
        if ($email_template === null) {
            throw new \InvalidArgumentException('Missing the required parameter $email_template when calling update');
        }
        // parse inputs
        $resourcePath = "/buyers/{buyerID}/emailtemplates/{emailTemplateType}";
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
        if ($buyer_id !== null) {
            $resourcePath = str_replace(
                "{" . "buyerID" . "}",
                $this->apiClient->getSerializer()->toPathValue($buyer_id),
                $resourcePath
            );
        }
        // path params
        if ($email_template_type !== null) {
            $resourcePath = str_replace(
                "{" . "emailTemplateType" . "}",
                $this->apiClient->getSerializer()->toPathValue($email_template_type),
                $resourcePath
            );
        }
        // default format to json
        $resourcePath = str_replace("{format}", "json", $resourcePath);

        // body params
        $_tempBody = null;
        if (isset($email_template)) {
            $_tempBody = $email_template;
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
                null,
                '/buyers/{buyerID}/emailtemplates/{emailTemplateType}'
            );

            return array(null, $statusCode, $httpHeader);
        } catch (ApiException $e) {
            switch ($e->getCode()) {
            }

            throw $e;
        }
    }

}