/* 
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

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using OrderCloud.Client;
using OrderCloud.Api;
using OrderCloud.Model;

namespace OrderCloud.Test
{
    /// <summary>
    ///  Class for testing ProductApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class ProductApiTests
    {
        private ProductApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new ProductApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of ProductApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' ProductApi
            //Assert.IsInstanceOfType(typeof(ProductApi), instance, "instance is a ProductApi");
        }

        
        /// <summary>
        /// Test Create
        /// </summary>
        [Test]
        public void CreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //Product product = null;
            //var response = instance.Create(product);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test Delete
        /// </summary>
        [Test]
        public void DeleteTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //instance.Delete(productID);
            
        }
        
        /// <summary>
        /// Test DeleteAssignment
        /// </summary>
        [Test]
        public void DeleteAssignmentTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string buyerID = null;
            //string productID = null;
            //string userID = null;
            //string userGroupID = null;
            //instance.DeleteAssignment(buyerID, productID, userID, userGroupID);
            
        }
        
        /// <summary>
        /// Test GenerateVariants
        /// </summary>
        [Test]
        public void GenerateVariantsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //bool? overwriteExisting = null;
            //var response = instance.GenerateVariants(productID, overwriteExisting);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test Get
        /// </summary>
        [Test]
        public void GetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //var response = instance.Get(productID);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test GetInventory
        /// </summary>
        [Test]
        public void GetInventoryTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //var response = instance.GetInventory(productID);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test GetVariant
        /// </summary>
        [Test]
        public void GetVariantTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //string variantID = null;
            //var response = instance.GetVariant(productID, variantID);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test GetVariantInventory
        /// </summary>
        [Test]
        public void GetVariantInventoryTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //string variantID = null;
            //var response = instance.GetVariantInventory(productID, variantID);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test List
        /// </summary>
        [Test]
        public void ListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string search = null;
            //string searchOn = null;
            //string sortBy = null;
            //int? page = null;
            //int? pageSize = null;
            //var response = instance.List(search, searchOn, sortBy, page, pageSize);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test ListAssignments
        /// </summary>
        [Test]
        public void ListAssignmentsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //string buyerID = null;
            //string userID = null;
            //string userGroupID = null;
            //string level = null;
            //string priceScheduleID = null;
            //int? page = null;
            //int? pageSize = null;
            //var response = instance.ListAssignments(productID, buyerID, userID, userGroupID, level, priceScheduleID, page, pageSize);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test ListInventory
        /// </summary>
        [Test]
        public void ListInventoryTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string search = null;
            //string searchOn = null;
            //string sortBy = null;
            //int? page = null;
            //int? pageSize = null;
            //var response = instance.ListInventory(search, searchOn, sortBy, page, pageSize);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test ListVariantInventory
        /// </summary>
        [Test]
        public void ListVariantInventoryTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //string search = null;
            //string searchOn = null;
            //string sortBy = null;
            //int? page = null;
            //int? pageSize = null;
            //var response = instance.ListVariantInventory(productID, search, searchOn, sortBy, page, pageSize);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test ListVariants
        /// </summary>
        [Test]
        public void ListVariantsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //string search = null;
            //string searchOn = null;
            //string sortBy = null;
            //int? page = null;
            //int? pageSize = null;
            //var response = instance.ListVariants(productID, search, searchOn, sortBy, page, pageSize);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test Patch
        /// </summary>
        [Test]
        public void PatchTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //Product product = null;
            //instance.Patch(productID, product);
            
        }
        
        /// <summary>
        /// Test PatchVariant
        /// </summary>
        [Test]
        public void PatchVariantTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //string variantID = null;
            //Variant variant = null;
            //var response = instance.PatchVariant(productID, variantID, variant);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test SaveAssignment
        /// </summary>
        [Test]
        public void SaveAssignmentTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //ProductAssignment productAssignment = null;
            //instance.SaveAssignment(productAssignment);
            
        }
        
        /// <summary>
        /// Test Update
        /// </summary>
        [Test]
        public void UpdateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //Product product = null;
            //var response = instance.Update(productID, product);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test UpdateInventory
        /// </summary>
        [Test]
        public void UpdateInventoryTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //int? inventory = null;
            //var response = instance.UpdateInventory(productID, inventory);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test UpdateVariant
        /// </summary>
        [Test]
        public void UpdateVariantTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //string variantID = null;
            //Variant variant = null;
            //var response = instance.UpdateVariant(productID, variantID, variant);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test UpdateVariantInventory
        /// </summary>
        [Test]
        public void UpdateVariantInventoryTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string productID = null;
            //string variantID = null;
            //int? inventory = null;
            //var response = instance.UpdateVariantInventory(productID, variantID, inventory);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
    }

}
