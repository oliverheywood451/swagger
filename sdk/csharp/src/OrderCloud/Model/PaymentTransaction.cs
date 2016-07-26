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
    /// PaymentTransaction
    /// </summary>
    [DataContract]
    public partial class PaymentTransaction :  IEquatable<PaymentTransaction>
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PaymentTransaction" /> class.
        /// </summary>
        /// <param name="ID">ID.</param>
        /// <param name="Type">Type.</param>
        /// <param name="DateExecuted">DateExecuted.</param>
        /// <param name="Amount">Amount.</param>
        /// <param name="Succeeded">Succeeded.</param>
        /// <param name="ResultCode">ResultCode.</param>
        /// <param name="ResultMessage">ResultMessage.</param>
        /// <param name="Xp">Xp.</param>
        public PaymentTransaction(string ID = null, string Type = null, DateTime? DateExecuted = null, decimal? Amount = null, bool? Succeeded = null, string ResultCode = null, string ResultMessage = null, Object Xp = null)
        {
            this.ID = ID;
            this.Type = Type;
            this.DateExecuted = DateExecuted;
            this.Amount = Amount;
            this.Succeeded = Succeeded;
            this.ResultCode = ResultCode;
            this.ResultMessage = ResultMessage;
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
        /// Gets or Sets DateExecuted
        /// </summary>
        [DataMember(Name="DateExecuted", EmitDefaultValue=false)]
        public DateTime? DateExecuted { get; set; }
        /// <summary>
        /// Gets or Sets Amount
        /// </summary>
        [DataMember(Name="Amount", EmitDefaultValue=false)]
        public decimal? Amount { get; set; }
        /// <summary>
        /// Gets or Sets Succeeded
        /// </summary>
        [DataMember(Name="Succeeded", EmitDefaultValue=false)]
        public bool? Succeeded { get; set; }
        /// <summary>
        /// Gets or Sets ResultCode
        /// </summary>
        [DataMember(Name="ResultCode", EmitDefaultValue=false)]
        public string ResultCode { get; set; }
        /// <summary>
        /// Gets or Sets ResultMessage
        /// </summary>
        [DataMember(Name="ResultMessage", EmitDefaultValue=false)]
        public string ResultMessage { get; set; }
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
            sb.Append("class PaymentTransaction {\n");
            sb.Append("  ID: ").Append(ID).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  DateExecuted: ").Append(DateExecuted).Append("\n");
            sb.Append("  Amount: ").Append(Amount).Append("\n");
            sb.Append("  Succeeded: ").Append(Succeeded).Append("\n");
            sb.Append("  ResultCode: ").Append(ResultCode).Append("\n");
            sb.Append("  ResultMessage: ").Append(ResultMessage).Append("\n");
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
            return this.Equals(obj as PaymentTransaction);
        }

        /// <summary>
        /// Returns true if PaymentTransaction instances are equal
        /// </summary>
        /// <param name="other">Instance of PaymentTransaction to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PaymentTransaction other)
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
                    this.DateExecuted == other.DateExecuted ||
                    this.DateExecuted != null &&
                    this.DateExecuted.Equals(other.DateExecuted)
                ) && 
                (
                    this.Amount == other.Amount ||
                    this.Amount != null &&
                    this.Amount.Equals(other.Amount)
                ) && 
                (
                    this.Succeeded == other.Succeeded ||
                    this.Succeeded != null &&
                    this.Succeeded.Equals(other.Succeeded)
                ) && 
                (
                    this.ResultCode == other.ResultCode ||
                    this.ResultCode != null &&
                    this.ResultCode.Equals(other.ResultCode)
                ) && 
                (
                    this.ResultMessage == other.ResultMessage ||
                    this.ResultMessage != null &&
                    this.ResultMessage.Equals(other.ResultMessage)
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
                if (this.DateExecuted != null)
                    hash = hash * 59 + this.DateExecuted.GetHashCode();
                if (this.Amount != null)
                    hash = hash * 59 + this.Amount.GetHashCode();
                if (this.Succeeded != null)
                    hash = hash * 59 + this.Succeeded.GetHashCode();
                if (this.ResultCode != null)
                    hash = hash * 59 + this.ResultCode.GetHashCode();
                if (this.ResultMessage != null)
                    hash = hash * 59 + this.ResultMessage.GetHashCode();
                if (this.Xp != null)
                    hash = hash * 59 + this.Xp.GetHashCode();
                return hash;
            }
        }
    }

}
