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

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/Shipment', 'model/ShipmentItem'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('../model/Shipment'), require('../model/ShipmentItem'));
  } else {
    // Browser globals (root is window)
    if (!root.OrderCloud) {
      root.OrderCloud = {};
    }
    root.OrderCloud.ShipmentApi = factory(root.OrderCloud.ApiClient, root.OrderCloud.Shipment, root.OrderCloud.ShipmentItem);
  }
}(this, function(ApiClient, Shipment, ShipmentItem) {
  'use strict';

  /**
   * Shipment service.
   * @module api/ShipmentApi
   * @version 0.1
   */

  /**
   * Constructs a new ShipmentApi. 
   * @alias module:api/ShipmentApi
   * @class
   * @param {module:ApiClient} apiClient Optional API client implementation to use,
   * default to {@link module:ApiClient#instance} if unspecified.
   */
  var exports = function(apiClient) {
    this.apiClient = apiClient || ApiClient.instance;


    /**
     * Callback function to receive the result of the callDelete operation.
     * @callback module:api/ShipmentApi~callDeleteCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} buyerID ID of the buyer.
     * @param {String} shipmentID ID of the shipment.
     * @param {module:api/ShipmentApi~callDeleteCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.callDelete = function(buyerID, shipmentID, callback) {
      var postBody = null;

      // verify the required parameter 'buyerID' is set
      if (buyerID == undefined || buyerID == null) {
        throw "Missing the required parameter 'buyerID' when calling callDelete";
      }

      // verify the required parameter 'shipmentID' is set
      if (shipmentID == undefined || shipmentID == null) {
        throw "Missing the required parameter 'shipmentID' when calling callDelete";
      }


      var pathParams = {
        'buyerID': buyerID,
        'shipmentID': shipmentID
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['auth'];
      var contentTypes = [];
      var accepts = [];
      var returnType = null;

      return this.apiClient.callApi(
        '/buyers/{buyerID}/shipments/{shipmentID}', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the create operation.
     * @callback module:api/ShipmentApi~createCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} buyerID ID of the buyer.
     * @param {module:model/Shipment} shipment 
     * @param {module:api/ShipmentApi~createCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.create = function(buyerID, shipment, callback) {
      var postBody = shipment;

      // verify the required parameter 'buyerID' is set
      if (buyerID == undefined || buyerID == null) {
        throw "Missing the required parameter 'buyerID' when calling create";
      }

      // verify the required parameter 'shipment' is set
      if (shipment == undefined || shipment == null) {
        throw "Missing the required parameter 'shipment' when calling create";
      }


      var pathParams = {
        'buyerID': buyerID
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['auth'];
      var contentTypes = [];
      var accepts = [];
      var returnType = Object;

      return this.apiClient.callApi(
        '/buyers/{buyerID}/shipments', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the deleteItem operation.
     * @callback module:api/ShipmentApi~deleteItemCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} buyerID ID of the buyer.
     * @param {String} shipmentID ID of the shipment.
     * @param {String} orderID ID of the order.
     * @param {String} lineItemID ID of the line item.
     * @param {module:api/ShipmentApi~deleteItemCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.deleteItem = function(buyerID, shipmentID, orderID, lineItemID, callback) {
      var postBody = null;

      // verify the required parameter 'buyerID' is set
      if (buyerID == undefined || buyerID == null) {
        throw "Missing the required parameter 'buyerID' when calling deleteItem";
      }

      // verify the required parameter 'shipmentID' is set
      if (shipmentID == undefined || shipmentID == null) {
        throw "Missing the required parameter 'shipmentID' when calling deleteItem";
      }

      // verify the required parameter 'orderID' is set
      if (orderID == undefined || orderID == null) {
        throw "Missing the required parameter 'orderID' when calling deleteItem";
      }

      // verify the required parameter 'lineItemID' is set
      if (lineItemID == undefined || lineItemID == null) {
        throw "Missing the required parameter 'lineItemID' when calling deleteItem";
      }


      var pathParams = {
        'buyerID': buyerID,
        'shipmentID': shipmentID,
        'orderID': orderID,
        'lineItemID': lineItemID
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['auth'];
      var contentTypes = [];
      var accepts = [];
      var returnType = Object;

      return this.apiClient.callApi(
        '/buyers/{buyerID}/shipments/{shipmentID}/items/{orderID}/{lineItemID}', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the get operation.
     * @callback module:api/ShipmentApi~getCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} buyerID ID of the buyer.
     * @param {String} shipmentID ID of the shipment.
     * @param {module:api/ShipmentApi~getCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.get = function(buyerID, shipmentID, callback) {
      var postBody = null;

      // verify the required parameter 'buyerID' is set
      if (buyerID == undefined || buyerID == null) {
        throw "Missing the required parameter 'buyerID' when calling get";
      }

      // verify the required parameter 'shipmentID' is set
      if (shipmentID == undefined || shipmentID == null) {
        throw "Missing the required parameter 'shipmentID' when calling get";
      }


      var pathParams = {
        'buyerID': buyerID,
        'shipmentID': shipmentID
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['auth'];
      var contentTypes = [];
      var accepts = [];
      var returnType = Object;

      return this.apiClient.callApi(
        '/buyers/{buyerID}/shipments/{shipmentID}', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the list operation.
     * @callback module:api/ShipmentApi~listCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} buyerID ID of the buyer.
     * @param {Object} opts Optional parameters
     * @param {String} opts.orderID ID of the order.
     * @param {String} opts.search Word or phrase to search for.
     * @param {String} opts.searchOn Comma-delimited list of fields to search on.
     * @param {String} opts.sortBy Comma-delimited list of fields to sort by.
     * @param {Integer} opts.page Page of results to return. Default: 1
     * @param {Integer} opts.pageSize Number of results to return per page. Default: 20, max: 100.
     * @param {module:api/ShipmentApi~listCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.list = function(buyerID, opts, callback) {
      opts = opts || {};
      var postBody = null;

      // verify the required parameter 'buyerID' is set
      if (buyerID == undefined || buyerID == null) {
        throw "Missing the required parameter 'buyerID' when calling list";
      }


      var pathParams = {
        'buyerID': buyerID
      };
      var queryParams = {
        'orderID': opts['orderID'],
        'search': opts['search'],
        'searchOn': opts['searchOn'],
        'sortBy': opts['sortBy'],
        'page': opts['page'],
        'pageSize': opts['pageSize']
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['auth'];
      var contentTypes = [];
      var accepts = [];
      var returnType = Object;

      return this.apiClient.callApi(
        '/buyers/{buyerID}/shipments', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the patch operation.
     * @callback module:api/ShipmentApi~patchCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} buyerID ID of the buyer.
     * @param {String} shipmentID ID of the shipment.
     * @param {module:model/Shipment} shipment 
     * @param {module:api/ShipmentApi~patchCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.patch = function(buyerID, shipmentID, shipment, callback) {
      var postBody = shipment;

      // verify the required parameter 'buyerID' is set
      if (buyerID == undefined || buyerID == null) {
        throw "Missing the required parameter 'buyerID' when calling patch";
      }

      // verify the required parameter 'shipmentID' is set
      if (shipmentID == undefined || shipmentID == null) {
        throw "Missing the required parameter 'shipmentID' when calling patch";
      }

      // verify the required parameter 'shipment' is set
      if (shipment == undefined || shipment == null) {
        throw "Missing the required parameter 'shipment' when calling patch";
      }


      var pathParams = {
        'buyerID': buyerID,
        'shipmentID': shipmentID
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['auth'];
      var contentTypes = [];
      var accepts = [];
      var returnType = Object;

      return this.apiClient.callApi(
        '/buyers/{buyerID}/shipments/{shipmentID}', 'PATCH',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the saveItem operation.
     * @callback module:api/ShipmentApi~saveItemCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} buyerID ID of the buyer.
     * @param {String} shipmentID ID of the shipment.
     * @param {module:model/ShipmentItem} item 
     * @param {module:api/ShipmentApi~saveItemCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.saveItem = function(buyerID, shipmentID, item, callback) {
      var postBody = item;

      // verify the required parameter 'buyerID' is set
      if (buyerID == undefined || buyerID == null) {
        throw "Missing the required parameter 'buyerID' when calling saveItem";
      }

      // verify the required parameter 'shipmentID' is set
      if (shipmentID == undefined || shipmentID == null) {
        throw "Missing the required parameter 'shipmentID' when calling saveItem";
      }

      // verify the required parameter 'item' is set
      if (item == undefined || item == null) {
        throw "Missing the required parameter 'item' when calling saveItem";
      }


      var pathParams = {
        'buyerID': buyerID,
        'shipmentID': shipmentID
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['auth'];
      var contentTypes = [];
      var accepts = [];
      var returnType = Object;

      return this.apiClient.callApi(
        '/buyers/{buyerID}/shipments/{shipmentID}/items', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the update operation.
     * @callback module:api/ShipmentApi~updateCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} buyerID ID of the buyer.
     * @param {String} shipmentID ID of the shipment.
     * @param {module:model/Shipment} shipment 
     * @param {module:api/ShipmentApi~updateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.update = function(buyerID, shipmentID, shipment, callback) {
      var postBody = shipment;

      // verify the required parameter 'buyerID' is set
      if (buyerID == undefined || buyerID == null) {
        throw "Missing the required parameter 'buyerID' when calling update";
      }

      // verify the required parameter 'shipmentID' is set
      if (shipmentID == undefined || shipmentID == null) {
        throw "Missing the required parameter 'shipmentID' when calling update";
      }

      // verify the required parameter 'shipment' is set
      if (shipment == undefined || shipment == null) {
        throw "Missing the required parameter 'shipment' when calling update";
      }


      var pathParams = {
        'buyerID': buyerID,
        'shipmentID': shipmentID
      };
      var queryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['auth'];
      var contentTypes = [];
      var accepts = [];
      var returnType = Object;

      return this.apiClient.callApi(
        '/buyers/{buyerID}/shipments/{shipmentID}', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }
  };

  return exports;
}));