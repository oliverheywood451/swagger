//
// SpecOption.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class SpecOption: JSONEncodable {
    public var ID: String?
    public var value: String?
    public var listOrder: Int32?
    public var isOpenText: Bool?
    public var priceMarkupType: String?
    public var priceMarkup: Double?
    public var xp: AnyObject?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["ID"] = self.ID
        nillableDictionary["Value"] = self.value
        nillableDictionary["ListOrder"] = self.listOrder?.encodeToJSON()
        nillableDictionary["IsOpenText"] = self.isOpenText
        nillableDictionary["PriceMarkupType"] = self.priceMarkupType
        nillableDictionary["PriceMarkup"] = self.priceMarkup
        nillableDictionary["xp"] = self.xp
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
