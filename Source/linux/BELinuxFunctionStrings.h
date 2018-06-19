/*
 BELinuxFunctionStrings.h
 BaseElements Plug-In

 Copyright 2018 Goya. All rights reserved.
 For conditions of distribution and use please see the copyright notice in BEPlugin.cpp

   http://www.goya.com.au/baseelements/plugin
 
 IMPORTANT: this file is automatically generated! Do not edit by hand.

 */


#if !defined(BELINUXFUNCTIONSTRINGS_H)
	#define BELINUXFUNCTIONSTRINGS_H

#include "BEPluginGlobalDefines.h"

#include <map>
#include <string>

const std::map<unsigned long, std::string> function_strings = {

	{ 1, "GyBE1nnYYnn" },
	{ 102, "BE_Version" },
	{ 103, "BE_VersionAutoUpdate" },
	{ 104, "BE_ClipboardFormats" },
	{ 105, "BE_ClipboardText ( format )" },
	{ 106, "BE_SetClipboardText ( text ; format )" },
	{ 107, "BE_CreateFolder ( path )" },
	{ 108, "BE_DeleteFile ( path )" },
	{ 109, "BE_FileExists ( path )" },
	{ 110, "BE_ReadTextFromFile ( path )" },
	{ 111, "BE_WriteTextToFile ( path ; text {; append} )" },
	{ 112, "BE_SelectFile ( prompt {; inFolderPath } )" },
	{ 113, "BE_SelectFolder ( prompt {; inFolderPath } )" },
	{ 114, "BE_DisplayDialog ( title ; message ; defaultButton {; cancelButton ; alternateButton } )" },
	{ 115, "BE_ApplyXSLT ( xmlPath ; xsltText ; outputPath )" },
	{ 116, "BE_ExtractScriptVariables ( calculationText { ; variablePrefix } )" },
	{ 117, "BE_StripInvalidUTF16CharactersFromXMLFile ( path ; { resultPath } )" },
	{ 118, "BE_MoveFile ( fromPath ; toPath )" },
	{ 119, "BE_CopyFile ( fromPath ; toPath )" },
	{ 121, "BE_ListFilesInFolder ( path {; type ; includeSubdirectories ; useFullPath ; includeHidden } )" },
	{ 124, "BE_OpenURL ( url )" },
	{ 125, "BE_OpenFile ( path )" },
	{ 126, "BE_FileSize ( path )" },
	{ 127, "BE_File_Modification_Timestamp ( path )" },
	{ 128, "BaseElements" },
	{ 131, "GyBE1nnYYnn" },
	{ 132, "https://baseelementsplugin.zendesk.com/" },
	{ 140, "BE_WriteTextFileToContainer ( filename ; text {; append} )" },
	{ 150, "BE_ExecuteScript ( scriptName {; fileName ; parameter } )" },
	{ 151, "BE_FileMakerSQL ( sqlStatement {; columnSeparator ; rowSeparator ; databaseName } )" },
	{ 152, "BE_HTTP_GET ( url {; filename ; username ; password } )" },
	{ 153, "BE_GetLastError" },
	{ 154, "BE_MessageDigest_Deprecated ( text {; algorithm ; encoding } )" },
	{ 155, "BE_GetLastDDLError" },
	{ 156, "BE_HTTP_GET_File ( url ; path {; username ; password } )" },
	{ 157, "BE_ProgressDialog ( title ; description {; maximum } )" },
	{ 158, "BE_ProgressDialog_Update ( number {; description } )" },
	{ 159, "BE_Pause ( milliseconds )" },
	{ 160, "BE_SetPreference ( key ; value {; domain } )" },
	{ 161, "BE_GetPreference ( key {; domain } )" },
	{ 170, "BE_Unzip ( archive {; output_directory} )" },
	{ 171, "BE_Zip ( fileList {; archive} )" },
	{ 172, "BE_Base64_Decode_Deprecated ( text {; name } )" },
	{ 173, "BE_Base64_Encode_Deprecated ( data )" },
	{ 174, "BE_SetTextEncoding ( { encoding } )" },
	{ 175, "BE_Base64_URL_Encode_Deprecated ( data )" },
	{ 176, "BE_ExportFieldContents ( field {; outputPath } )" },
	{ 177, "BE_ImportFile ( path {; compress } )" },
	{ 180, "BE_HTTP_POST ( url ; parameters {; username ; password ; filename } )" },
	{ 181, "BE_HTTP_Response_Code" },
	{ 182, "BE_HTTP_Response_Headers ( { header } )" },
	{ 183, "BE_HTTP_Set_Custom_Header ( { header ; value } )" },
	{ 184, "BE_HTTP_DELETE ( url {; username ; password } )" },
	{ 185, "BE_HTTP_PUT_FILE ( url ; path {; username ; password } )" },
	{ 186, "BE_HTTP_Set_Proxy ( proxy {; port ; username ; password } )" },
	{ 187, "BE_Curl_Set_Option ( { option ; value } )" },
	{ 188, "BE_HTTP_PUT_DATA ( url ; data {; username ; password } )" },
	{ 189, "BE_FTP_Upload ( url ; data {; username ; password } )" },
	{ 190, "BE_Curl_Trace" },
	{ 191, "BE_FTP_Delete ( url {; username ; password } )" },
	{ 192, "BE_HTTP_PATCH ( url ; parameters {; username ; password } )" },
	{ 200, "BE_ApplyXSLTInMemory ( xmlText ; xsltText )" },
	{ 201, "BE_XPath ( xmlText ; xpath {; namespaceList ; asText } )" },
	{ 202, "BE_XPathAll ( xmlText ; xpath {; namespaceList } )" },
	{ 210, "BE_StripXMLNodes ( inputPath ; outputPath ; nodeNames )" },
	{ 211, "BE_XML_Parse ( path )" },
	{ 212, "BE_SplitBEFileNodes ( path )" },
	{ 213, "BE_XML_Validate ( xml ; schema )" },
	{ 220, "BE_CurrentTimeMilliseconds" },
	{ 221, "BE_UTCMilliseconds" },
	{ 222, "BE_TimeZoneOffset" },
	{ 230, "BE_SaveFileDialog ( prompt {; fileName ; inFolder } )" },
	{ 240, "BE_RegularExpression ( text ; expression {; options ; replaceString } )" },
	{ 250, "BE_ContainerIsCompressed ( containerField )" },
	{ 251, "BE_ContainerCompress ( data {; filename } )" },
	{ 252, "BE_ContainerUncompress ( gzip_data {; filename } )" },
	{ 260, "BE_Gzip ( data {; filename } )" },
	{ 261, "BE_UnGzip ( gzip_data {; filename } )" },
	{ 270, "BE_JPEG_Recompress_Deprecated ( jpeg {; compressionLevel ; width ; height } )" },
	{ 271, "BE_JPEG_Recompress ( jpeg {; compressionLevel ; scale } )" },
	{ 300, "BE_JSONPath_Deprecated ( json ; path )" },
	{ 301, "BE_JSON_Error_Description_Deprecated" },
	{ 302, "BE_JSON_ArraySize_Deprecated ( json )" },
	{ 303, "BE_JSON_Encode_Deprecated ( key {; value ; type } )" },
	{ 321, "BE_OAuth_RequestAccessToken ( url ; consumer_key ; consumer_secret ; request_key ; request_secret )" },
	{ 330, "BE_Xero_SetTokens ( consumer_key ; private_key )" },
	{ 331, "BE_Xero_GenerateKeys ( organisation {; organisationalUnit ; country ; state ; suburb ; domain ; emailAddress } )" },
	{ 350, "BE_Values_Unique ( listOfValues {; caseSensitive } )" },
	{ 351, "BE_Values_FilterOut ( textToFilter ; filterValues {; caseSensitive } )" },
	{ 352, "BE_Values_ContainsDuplicates ( listOfValues  {; caseSensitive } )" },
	{ 353, "BE_Values_Sort ( listOfValues {; ascending ; type } )" },
	{ 354, "BE_Values_TimesDuplicated ( listOfValues ; numberOfTimes )" },
	{ 355, "BE_Values_Trim ( listOfValues )" },
	{ 400, "BE_SMTP_Server ( server { ; port ; username ; password } )" },
	{ 401, "BE_SMTP_Send ( from ; to ; subject ; text { ; cc ; bcc ; replyTo ; html ; attachments } )" },
	{ 402, "BE_SMTP_AddAttachment ( { attachment ; contentType } )" },
	{ 403, "BE_SMTP_Set_Header ( { header ; value } )" },
	{ 500, "BE_Encrypt_AES_Deprecated ( key ; text )" },
	{ 501, "BE_Decrypt_AES_Deprecated ( key ; text )" },
	{ 502, "BE_SignatureGenerate_RSA ( data ; privateKey {; privateKeyPassword ; algorithm; fileNameWithExtension } )" },
	{ 503, "BE_SignatureVerify_RSA ( data ; publicKey ; signature {; algorithm } )" },
	{ 504, "BE_CipherEncrypt ( cipher ; data ; key ; iv {; padding ; fileNameWithExtension } )" },
	{ 505, "BE_CipherDecrypt ( cipher ; encryptedData ; key ; iv {; padding ; fileNameWithExtension } )" },
	{ 550, "BE_HMAC_Deprecated ( text ; key {; algorithm ; outputEncoding ; inputEncoding } )" },
	{ 600, "BE_EvaluateJavaScript ( javaScript )" },
	{ 650, "BE_ArraySetFromValueList ( valueList {; retainEmptyValues } )" },
	{ 651, "BE_ArrayGetSize ( array )" },
	{ 652, "BE_ArrayGetValue ( array ; valueNumber )" },
	{ 653, "BE_Array_Delete ( array )" },
	{ 654, "BE_Array_Find ( array ; value )" },
	{ 655, "BE_Array_Change_Value ( array ; valueNumber ; newValue )" },
	{ 700, "BE_ConvertContainer ( field {; type ; width ; height } )" },
	{ 750, "BE_PDF_Append ( pdfPathOrContainer ; appendPathOrContainer {; destinationPath } )" },
	{ 751, "BE_PDF_PageCount ( pdfPathOrContainer )" },
	{ 752, "BE_PDF_GetPages ( pdfPathOrContainer ; newPDFPathOrContainer ; fromPageNum {; toPageNum } )" },
	{ 800, "BE_XOR ( text ; xorWith )" },
	{ 850, "BE_ScriptStepInstall ( name ; definitionXML ; id ; description ; calculation )" },
	{ 851, "BE_ScriptStepRemove ( scriptStepId )" },
	{ 852, "BE_ScriptStepPerform ( scriptStepId )" },
	{ 900, "BE_Vector_DotProduct ( a ; b )" },
	{ 901, "BE_Vector_EuclideanDistance ( a ; b )" },
	{ 950, "BE_Get_Machine_Name" },
	{ 1001, "BE_OKButton" },
	{ 1002, "BE_CancelButton" },
	{ 1003, "BE_AlternateButton" },
	{ 1120, "BE_ExecuteSystemCommand ( command { ; timeout } )" },
	{ 2001, "BE_MessageDigestAlgorithm_MD5_Deprecated" },
	{ 2002, "BE_MessageDigestAlgorithm_SHA256_Deprecated" },
	{ 2004, "BE_MessageDigestAlgorithm_MDC2_Deprecated" },
	{ 2006, "BE_MessageDigestAlgorithm_SHA_Deprecated" },
	{ 2007, "BE_MessageDigestAlgorithm_SHA1_Deprecated" },
	{ 2008, "BE_MessageDigestAlgorithm_SHA224_Deprecated" },
	{ 2009, "BE_MessageDigestAlgorithm_SHA384_Deprecated" },
	{ 2010, "BE_MessageDigestAlgorithm_SHA512_Deprecated" },
	{ 3000, "BE_FileType_All" },
	{ 3001, "BE_FileType_File" },
	{ 3002, "BE_FileType_Folder" },
	{ 4001, "BE_Encoding_Hex_Deprecated" },
	{ 4002, "BE_Encoding_Base64_Deprecated" },
	{ PLUGIN_DESCRIPTION_STRING_ID, "Version: 4.0b6\n\nThis plug-in provides additional functionality for BaseElements from Goya." }

};

#endif // BELINUXFUNCTIONSTRINGS_H
