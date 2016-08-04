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
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.OrderCloud);
  }
}(this, function(expect, OrderCloud) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new OrderCloud.LineItem();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('LineItem', function() {
    it('should create an instance of LineItem', function() {
      // uncomment below and update the code to test LineItem
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be.a(OrderCloud.LineItem);
    });

    it('should have the property ID (base name: "ID")', function() {
      // uncomment below and update the code to test the property ID
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

    it('should have the property productID (base name: "ProductID")', function() {
      // uncomment below and update the code to test the property productID
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

    it('should have the property quantity (base name: "Quantity")', function() {
      // uncomment below and update the code to test the property quantity
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

    it('should have the property unitPrice (base name: "UnitPrice")', function() {
      // uncomment below and update the code to test the property unitPrice
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

    it('should have the property costCenter (base name: "CostCenter")', function() {
      // uncomment below and update the code to test the property costCenter
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

    it('should have the property dateNeeded (base name: "DateNeeded")', function() {
      // uncomment below and update the code to test the property dateNeeded
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

    it('should have the property shippingAccount (base name: "ShippingAccount")', function() {
      // uncomment below and update the code to test the property shippingAccount
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

    it('should have the property shippingAddressID (base name: "ShippingAddressID")', function() {
      // uncomment below and update the code to test the property shippingAddressID
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

    it('should have the property shipfromAddressID (base name: "ShipfromAddressID")', function() {
      // uncomment below and update the code to test the property shipfromAddressID
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

    it('should have the property shipperID (base name: "ShipperID")', function() {
      // uncomment below and update the code to test the property shipperID
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

    it('should have the property specs (base name: "Specs")', function() {
      // uncomment below and update the code to test the property specs
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

    it('should have the property xp (base name: "xp")', function() {
      // uncomment below and update the code to test the property xp
      //var instane = new OrderCloud.LineItem();
      //expect(instance).to.be();
    });

  });

}));