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


package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.model.Order;
import io.swagger.client.model.Address;
import io.swagger.client.model.Shipment;
import org.junit.Test;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for OrderApi
 */
public class OrderApiTest {

    private final OrderApi api = new OrderApi();

    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void addPromotionTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        String promoCode = null;
        // Object response = api.addPromotion(buyerID, orderID, promoCode);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void approveTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        String comments = null;
        // Object response = api.approve(buyerID, orderID, comments);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void cancelTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        // Object response = api.cancel(buyerID, orderID);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void createTest() throws ApiException {
        String buyerID = null;
        Order order = null;
        // Object response = api.create(buyerID, order);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void declineTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        String comments = null;
        // Object response = api.decline(buyerID, orderID, comments);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void deleteTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        // api.delete(buyerID, orderID);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void getTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        // Object response = api.get(buyerID, orderID);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void listApprovalsTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        String search = null;
        String searchOn = null;
        String sortBy = null;
        Integer page = null;
        Integer pageSize = null;
        // Object response = api.listApprovals(buyerID, orderID, search, searchOn, sortBy, page, pageSize);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void listEligibleApproversTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        String search = null;
        String searchOn = null;
        String sortBy = null;
        Integer page = null;
        Integer pageSize = null;
        // Object response = api.listEligibleApprovers(buyerID, orderID, search, searchOn, sortBy, page, pageSize);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void listIncomingTest() throws ApiException {
        String buyerID = null;
        String from = null;
        String to = null;
        String search = null;
        String searchOn = null;
        String sortBy = null;
        Integer page = null;
        Integer pageSize = null;
        // Object response = api.listIncoming(buyerID, from, to, search, searchOn, sortBy, page, pageSize);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void listOutgoingTest() throws ApiException {
        String buyerID = null;
        String from = null;
        String to = null;
        String search = null;
        String searchOn = null;
        String sortBy = null;
        Integer page = null;
        Integer pageSize = null;
        // Object response = api.listOutgoing(buyerID, from, to, search, searchOn, sortBy, page, pageSize);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void listPromotionsTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        String search = null;
        String searchOn = null;
        String sortBy = null;
        Integer page = null;
        Integer pageSize = null;
        // Object response = api.listPromotions(buyerID, orderID, search, searchOn, sortBy, page, pageSize);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void patchTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        Order partialOrder = null;
        // Object response = api.patch(buyerID, orderID, partialOrder);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void patchBillingAddressTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        Address address = null;
        // Object response = api.patchBillingAddress(buyerID, orderID, address);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void patchShippingAddressTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        Address address = null;
        // Object response = api.patchShippingAddress(buyerID, orderID, address);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void removePromotionTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        String promoCode = null;
        // Object response = api.removePromotion(buyerID, orderID, promoCode);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void setBillingAddressTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        Address address = null;
        // Object response = api.setBillingAddress(buyerID, orderID, address);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void setShippingAddressTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        Address address = null;
        // Object response = api.setShippingAddress(buyerID, orderID, address);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void shipTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        Shipment shipment = null;
        // Object response = api.ship(buyerID, orderID, shipment);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void submitTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        // Object response = api.submit(buyerID, orderID);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void transferTempUserOrderTest() throws ApiException {
        String buyerID = null;
        String tempUserToken = null;
        // api.transferTempUserOrder(buyerID, tempUserToken);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void updateTest() throws ApiException {
        String buyerID = null;
        String orderID = null;
        Order order = null;
        // Object response = api.update(buyerID, orderID, order);

        // TODO: test validations
    }
    
}
