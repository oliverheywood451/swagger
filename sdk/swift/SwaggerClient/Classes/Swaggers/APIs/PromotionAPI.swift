//
// PromotionAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class PromotionAPI: APIBase {
    /**

     - parameter promotionID: (path) ID of the promotion. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func callGet(promotionID promotionID: String, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        callGetWithRequestBuilder(promotionID: promotionID).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /promotions/{promotionID}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter promotionID: (path) ID of the promotion. 

     - returns: RequestBuilder<AnyObject> 
     */
    public class func callGetWithRequestBuilder(promotionID promotionID: String) -> RequestBuilder<AnyObject> {
        var path = "/promotions/{promotionID}"
        path = path.stringByReplacingOccurrencesOfString("{promotionID}", withString: "\(promotionID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter promo: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func create(promo promo: Promotion, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        createWithRequestBuilder(promo: promo).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - POST /promotions
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter promo: (body)  

     - returns: RequestBuilder<AnyObject> 
     */
    public class func createWithRequestBuilder(promo promo: Promotion) -> RequestBuilder<AnyObject> {
        let path = "/promotions"
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = promo.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter promotionID: (path) ID of the promotion. 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func delete(promotionID promotionID: String, completion: ((error: ErrorType?) -> Void)) {
        deleteWithRequestBuilder(promotionID: promotionID).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - DELETE /promotions/{promotionID}
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter promotionID: (path) ID of the promotion. 

     - returns: RequestBuilder<Void> 
     */
    public class func deleteWithRequestBuilder(promotionID promotionID: String) -> RequestBuilder<Void> {
        var path = "/promotions/{promotionID}"
        path = path.stringByReplacingOccurrencesOfString("{promotionID}", withString: "\(promotionID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [:]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "DELETE", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter promotionID: (path) ID of the promotion. 
     - parameter buyerID: (query) ID of the buyer. 
     - parameter userID: (query) ID of the user. (optional)
     - parameter userGroupID: (query) ID of the user group. (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func deleteAssignment(promotionID promotionID: String, buyerID: String, userID: String? = nil, userGroupID: String? = nil, completion: ((error: ErrorType?) -> Void)) {
        deleteAssignmentWithRequestBuilder(promotionID: promotionID, buyerID: buyerID, userID: userID, userGroupID: userGroupID).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - DELETE /promotions/{promotionID}/assignments
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter promotionID: (path) ID of the promotion. 
     - parameter buyerID: (query) ID of the buyer. 
     - parameter userID: (query) ID of the user. (optional)
     - parameter userGroupID: (query) ID of the user group. (optional)

     - returns: RequestBuilder<Void> 
     */
    public class func deleteAssignmentWithRequestBuilder(promotionID promotionID: String, buyerID: String, userID: String? = nil, userGroupID: String? = nil) -> RequestBuilder<Void> {
        var path = "/promotions/{promotionID}/assignments"
        path = path.stringByReplacingOccurrencesOfString("{promotionID}", withString: "\(promotionID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "buyerID": buyerID,
            "userID": userID,
            "userGroupID": userGroupID
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "DELETE", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**

     - parameter search: (query) Word or phrase to search for. (optional)
     - parameter searchOn: (query) Comma-delimited list of fields to search on. (optional)
     - parameter sortBy: (query) Comma-delimited list of fields to sort by. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func list(search search: String? = nil, searchOn: String? = nil, sortBy: String? = nil, page: Int32? = nil, pageSize: Int32? = nil, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        listWithRequestBuilder(search: search, searchOn: searchOn, sortBy: sortBy, page: page, pageSize: pageSize).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /promotions
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter search: (query) Word or phrase to search for. (optional)
     - parameter searchOn: (query) Comma-delimited list of fields to search on. (optional)
     - parameter sortBy: (query) Comma-delimited list of fields to sort by. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)

     - returns: RequestBuilder<AnyObject> 
     */
    public class func listWithRequestBuilder(search search: String? = nil, searchOn: String? = nil, sortBy: String? = nil, page: Int32? = nil, pageSize: Int32? = nil) -> RequestBuilder<AnyObject> {
        let path = "/promotions"
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "search": search,
            "searchOn": searchOn,
            "sortBy": sortBy,
            "page": page?.encodeToJSON(),
            "pageSize": pageSize?.encodeToJSON()
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**

     - parameter buyerID: (query) ID of the buyer. 
     - parameter promotionID: (query) ID of the promotion. (optional)
     - parameter userID: (query) ID of the user. (optional)
     - parameter userGroupID: (query) ID of the user group. (optional)
     - parameter level: (query) Level of the promotion. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func listAssignments(buyerID buyerID: String, promotionID: String? = nil, userID: String? = nil, userGroupID: String? = nil, level: String? = nil, page: Int32? = nil, pageSize: Int32? = nil, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        listAssignmentsWithRequestBuilder(buyerID: buyerID, promotionID: promotionID, userID: userID, userGroupID: userGroupID, level: level, page: page, pageSize: pageSize).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - GET /promotions/assignments
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter buyerID: (query) ID of the buyer. 
     - parameter promotionID: (query) ID of the promotion. (optional)
     - parameter userID: (query) ID of the user. (optional)
     - parameter userGroupID: (query) ID of the user group. (optional)
     - parameter level: (query) Level of the promotion. (optional)
     - parameter page: (query) Page of results to return. Default: 1 (optional)
     - parameter pageSize: (query) Number of results to return per page. Default: 20, max: 100. (optional)

     - returns: RequestBuilder<AnyObject> 
     */
    public class func listAssignmentsWithRequestBuilder(buyerID buyerID: String, promotionID: String? = nil, userID: String? = nil, userGroupID: String? = nil, level: String? = nil, page: Int32? = nil, pageSize: Int32? = nil) -> RequestBuilder<AnyObject> {
        let path = "/promotions/assignments"
        let URLString = SwaggerClientAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "buyerID": buyerID,
            "promotionID": promotionID,
            "userID": userID,
            "userGroupID": userGroupID,
            "level": level,
            "page": page?.encodeToJSON(),
            "pageSize": pageSize?.encodeToJSON()
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**

     - parameter promotionID: (path) ID of the promotion. 
     - parameter partialPromotion: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func patch(promotionID promotionID: String, partialPromotion: Promotion, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        patchWithRequestBuilder(promotionID: promotionID, partialPromotion: partialPromotion).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - PATCH /promotions/{promotionID}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter promotionID: (path) ID of the promotion. 
     - parameter partialPromotion: (body)  

     - returns: RequestBuilder<AnyObject> 
     */
    public class func patchWithRequestBuilder(promotionID promotionID: String, partialPromotion: Promotion) -> RequestBuilder<AnyObject> {
        var path = "/promotions/{promotionID}"
        path = path.stringByReplacingOccurrencesOfString("{promotionID}", withString: "\(promotionID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = partialPromotion.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "PATCH", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter assignment: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func saveAssignment(assignment assignment: PromotionAssignment, completion: ((error: ErrorType?) -> Void)) {
        saveAssignmentWithRequestBuilder(assignment: assignment).execute { (response, error) -> Void in
            completion(error: error);
        }
    }


    /**
     - POST /promotions/assignments
     - OAuth:
       - type: oauth2
       - name: auth
     
     - parameter assignment: (body)  

     - returns: RequestBuilder<Void> 
     */
    public class func saveAssignmentWithRequestBuilder(assignment assignment: PromotionAssignment) -> RequestBuilder<Void> {
        let path = "/promotions/assignments"
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = assignment.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Void>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

    /**

     - parameter promotionID: (path) ID of the promotion. 
     - parameter promo: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func update(promotionID promotionID: String, promo: Promotion, completion: ((data: AnyObject?, error: ErrorType?) -> Void)) {
        updateWithRequestBuilder(promotionID: promotionID, promo: promo).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     - PUT /promotions/{promotionID}
     - OAuth:
       - type: oauth2
       - name: auth
     - examples: [{example="{}", contentType=application/json}]
     
     - parameter promotionID: (path) ID of the promotion. 
     - parameter promo: (body)  

     - returns: RequestBuilder<AnyObject> 
     */
    public class func updateWithRequestBuilder(promotionID promotionID: String, promo: Promotion) -> RequestBuilder<AnyObject> {
        var path = "/promotions/{promotionID}"
        path = path.stringByReplacingOccurrencesOfString("{promotionID}", withString: "\(promotionID)", options: .LiteralSearch, range: nil)
        let URLString = SwaggerClientAPI.basePath + path
        let parameters = promo.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<AnyObject>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "PUT", URLString: URLString, parameters: convertedParameters, isBody: true)
    }

}
