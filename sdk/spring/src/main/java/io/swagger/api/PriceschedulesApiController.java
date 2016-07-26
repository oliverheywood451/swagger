package io.swagger.api;

import io.swagger.model.PriceSchedule;
import io.swagger.model.PriceBreak;

import io.swagger.annotations.*;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.multipart.MultipartFile;

import java.util.List;


@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringCodegen", date = "2016-07-26T21:59:26.456Z")

@Controller
public class PriceschedulesApiController implements PriceschedulesApi {

    public ResponseEntity<Object> create(@ApiParam(value = "" ,required=true ) @RequestBody PriceSchedule priceSchedule) {
        // do some magic!
        return new ResponseEntity<Object>(HttpStatus.OK);
    }

    public ResponseEntity<Void> delete(@ApiParam(value = "ID of the price schedule.",required=true ) @PathVariable("priceScheduleID") String priceScheduleID) {
        // do some magic!
        return new ResponseEntity<Void>(HttpStatus.OK);
    }

    public ResponseEntity<Void> deletePriceBreak(@ApiParam(value = "ID of the price schedule.",required=true ) @PathVariable("priceScheduleID") String priceScheduleID,
        @ApiParam(value = "Quantity of the price schedule.", required = true) @RequestParam(value = "quantity", required = true) Integer quantity) {
        // do some magic!
        return new ResponseEntity<Void>(HttpStatus.OK);
    }

    public ResponseEntity<Object> get(@ApiParam(value = "ID of the price schedule.",required=true ) @PathVariable("priceScheduleID") String priceScheduleID) {
        // do some magic!
        return new ResponseEntity<Object>(HttpStatus.OK);
    }

    public ResponseEntity<Object> list(@ApiParam(value = "Word or phrase to search for.") @RequestParam(value = "search", required = false) String search,
        @ApiParam(value = "Comma-delimited list of fields to search on.") @RequestParam(value = "searchOn", required = false) String searchOn,
        @ApiParam(value = "Comma-delimited list of fields to sort by.") @RequestParam(value = "sortBy", required = false) String sortBy,
        @ApiParam(value = "Page of results to return. Default: 1") @RequestParam(value = "page", required = false) Integer page,
        @ApiParam(value = "Number of results to return per page. Default: 20, max: 100.") @RequestParam(value = "pageSize", required = false) Integer pageSize) {
        // do some magic!
        return new ResponseEntity<Object>(HttpStatus.OK);
    }

    public ResponseEntity<Object> patch(@ApiParam(value = "ID of the price schedule.",required=true ) @PathVariable("priceScheduleID") String priceScheduleID,
        @ApiParam(value = "" ,required=true ) @RequestBody PriceSchedule priceSchedule) {
        // do some magic!
        return new ResponseEntity<Object>(HttpStatus.OK);
    }

    public ResponseEntity<Object> savePriceBreak(@ApiParam(value = "ID of the price schedule.",required=true ) @PathVariable("priceScheduleID") String priceScheduleID,
        @ApiParam(value = "" ,required=true ) @RequestBody PriceBreak priceBreak) {
        // do some magic!
        return new ResponseEntity<Object>(HttpStatus.OK);
    }

    public ResponseEntity<Object> update(@ApiParam(value = "ID of the price schedule.",required=true ) @PathVariable("priceScheduleID") String priceScheduleID,
        @ApiParam(value = "" ,required=true ) @RequestBody PriceSchedule priceSchedule) {
        // do some magic!
        return new ResponseEntity<Object>(HttpStatus.OK);
    }

}
