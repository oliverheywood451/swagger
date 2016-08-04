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
    ///  Class for testing UserGroupApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class UserGroupApiTests
    {
        private UserGroupApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new UserGroupApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of UserGroupApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' UserGroupApi
            //Assert.IsInstanceOfType(typeof(UserGroupApi), instance, "instance is a UserGroupApi");
        }

        
        /// <summary>
        /// Test Create
        /// </summary>
        [Test]
        public void CreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string buyerID = null;
            //UserGroup group = null;
            //var response = instance.Create(buyerID, group);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test Delete
        /// </summary>
        [Test]
        public void DeleteTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string buyerID = null;
            //string userGroupID = null;
            //instance.Delete(buyerID, userGroupID);
            
        }
        
        /// <summary>
        /// Test DeleteUserAssignment
        /// </summary>
        [Test]
        public void DeleteUserAssignmentTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string buyerID = null;
            //string userGroupID = null;
            //string userID = null;
            //instance.DeleteUserAssignment(buyerID, userGroupID, userID);
            
        }
        
        /// <summary>
        /// Test Get
        /// </summary>
        [Test]
        public void GetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string buyerID = null;
            //string userGroupID = null;
            //var response = instance.Get(buyerID, userGroupID);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test List
        /// </summary>
        [Test]
        public void ListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string buyerID = null;
            //string search = null;
            //string searchOn = null;
            //string sortBy = null;
            //int? page = null;
            //int? pageSize = null;
            //var response = instance.List(buyerID, search, searchOn, sortBy, page, pageSize);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test ListUserAssignments
        /// </summary>
        [Test]
        public void ListUserAssignmentsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string buyerID = null;
            //string userGroupID = null;
            //string userID = null;
            //int? page = null;
            //int? pageSize = null;
            //var response = instance.ListUserAssignments(buyerID, userGroupID, userID, page, pageSize);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test Patch
        /// </summary>
        [Test]
        public void PatchTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string buyerID = null;
            //string userGroupID = null;
            //UserGroup group = null;
            //instance.Patch(buyerID, userGroupID, group);
            
        }
        
        /// <summary>
        /// Test SaveUserAssignment
        /// </summary>
        [Test]
        public void SaveUserAssignmentTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string buyerID = null;
            //UserGroupAssignment userGroupAssignment = null;
            //instance.SaveUserAssignment(buyerID, userGroupAssignment);
            
        }
        
        /// <summary>
        /// Test Update
        /// </summary>
        [Test]
        public void UpdateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string buyerID = null;
            //string userGroupID = null;
            //UserGroup group = null;
            //var response = instance.Update(buyerID, userGroupID, group);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
    }

}