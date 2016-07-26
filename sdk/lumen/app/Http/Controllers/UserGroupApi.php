<?php

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


namespace App\Http\Controllers;

use Illuminate\Support\Facades\Request;

class UserGroupApi extends Controller
{
    /**
     * Constructor
     */
    public function __construct()
    {
    }

    /**
     * Operation create
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     *
     * @return Http response
     */
    public function create($buyerID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing create as a POST method ?');
    }
    /**
     * Operation list
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     *
     * @return Http response
     */
    public function list($buyerID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing list as a GET method ?');
    }
    /**
     * Operation listUserAssignments
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     *
     * @return Http response
     */
    public function listUserAssignments($buyerID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing listUserAssignments as a GET method ?');
    }
    /**
     * Operation saveUserAssignment
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     *
     * @return Http response
     */
    public function saveUserAssignment($buyerID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing saveUserAssignment as a POST method ?');
    }
    /**
     * Operation delete
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     * @param String $userGroupID ID of the user group. (required)
     *
     * @return Http response
     */
    public function delete($buyerID, $userGroupID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing delete as a DELETE method ?');
    }
    /**
     * Operation get
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     * @param String $userGroupID ID of the user group. (required)
     *
     * @return Http response
     */
    public function get($buyerID, $userGroupID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing get as a GET method ?');
    }
    /**
     * Operation patch
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     * @param String $userGroupID ID of the user group. (required)
     *
     * @return Http response
     */
    public function patch($buyerID, $userGroupID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing patch as a PATCH method ?');
    }
    /**
     * Operation update
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     * @param String $userGroupID ID of the user group. (required)
     *
     * @return Http response
     */
    public function update($buyerID, $userGroupID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing update as a PUT method ?');
    }
    /**
     * Operation deleteUserAssignment
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     * @param String $userGroupID ID of the user group. (required)
     * @param String $userID ID of the user. (required)
     *
     * @return Http response
     */
    public function deleteUserAssignment($buyerID, $userGroupID, $userID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing deleteUserAssignment as a DELETE method ?');
    }
}
