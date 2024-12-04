/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.11.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SchemaWithSet.h
 *
 * Schema with a set property
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SchemaWithSet_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SchemaWithSet_H_


#include "CppRestPetstoreClient/ModelBase.h"

#include "CppRestPetstoreClient/model/SchemaWithSet_vaccinationBook.h"
#include <cpprest/details/basic_types.h>
#include <set>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class SchemaWithSet_vaccinationBook;


/// <summary>
/// Schema with a set property
/// </summary>
class  SchemaWithSet
    : public ModelBase
{
public:
    SchemaWithSet();
    virtual ~SchemaWithSet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;


    /////////////////////////////////////////////
    /// SchemaWithSet members



    /// <summary>
    /// pedigree and other certificates
    /// </summary>
    std::set<utility::string_t> getCertificates() const;
    bool certificatesIsSet() const;
    void unsetCertificates();
    void setCertificates(const std::set<utility::string_t>& value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<SchemaWithSet_vaccinationBook> getVaccinationBook() const;
    bool vaccinationBookIsSet() const;
    void unsetVaccinationBook();
    void setVaccinationBook(const std::shared_ptr<SchemaWithSet_vaccinationBook>& value);

protected:
    std::set<utility::string_t> m_Certificates;
    bool m_CertificatesIsSet;
    std::shared_ptr<SchemaWithSet_vaccinationBook> m_VaccinationBook;
    bool m_VaccinationBookIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SchemaWithSet_H_ */
