package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;


import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;

@javax.annotation.Generated(value = "class io.swagger.codegen.languages.JavaJerseyServerCodegen", date = "2016-07-26T21:57:33.980Z")
public abstract class FilesApiService {
    public abstract Response get(String fileID,SecurityContext securityContext) throws NotFoundException;
    public abstract Response list(Integer page,Integer pageSize,SecurityContext securityContext) throws NotFoundException;
    public abstract Response postFileData(String filename,SecurityContext securityContext) throws NotFoundException;
}
