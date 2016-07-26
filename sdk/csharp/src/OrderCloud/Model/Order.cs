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
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;

namespace OrderCloud.Model
{
    /// <summary>
    /// Order
    /// </summary>
    [DataContract]
    public partial class Order :  IEquatable<Order>
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Order" /> class.
        /// </summary>
        /// <param name="ID">ID.</param>
        /// <param name="Type">Type.</param>
        /// <param name="FromUserID">FromUserID.</param>
        /// <param name="BillingAddressID">BillingAddressID.</param>
        /// <param name="ShippingAddressID">ShippingAddressID.</param>
        /// <param name="Comments">Comments.</param>
        /// <param name="ShippingCost">ShippingCost.</param>
        /// <param name="TaxCost">TaxCost.</param>
        /// <param name="Xp">Xp.</param>
        public Order(string ID = null, string Type = null, string FromUserID = null, string BillingAddressID = null, string ShippingAddressID = null, string Comments = null, decimal? ShippingCost = null, decimal? TaxCost = null, Object Xp = null)
        {
            this.ID = ID;
            this.Type = Type;
            this.FromUserID = FromUserID;
            this.BillingAddressID = BillingAddressID;
            this.ShippingAddressID = ShippingAddressID;
            this.Comments = Comments;
            this.ShippingCost = ShippingCost;
            this.TaxCost = TaxCost;
            this.Xp = Xp;
        }
        
        /// <summary>
        /// Gets or Sets ID
        /// </summary>
        [DataMember(Name="ID", EmitDefaultValue=false)]
        public string ID { get; set; }
        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="Type", EmitDefaultValue=false)]
        public string Type { get; set; }
        /// <summary>
        /// Gets or Sets FromUserID
        /// </summary>
        [DataMember(Name="FromUserID", EmitDefaultValue=false)]
        public string FromUserID { get; set; }
        /// <summary>
        /// Gets or Sets BillingAddressID
        /// </summary>
        [DataMember(Name="BillingAddressID", EmitDefaultValue=false)]
        public string BillingAddressID { get; set; }
        /// <summary>
        /// Gets or Sets ShippingAddressID
        /// </summary>
        [DataMember(Name="ShippingAddressID", EmitDefaultValue=false)]
        public string ShippingAddressID { get; set; }
        /// <summary>
        /// Gets or Sets Comments
        /// </summary>
        [DataMember(Name="Comments", EmitDefaultValue=false)]
        public string Comments { get; set; }
        /// <summary>
        /// Gets or Sets ShippingCost
        /// </summary>
        [DataMember(Name="ShippingCost", EmitDefaultValue=false)]
        public decimal? ShippingCost { get; set; }
        /// <summary>
        /// Gets or Sets TaxCost
        /// </summary>
        [DataMember(Name="TaxCost", EmitDefaultValue=false)]
        public decimal? TaxCost { get; set; }
        /// <summary>
        /// Gets or Sets Xp
        /// </summary>
        [DataMember(Name="xp", EmitDefaultValue=false)]
        public Object Xp { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Order {\n");
            sb.Append("  ID: ").Append(ID).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  FromUserID: ").Append(FromUserID).Append("\n");
            sb.Append("  BillingAddressID: ").Append(BillingAddressID).Append("\n");
            sb.Append("  ShippingAddressID: ").Append(ShippingAddressID).Append("\n");
            sb.Append("  Comments: ").Append(Comments).Append("\n");
            sb.Append("  ShippingCost: ").Append(ShippingCost).Append("\n");
            sb.Append("  TaxCost: ").Append(TaxCost).Append("\n");
            sb.Append("  Xp: ").Append(Xp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            return this.Equals(obj as Order);
        }

        /// <summary>
        /// Returns true if Order instances are equal
        /// </summary>
        /// <param name="other">Instance of Order to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Order other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.ID == other.ID ||
                    this.ID != null &&
                    this.ID.Equals(other.ID)
                ) && 
                (
                    this.Type == other.Type ||
                    this.Type != null &&
                    this.Type.Equals(other.Type)
                ) && 
                (
                    this.FromUserID == other.FromUserID ||
                    this.FromUserID != null &&
                    this.FromUserID.Equals(other.FromUserID)
                ) && 
                (
                    this.BillingAddressID == other.BillingAddressID ||
                    this.BillingAddressID != null &&
                    this.BillingAddressID.Equals(other.BillingAddressID)
                ) && 
                (
                    this.ShippingAddressID == other.ShippingAddressID ||
                    this.ShippingAddressID != null &&
                    this.ShippingAddressID.Equals(other.ShippingAddressID)
                ) && 
                (
                    this.Comments == other.Comments ||
                    this.Comments != null &&
                    this.Comments.Equals(other.Comments)
                ) && 
                (
                    this.ShippingCost == other.ShippingCost ||
                    this.ShippingCost != null &&
                    this.ShippingCost.Equals(other.ShippingCost)
                ) && 
                (
                    this.TaxCost == other.TaxCost ||
                    this.TaxCost != null &&
                    this.TaxCost.Equals(other.TaxCost)
                ) && 
                (
                    this.Xp == other.Xp ||
                    this.Xp != null &&
                    this.Xp.Equals(other.Xp)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                if (this.ID != null)
                    hash = hash * 59 + this.ID.GetHashCode();
                if (this.Type != null)
                    hash = hash * 59 + this.Type.GetHashCode();
                if (this.FromUserID != null)
                    hash = hash * 59 + this.FromUserID.GetHashCode();
                if (this.BillingAddressID != null)
                    hash = hash * 59 + this.BillingAddressID.GetHashCode();
                if (this.ShippingAddressID != null)
                    hash = hash * 59 + this.ShippingAddressID.GetHashCode();
                if (this.Comments != null)
                    hash = hash * 59 + this.Comments.GetHashCode();
                if (this.ShippingCost != null)
                    hash = hash * 59 + this.ShippingCost.GetHashCode();
                if (this.TaxCost != null)
                    hash = hash * 59 + this.TaxCost.GetHashCode();
                if (this.Xp != null)
                    hash = hash * 59 + this.Xp.GetHashCode();
                return hash;
            }
        }
    }

}
