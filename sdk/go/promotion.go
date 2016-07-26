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

package OrderCloud

import (
	"time"
)

type Promotion struct {

	ID string `json:"ID,omitempty"`

	Code string `json:"Code,omitempty"`

	Name string `json:"Name,omitempty"`

	UsagesRemaining int32 `json:"UsagesRemaining,omitempty"`

	Description string `json:"Description,omitempty"`

	FinePrint string `json:"FinePrint,omitempty"`

	StartDate time.Time `json:"StartDate,omitempty"`

	ExpirationDate time.Time `json:"ExpirationDate,omitempty"`

	EligibleExpression string `json:"EligibleExpression,omitempty"`

	ValueExpression string `json:"ValueExpression,omitempty"`

	CanCombine bool `json:"CanCombine,omitempty"`

	Xp Object `json:"xp,omitempty"`
}
