//
// Promotion.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class Promotion: JSONEncodable {
    public var ID: String?
    public var code: String?
    public var name: String?
    public var usagesRemaining: Int32?
    public var description: String?
    public var finePrint: String?
    public var startDate: NSDate?
    public var expirationDate: NSDate?
    public var eligibleExpression: String?
    public var valueExpression: String?
    public var canCombine: Bool?
    public var xp: AnyObject?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["ID"] = self.ID
        nillableDictionary["Code"] = self.code
        nillableDictionary["Name"] = self.name
        nillableDictionary["UsagesRemaining"] = self.usagesRemaining?.encodeToJSON()
        nillableDictionary["Description"] = self.description
        nillableDictionary["FinePrint"] = self.finePrint
        nillableDictionary["StartDate"] = self.startDate?.encodeToJSON()
        nillableDictionary["ExpirationDate"] = self.expirationDate?.encodeToJSON()
        nillableDictionary["EligibleExpression"] = self.eligibleExpression
        nillableDictionary["ValueExpression"] = self.valueExpression
        nillableDictionary["CanCombine"] = self.canCombine
        nillableDictionary["xp"] = self.xp
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
