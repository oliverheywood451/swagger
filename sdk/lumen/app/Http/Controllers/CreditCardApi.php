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

class CreditCardApi extends Controller
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
     * Operation listAssignments
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     *
     * @return Http response
     */
    public function listAssignments($buyerID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing listAssignments as a GET method ?');
    }
    /**
     * Operation saveAssignment
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     *
     * @return Http response
     */
    public function saveAssignment($buyerID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing saveAssignment as a POST method ?');
    }
    /**
     * Operation delete
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     * @param String $creditCardID ID of the credit card. (required)
     *
     * @return Http response
     */
    public function delete($buyerID, $creditCardID)
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
     * @param String $creditCardID ID of the credit card. (required)
     *
     * @return Http response
     */
    public function get($buyerID, $creditCardID)
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
     * @param String $creditCardID ID of the credit card. (required)
     *
     * @return Http response
     */
    public function patch($buyerID, $creditCardID)
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
     * @param String $creditCardID ID of the credit card. (required)
     *
     * @return Http response
     */
    public function update($buyerID, $creditCardID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing update as a PUT method ?');
    }
    /**
     * Operation deleteAssignment
     *
     * .
     *
     * @param String $buyerID ID of the buyer. (required)
     * @param String $creditCardID ID of the credit card. (required)
     *
     * @return Http response
     */
    public function deleteAssignment($buyerID, $creditCardID)
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing deleteAssignment as a DELETE method ?');
    }
}
