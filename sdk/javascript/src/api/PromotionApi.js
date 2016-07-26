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
    define(['ApiClient', 'model/Promotion', 'model/PromotionAssignment'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('../model/Promotion'), require('../model/PromotionAssignment'));
  } else {
    // Browser globals (root is window)
    if (!root.OrderCloud) {
      root.OrderCloud = {};
    }
    root.OrderCloud.PromotionApi = factory(root.OrderCloud.ApiClient, root.OrderCloud.Promotion, root.OrderCloud.PromotionAssignment);
  }
}(this, function(ApiClient, Promotion, PromotionAssignment) {
  'use strict';

  /**
   * Promotion service.
   * @module api/PromotionApi
   * @version 0.1
   */

  /**
   * Constructs a new PromotionApi. 
   * @alias module:api/PromotionApi
   * @class
   * @param {module:ApiClient} apiClient Optional API client implementation to use,
   * default to {@link module:ApiClient#instance} if unspecified.
   */
  var exports = function(apiClient) {
    this.apiClient = apiClient || ApiClient.instance;


    /**
     * Callback function to receive the result of the callDelete operation.
     * @callback module:api/PromotionApi~callDeleteCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} promotionID ID of the promotion.
     * @param {module:api/PromotionApi~callDeleteCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.callDelete = function(promotionID, callback) {
      var postBody = null;

      // verify the required parameter 'promotionID' is set
      if (promotionID == undefined || promotionID == null) {
        throw "Missing the required parameter 'promotionID' when calling callDelete";
      }


      var pathParams = {
        'promotionID': promotionID
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
        '/promotions/{promotionID}', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the create operation.
     * @callback module:api/PromotionApi~createCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:model/Promotion} promo 
     * @param {module:api/PromotionApi~createCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.create = function(promo, callback) {
      var postBody = promo;

      // verify the required parameter 'promo' is set
      if (promo == undefined || promo == null) {
        throw "Missing the required parameter 'promo' when calling create";
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
        '/promotions', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the deleteAssignment operation.
     * @callback module:api/PromotionApi~deleteAssignmentCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} promotionID ID of the promotion.
     * @param {String} buyerID ID of the buyer.
     * @param {Object} opts Optional parameters
     * @param {String} opts.userID ID of the user.
     * @param {String} opts.userGroupID ID of the user group.
     * @param {module:api/PromotionApi~deleteAssignmentCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.deleteAssignment = function(promotionID, buyerID, opts, callback) {
      opts = opts || {};
      var postBody = null;

      // verify the required parameter 'promotionID' is set
      if (promotionID == undefined || promotionID == null) {
        throw "Missing the required parameter 'promotionID' when calling deleteAssignment";
      }

      // verify the required parameter 'buyerID' is set
      if (buyerID == undefined || buyerID == null) {
        throw "Missing the required parameter 'buyerID' when calling deleteAssignment";
      }


      var pathParams = {
        'promotionID': promotionID
      };
      var queryParams = {
        'buyerID': buyerID,
        'userID': opts['userID'],
        'userGroupID': opts['userGroupID']
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
        '/promotions/{promotionID}/assignments', 'DELETE',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the get operation.
     * @callback module:api/PromotionApi~getCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} promotionID ID of the promotion.
     * @param {module:api/PromotionApi~getCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.get = function(promotionID, callback) {
      var postBody = null;

      // verify the required parameter 'promotionID' is set
      if (promotionID == undefined || promotionID == null) {
        throw "Missing the required parameter 'promotionID' when calling get";
      }


      var pathParams = {
        'promotionID': promotionID
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
        '/promotions/{promotionID}', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the list operation.
     * @callback module:api/PromotionApi~listCallback
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
     * @param {module:api/PromotionApi~listCallback} callback The callback function, accepting three arguments: error, data, response
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
        '/promotions', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the listAssignments operation.
     * @callback module:api/PromotionApi~listAssignmentsCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} buyerID ID of the buyer.
     * @param {Object} opts Optional parameters
     * @param {String} opts.promotionID ID of the promotion.
     * @param {String} opts.userID ID of the user.
     * @param {String} opts.userGroupID ID of the user group.
     * @param {String} opts.level Level of the promotion.
     * @param {Integer} opts.page Page of results to return. Default: 1
     * @param {Integer} opts.pageSize Number of results to return per page. Default: 20, max: 100.
     * @param {module:api/PromotionApi~listAssignmentsCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.listAssignments = function(buyerID, opts, callback) {
      opts = opts || {};
      var postBody = null;

      // verify the required parameter 'buyerID' is set
      if (buyerID == undefined || buyerID == null) {
        throw "Missing the required parameter 'buyerID' when calling listAssignments";
      }


      var pathParams = {
      };
      var queryParams = {
        'buyerID': buyerID,
        'promotionID': opts['promotionID'],
        'userID': opts['userID'],
        'userGroupID': opts['userGroupID'],
        'level': opts['level'],
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
        '/promotions/assignments', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the patch operation.
     * @callback module:api/PromotionApi~patchCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} promotionID ID of the promotion.
     * @param {module:model/Promotion} partialPromotion 
     * @param {module:api/PromotionApi~patchCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.patch = function(promotionID, partialPromotion, callback) {
      var postBody = partialPromotion;

      // verify the required parameter 'promotionID' is set
      if (promotionID == undefined || promotionID == null) {
        throw "Missing the required parameter 'promotionID' when calling patch";
      }

      // verify the required parameter 'partialPromotion' is set
      if (partialPromotion == undefined || partialPromotion == null) {
        throw "Missing the required parameter 'partialPromotion' when calling patch";
      }


      var pathParams = {
        'promotionID': promotionID
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
        '/promotions/{promotionID}', 'PATCH',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the saveAssignment operation.
     * @callback module:api/PromotionApi~saveAssignmentCallback
     * @param {String} error Error message, if any.
     * @param data This operation does not return a value.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:model/PromotionAssignment} assignment 
     * @param {module:api/PromotionApi~saveAssignmentCallback} callback The callback function, accepting three arguments: error, data, response
     */
    this.saveAssignment = function(assignment, callback) {
      var postBody = assignment;

      // verify the required parameter 'assignment' is set
      if (assignment == undefined || assignment == null) {
        throw "Missing the required parameter 'assignment' when calling saveAssignment";
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
      var returnType = null;

      return this.apiClient.callApi(
        '/promotions/assignments', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the update operation.
     * @callback module:api/PromotionApi~updateCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} promotionID ID of the promotion.
     * @param {module:model/Promotion} promo 
     * @param {module:api/PromotionApi~updateCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.update = function(promotionID, promo, callback) {
      var postBody = promo;

      // verify the required parameter 'promotionID' is set
      if (promotionID == undefined || promotionID == null) {
        throw "Missing the required parameter 'promotionID' when calling update";
      }

      // verify the required parameter 'promo' is set
      if (promo == undefined || promo == null) {
        throw "Missing the required parameter 'promo' when calling update";
      }


      var pathParams = {
        'promotionID': promotionID
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
        '/promotions/{promotionID}', 'PUT',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }
  };

  return exports;
}));
