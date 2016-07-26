//
// ShipmentItem.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class ShipmentItem: JSONEncodable {
    public var orderID: String?
    public var lineItemID: String?
    public var quantityShipped: Int32?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["OrderID"] = self.orderID
        nillableDictionary["LineItemID"] = self.lineItemID
        nillableDictionary["QuantityShipped"] = self.quantityShipped?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
