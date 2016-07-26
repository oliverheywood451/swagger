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
    instance = new OrderCloud.BuyerAddress();
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

  describe('BuyerAddress', function() {
    it('should create an instance of BuyerAddress', function() {
      // uncomment below and update the code to test BuyerAddress
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be.a(OrderCloud.BuyerAddress);
    });

    it('should have the property shipping (base name: "Shipping")', function() {
      // uncomment below and update the code to test the property shipping
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property billing (base name: "Billing")', function() {
      // uncomment below and update the code to test the property billing
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property companyName (base name: "CompanyName")', function() {
      // uncomment below and update the code to test the property companyName
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property firstName (base name: "FirstName")', function() {
      // uncomment below and update the code to test the property firstName
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property lastName (base name: "LastName")', function() {
      // uncomment below and update the code to test the property lastName
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property street1 (base name: "Street1")', function() {
      // uncomment below and update the code to test the property street1
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property street2 (base name: "Street2")', function() {
      // uncomment below and update the code to test the property street2
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property city (base name: "City")', function() {
      // uncomment below and update the code to test the property city
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property state (base name: "State")', function() {
      // uncomment below and update the code to test the property state
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property zip (base name: "Zip")', function() {
      // uncomment below and update the code to test the property zip
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property country (base name: "Country")', function() {
      // uncomment below and update the code to test the property country
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property phone (base name: "Phone")', function() {
      // uncomment below and update the code to test the property phone
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property addressName (base name: "AddressName")', function() {
      // uncomment below and update the code to test the property addressName
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

    it('should have the property xp (base name: "xp")', function() {
      // uncomment below and update the code to test the property xp
      //var instane = new OrderCloud.BuyerAddress();
      //expect(instance).to.be();
    });

  });

}));
