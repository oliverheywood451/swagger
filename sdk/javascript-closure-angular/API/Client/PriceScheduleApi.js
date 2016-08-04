/**
 * @fileoverview AUTOMATICALLY GENERATED service for API.Client.PriceScheduleApi.
 * Do not edit this file by hand or your changes will be lost next time it is
 * generated.
 *
 * A full ecommerce backend as a service.
 * Version: 0.1
 * Generated at: 2016-07-26T21:58:06.393Z
 * Generated by: class io.swagger.codegen.languages.JavascriptClosureAngularClientCodegen
 */
goog.provide('API.Client.PriceScheduleApi');

goog.require('API.Client.PriceBreak');
goog.require('API.Client.PriceSchedule');

/**
 * @constructor
 * @param {!angular.$http} $http
 * @param {!Object} $httpParamSerializer
 * @param {!angular.$injector} $injector
 * @struct
 */
API.Client.PriceScheduleApi = function($http, $httpParamSerializer, $injector) {
  /** @private {!string} */
  this.basePath_ = $injector.has('PriceScheduleApiBasePath') ?
                   /** @type {!string} */ ($injector.get('PriceScheduleApiBasePath')) :
                   'https://api.ordercloud.io/v1';

  /** @private {!Object<string, string>} */
  this.defaultHeaders_ = $injector.has('PriceScheduleApiDefaultHeaders') ?
                   /** @type {!Object<string, string>} */ (
                       $injector.get('PriceScheduleApiDefaultHeaders')) :
                   {};

  /** @private {!angular.$http} */
  this.http_ = $http;

  /** @package {!Object} */
  this.httpParamSerializer = $injector.get('$httpParamSerializer');
}
API.Client.PriceScheduleApi.$inject = ['$http', '$httpParamSerializer', '$injector'];

/**
 * 
 * 
 * @param {!PriceSchedule} priceSchedule 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Object>}
 */
API.Client.PriceScheduleApi.prototype.create = function(priceSchedule, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/priceschedules';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'priceSchedule' is set
  if (!priceSchedule) {
    throw new Error('Missing required parameter priceSchedule when calling create');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: priceSchedule,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string} priceScheduleID ID of the price schedule.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise}
 */
API.Client.PriceScheduleApi.prototype.delete = function(priceScheduleID, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/priceschedules/{priceScheduleID}'
      .replace('{' + 'priceScheduleID' + '}', String(priceScheduleID));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'priceScheduleID' is set
  if (!priceScheduleID) {
    throw new Error('Missing required parameter priceScheduleID when calling delete');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'DELETE',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string} priceScheduleID ID of the price schedule.
 * @param {!number} quantity Quantity of the price schedule.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise}
 */
API.Client.PriceScheduleApi.prototype.deletePriceBreak = function(priceScheduleID, quantity, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/priceschedules/{priceScheduleID}/PriceBreaks'
      .replace('{' + 'priceScheduleID' + '}', String(priceScheduleID));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'priceScheduleID' is set
  if (!priceScheduleID) {
    throw new Error('Missing required parameter priceScheduleID when calling deletePriceBreak');
  }
  // verify required parameter 'quantity' is set
  if (!quantity) {
    throw new Error('Missing required parameter quantity when calling deletePriceBreak');
  }
  if (quantity !== undefined) {
    queryParameters['quantity'] = quantity;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'DELETE',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string} priceScheduleID ID of the price schedule.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Object>}
 */
API.Client.PriceScheduleApi.prototype.get = function(priceScheduleID, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/priceschedules/{priceScheduleID}'
      .replace('{' + 'priceScheduleID' + '}', String(priceScheduleID));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'priceScheduleID' is set
  if (!priceScheduleID) {
    throw new Error('Missing required parameter priceScheduleID when calling get');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string=} opt_search Word or phrase to search for.
 * @param {!string=} opt_searchOn Comma-delimited list of fields to search on.
 * @param {!string=} opt_sortBy Comma-delimited list of fields to sort by.
 * @param {!number=} opt_page Page of results to return. Default: 1
 * @param {!number=} opt_pageSize Number of results to return per page. Default: 20, max: 100.
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Object>}
 */
API.Client.PriceScheduleApi.prototype.list = function(opt_search, opt_searchOn, opt_sortBy, opt_page, opt_pageSize, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/priceschedules';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  if (opt_search !== undefined) {
    queryParameters['search'] = opt_search;
  }

  if (opt_searchOn !== undefined) {
    queryParameters['searchOn'] = opt_searchOn;
  }

  if (opt_sortBy !== undefined) {
    queryParameters['sortBy'] = opt_sortBy;
  }

  if (opt_page !== undefined) {
    queryParameters['page'] = opt_page;
  }

  if (opt_pageSize !== undefined) {
    queryParameters['pageSize'] = opt_pageSize;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string} priceScheduleID ID of the price schedule.
 * @param {!PriceSchedule} priceSchedule 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Object>}
 */
API.Client.PriceScheduleApi.prototype.patch = function(priceScheduleID, priceSchedule, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/priceschedules/{priceScheduleID}'
      .replace('{' + 'priceScheduleID' + '}', String(priceScheduleID));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'priceScheduleID' is set
  if (!priceScheduleID) {
    throw new Error('Missing required parameter priceScheduleID when calling patch');
  }
  // verify required parameter 'priceSchedule' is set
  if (!priceSchedule) {
    throw new Error('Missing required parameter priceSchedule when calling patch');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'PATCH',
    url: path,
    json: true,
    data: priceSchedule,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string} priceScheduleID ID of the price schedule.
 * @param {!PriceBreak} priceBreak 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Object>}
 */
API.Client.PriceScheduleApi.prototype.savePriceBreak = function(priceScheduleID, priceBreak, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/priceschedules/{priceScheduleID}/PriceBreaks'
      .replace('{' + 'priceScheduleID' + '}', String(priceScheduleID));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'priceScheduleID' is set
  if (!priceScheduleID) {
    throw new Error('Missing required parameter priceScheduleID when calling savePriceBreak');
  }
  // verify required parameter 'priceBreak' is set
  if (!priceBreak) {
    throw new Error('Missing required parameter priceBreak when calling savePriceBreak');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: priceBreak,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string} priceScheduleID ID of the price schedule.
 * @param {!PriceSchedule} priceSchedule 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.Object>}
 */
API.Client.PriceScheduleApi.prototype.update = function(priceScheduleID, priceSchedule, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/priceschedules/{priceScheduleID}'
      .replace('{' + 'priceScheduleID' + '}', String(priceScheduleID));

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'priceScheduleID' is set
  if (!priceScheduleID) {
    throw new Error('Missing required parameter priceScheduleID when calling update');
  }
  // verify required parameter 'priceSchedule' is set
  if (!priceSchedule) {
    throw new Error('Missing required parameter priceSchedule when calling update');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'PUT',
    url: path,
    json: true,
    data: priceSchedule,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}