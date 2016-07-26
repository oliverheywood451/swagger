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
    /// CreditCard
    /// </summary>
    [DataContract]
    public partial class CreditCard :  IEquatable<CreditCard>
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="CreditCard" /> class.
        /// </summary>
        /// <param name="ID">ID.</param>
        /// <param name="Token">Token.</param>
        /// <param name="CardType">CardType.</param>
        /// <param name="PartialAccountNumber">PartialAccountNumber.</param>
        /// <param name="CardholderName">CardholderName.</param>
        /// <param name="ExpirationDate">ExpirationDate.</param>
        /// <param name="Xp">Xp.</param>
        public CreditCard(string ID = null, string Token = null, string CardType = null, string PartialAccountNumber = null, string CardholderName = null, DateTime? ExpirationDate = null, Object Xp = null)
        {
            this.ID = ID;
            this.Token = Token;
            this.CardType = CardType;
            this.PartialAccountNumber = PartialAccountNumber;
            this.CardholderName = CardholderName;
            this.ExpirationDate = ExpirationDate;
            this.Xp = Xp;
        }
        
        /// <summary>
        /// Gets or Sets ID
        /// </summary>
        [DataMember(Name="ID", EmitDefaultValue=false)]
        public string ID { get; set; }
        /// <summary>
        /// Gets or Sets Token
        /// </summary>
        [DataMember(Name="Token", EmitDefaultValue=false)]
        public string Token { get; set; }
        /// <summary>
        /// Gets or Sets CardType
        /// </summary>
        [DataMember(Name="CardType", EmitDefaultValue=false)]
        public string CardType { get; set; }
        /// <summary>
        /// Gets or Sets PartialAccountNumber
        /// </summary>
        [DataMember(Name="PartialAccountNumber", EmitDefaultValue=false)]
        public string PartialAccountNumber { get; set; }
        /// <summary>
        /// Gets or Sets CardholderName
        /// </summary>
        [DataMember(Name="CardholderName", EmitDefaultValue=false)]
        public string CardholderName { get; set; }
        /// <summary>
        /// Gets or Sets ExpirationDate
        /// </summary>
        [DataMember(Name="ExpirationDate", EmitDefaultValue=false)]
        public DateTime? ExpirationDate { get; set; }
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
            sb.Append("class CreditCard {\n");
            sb.Append("  ID: ").Append(ID).Append("\n");
            sb.Append("  Token: ").Append(Token).Append("\n");
            sb.Append("  CardType: ").Append(CardType).Append("\n");
            sb.Append("  PartialAccountNumber: ").Append(PartialAccountNumber).Append("\n");
            sb.Append("  CardholderName: ").Append(CardholderName).Append("\n");
            sb.Append("  ExpirationDate: ").Append(ExpirationDate).Append("\n");
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
            return this.Equals(obj as CreditCard);
        }

        /// <summary>
        /// Returns true if CreditCard instances are equal
        /// </summary>
        /// <param name="other">Instance of CreditCard to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(CreditCard other)
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
                    this.Token == other.Token ||
                    this.Token != null &&
                    this.Token.Equals(other.Token)
                ) && 
                (
                    this.CardType == other.CardType ||
                    this.CardType != null &&
                    this.CardType.Equals(other.CardType)
                ) && 
                (
                    this.PartialAccountNumber == other.PartialAccountNumber ||
                    this.PartialAccountNumber != null &&
                    this.PartialAccountNumber.Equals(other.PartialAccountNumber)
                ) && 
                (
                    this.CardholderName == other.CardholderName ||
                    this.CardholderName != null &&
                    this.CardholderName.Equals(other.CardholderName)
                ) && 
                (
                    this.ExpirationDate == other.ExpirationDate ||
                    this.ExpirationDate != null &&
                    this.ExpirationDate.Equals(other.ExpirationDate)
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
                if (this.Token != null)
                    hash = hash * 59 + this.Token.GetHashCode();
                if (this.CardType != null)
                    hash = hash * 59 + this.CardType.GetHashCode();
                if (this.PartialAccountNumber != null)
                    hash = hash * 59 + this.PartialAccountNumber.GetHashCode();
                if (this.CardholderName != null)
                    hash = hash * 59 + this.CardholderName.GetHashCode();
                if (this.ExpirationDate != null)
                    hash = hash * 59 + this.ExpirationDate.GetHashCode();
                if (this.Xp != null)
                    hash = hash * 59 + this.Xp.GetHashCode();
                return hash;
            }
        }
    }

}
