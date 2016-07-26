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
    define(['ApiClient', 'model/PriceSchedule', 'model/PriceBreak'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('../model/PriceSchedule'), require('../model/PriceBreak'));
  } else {
    // Browser globals (root is window)
    if (!root.OrderCloud) {
      root.OrderCloud = {};
    }
    root.OrderCloud.PriceScheduleApi = factory(root.OrderCloud.ApiClient, root.OrderCloud.PriceSchedule, root.OrderCloud.PriceBreak);
  }
}(this, function(ApiClient, PriceSchedule, PriceBreak) {
  'use strict';

  /**
   * PriceSchedule service.
   * @module api/PriceScheduleApi
   * @version 0.1
   */

  /**
   * Constructs a new PriceScheduleApi. 
   * @alias module:api/PriceScheduleApi
   * @class
   * @param {module:ApiClient} apiClient Optional API client implementation to use,
   * default to {@link module:ApiClient#instance} if unspecified.
   */
  var exports = function(apiClient) {
    this.apiClient = apiClient || ApiClient.instance;


    /**
     * Callback function to receive the result of the callDelete operation.
     * @callback module:api/PriceScheduleApi~callDeleteCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} priceScheduleID ID of the price schedule.
     * @param {module:api/PriceScheduleApi~callDeleteCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.callDelete = function(priceScheduleID, callback) {
      var postBody = null;

      // verify the required parameter 'priceScheduleID' is set
      if (priceScheduleID == undefined || priceScheduleID == null) {
        throw "Missing the required parameter 'priceScheduleID' when calling callDelete";
      }


      var pathParams = {
        'priceScheduleID': priceScheduleID
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
        '/priceschedules/{priceScheduleID}', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the create operation.
     * @callback module:api/PriceScheduleApi~createCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:model/PriceSchedule} priceSchedule 
     * @param {module:api/PriceScheduleApi~createCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.create = function(priceSchedule, callback) {
      var postBody = priceSchedule;

      // verify the required parameter 'priceSchedule' is set
      if (priceSchedule == undefined || priceSchedule == null) {
        throw "Missing the required parameter 'priceSchedule' when calling create";
      }


      var pathParams = {
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
        '/priceschedules', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the deletePriceBreak operation.
     * @callback module:api/PriceScheduleApi~deletePriceBreakCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} priceScheduleID ID of the price schedule.
     * @param {Integer} quantity Quantity of the price schedule.
     * @param {module:api/PriceScheduleApi~deletePriceBreakCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.deletePriceBreak = function(priceScheduleID, quantity, callback) {
      var postBody = null;

      // verify the required parameter 'priceScheduleID' is set
      if (priceScheduleID == undefined || priceScheduleID == null) {
        throw "Missing the required parameter 'priceScheduleID' when calling deletePriceBreak";
      }

      // verify the required parameter 'quantity' is set
      if (quantity == undefined || quantity == null) {
        throw "Missing the required parameter 'quantity' when calling deletePriceBreak";
      }


      var pathParams = {
        'priceScheduleID': priceScheduleID
      };
      var queryParams = {
        'quantity': quantity
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
        '/priceschedules/{priceScheduleID}/PriceBreaks', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the get operation.
     * @callback module:api/PriceScheduleApi~getCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} priceScheduleID ID of the price schedule.
     * @param {module:api/PriceScheduleApi~getCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.get = function(priceScheduleID, callback) {
      var postBody = null;

      // verify the required parameter 'priceScheduleID' is set
      if (priceScheduleID == undefined || priceScheduleID == null) {
        throw "Missing the required parameter 'priceScheduleID' when calling get";
      }


      var pathParams = {
        'priceScheduleID': priceScheduleID
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
        '/priceschedules/{priceScheduleID}', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the list operation.
     * @callback module:api/PriceScheduleApi~listCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {Object} opts Optional parameters
     * @param {String} opts.search Word or phrase to search for.
     * @param {String} opts.searchOn Comma-delimited list of fields to search on.
     * @param {String} opts.sortBy Comma-delimited list of fields to sort by.
     * @param {Integer} opts.page Page of results to return. Default: 1
     * @param {Integer} opts.pageSize Number of results to return per page. Default: 20, max: 100.
     * @param {module:api/PriceScheduleApi~listCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.list = function(opts, callback) {
      opts = opts || {};
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
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
        '/priceschedules', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the patch operation.
     * @callback module:api/PriceScheduleApi~patchCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} priceScheduleID ID of the price schedule.
     * @param {module:model/PriceSchedule} priceSchedule 
     * @param {module:api/PriceScheduleApi~patchCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.patch = function(priceScheduleID, priceSchedule, callback) {
      var postBody = priceSchedule;

      // verify the required parameter 'priceScheduleID' is set
      if (priceScheduleID == undefined || priceScheduleID == null) {
        throw "Missing the required parameter 'priceScheduleID' when calling patch";
      }

      // verify the required parameter 'priceSchedule' is set
      if (priceSchedule == undefined || priceSchedule == null) {
        throw "Missing the required parameter 'priceSchedule' when calling patch";
      }


      var pathParams = {
        'priceScheduleID': priceScheduleID
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
        '/priceschedules/{priceScheduleID}', 'PATCH',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the savePriceBreak operation.
     * @callback module:api/PriceScheduleApi~savePriceBreakCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} priceScheduleID ID of the price schedule.
     * @param {module:model/PriceBreak} priceBreak 
     * @param {module:api/PriceScheduleApi~savePriceBreakCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.savePriceBreak = function(priceScheduleID, priceBreak, callback) {
      var postBody = priceBreak;

      // verify the required parameter 'priceScheduleID' is set
      if (priceScheduleID == undefined || priceScheduleID == null) {
        throw "Missing the required parameter 'priceScheduleID' when calling savePriceBreak";
      }

      // verify the required parameter 'priceBreak' is set
      if (priceBreak == undefined || priceBreak == null) {
        throw "Missing the required parameter 'priceBreak' when calling savePriceBreak";
      }


      var pathParams = {
        'priceScheduleID': priceScheduleID
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
        '/priceschedules/{priceScheduleID}/PriceBreaks', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the update operation.
     * @callback module:api/PriceScheduleApi~updateCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} priceScheduleID ID of the price schedule.
     * @param {module:model/PriceSchedule} priceSchedule 
     * @param {module:api/PriceScheduleApi~updateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.update = function(priceScheduleID, priceSchedule, callback) {
      var postBody = priceSchedule;

      // verify the required parameter 'priceScheduleID' is set
      if (priceScheduleID == undefined || priceScheduleID == null) {
        throw "Missing the required parameter 'priceScheduleID' when calling update";
      }

      // verify the required parameter 'priceSchedule' is set
      if (priceSchedule == undefined || priceSchedule == null) {
        throw "Missing the required parameter 'priceSchedule' when calling update";
      }


      var pathParams = {
        'priceScheduleID': priceScheduleID
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
        '/priceschedules/{priceScheduleID}', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }
  };

  return exports;
}));
