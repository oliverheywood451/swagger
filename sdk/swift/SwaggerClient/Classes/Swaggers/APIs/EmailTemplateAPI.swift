//
// EmailTemplateAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class EmailTemplateAPI: APIBase {
    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter emailTemplateType: (path) Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func callGet(buyerID buyerID: String, emailTemplateType: String, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        callGetWithRequestBuilder(buyerID: buyerID, emailTemplateType: emailTemplateType).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /buyers/{buyerID}/emailtemplates/{emailTemplateType}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter emailTemplateType: (path) Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. 

     - returns: RequestBuilder<AnyObject> 
     */
    public class func callGetWithRequestBuilder(buyerID buyerID: String, emailTemplateType: String) -> RequestBuilder<AnyObject> {
        var path = "/buyers/{buyerID}/emailtemplates/{emailTemplateType}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{emailTemplateType}", withString: "\(emailTemplateType)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter emailTemplateType: (path) Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. 
     - parameter emailTemplate: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func patch(buyerID buyerID: String, emailTemplateType: String, emailTemplate: EmailTemplate, completion: ((error: ErrorType?) -> Void)) {
        patchWithRequestBuilder(buyerID: buyerID, emailTemplateType: emailTemplateType, emailTemplate: emailTemplate).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - PATCH /buyers/{buyerID}/emailtemplates/{emailTemplateType}
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter emailTemplateType: (path) Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. 
     - parameter emailTemplate: (body)  

     - returns: RequestBuilder<Void> 
     */
    public class func patchWithRequestBuilder(buyerID buyerID: String, emailTemplateType: String, emailTemplate: EmailTemplate) -> RequestBuilder<Void> {
        var path = "/buyers/{buyerID}/emailtemplates/{emailTemplateType}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{emailTemplateType}", withString: "\(emailTemplateType)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = emailTemplate.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "PATCH", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter emailTemplateType: (path) Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func resetToDefault(buyerID buyerID: String, emailTemplateType: String, completion: ((error: ErrorType?) -> Void)) {
        resetToDefaultWithRequestBuilder(buyerID: buyerID, emailTemplateType: emailTemplateType).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - DELETE /buyers/{buyerID}/emailtemplates/{emailTemplateType}
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter emailTemplateType: (path) Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. 

     - returns: RequestBuilder<Void> 
     */
    public class func resetToDefaultWithRequestBuilder(buyerID buyerID: String, emailTemplateType: String) -> RequestBuilder<Void> {
        var path = "/buyers/{buyerID}/emailtemplates/{emailTemplateType}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{emailTemplateType}", withString: "\(emailTemplateType)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "DELETE", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter buyerID: (path) ID of the buyer. 
     - parameter emailTemplateType: (path) Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. 
     - parameter emailTemplate: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func update(buyerID buyerID: String, emailTemplateType: String, emailTemplate: EmailTemplate, completion: ((error: ErrorType?) -> Void)) {
        updateWithRequestBuilder(buyerID: buyerID, emailTemplateType: emailTemplateType, emailTemplate: emailTemplate).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - PUT /buyers/{buyerID}/emailtemplates/{emailTemplateType}
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter buyerID: (path) ID of the buyer. 
     - parameter emailTemplateType: (path) Email template type of the email template. Possible values: OrderSubmittedForApproval, CustomerOrderSubmitted, OrderToApprove, OrderDeclined, OrderApproved, PriceRequestSubmitted, CustomerOrderShipped, ProductRequiresAttachment, InventoryPointReached, LineItemExceedsInventory, PriceRequestResponse, CustomerOrderUpdated, OrderCanceled, PriceRequestCanceled, NewOrderReceived, ApprovalNotification, EmailLoginVerificationCode. 
     - parameter emailTemplate: (body)  

     - returns: RequestBuilder<Void> 
     */
    public class func updateWithRequestBuilder(buyerID buyerID: String, emailTemplateType: String, emailTemplate: EmailTemplate) -> RequestBuilder<Void> {
        var path = "/buyers/{buyerID}/emailtemplates/{emailTemplateType}"
        path = path.stringByReplacingOccurrencesOfString("{buyerID}", withString: "\(buyerID)", options: .LiteralSearch, range: nil)
        path = path.stringByReplacingOccurrencesOfString("{emailTemplateType}", withString: "\(emailTemplateType)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = emailTemplate.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "PUT", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

}