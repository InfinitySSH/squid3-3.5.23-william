#include "squid.h"
#include "Debug.h"
#include "http/StatusCode.h"

const char *
Http::StatusCodeString(const Http::StatusCode status)
{
    switch (status) {

    // 000
    case Http::scNone:
        return "Init";      /* we init .status with code 0 */
        break;

    // 100-199
    case Http::scContinue:
        return "Continue";
        break;

    case Http::scSwitchingProtocols:
        return "<font color='orange'>Trocando Protocolos</font>";
        break;

    case Http::scProcessing:
        return "<font color='orange'>Processando</font>";
        break;
		
    case Http::scEarlyHints: // 103
        return "Early Hints";
        break;

    // 200-299

    case Http::scOkay:
        return "<font color='#9933FF'>Proxy Conectado <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;
    case Http::scCreated:
        return "Criado";
        break;

    case Http::scAccepted:
        return "Aceito";
        break;

    case Http::scNonAuthoritativeInformation:
        return "Non-Authoritative Information";
        break;

    case Http::scNoContent:
        return "No Content";
        break;

    case Http::scResetContent:
        return "Reset Content";
        break;

    case Http::scPartialContent:
        return "Partial Content";
        break;

    case Http::scMultiStatus:
        return "Multi-Status";
        break;

    case Http::scAlreadyReported:
        return "Already Reported";
        break;

    case Http::scImUsed:
        return "IM Used";
        break;

    // 300-399
    case Http::scMultipleChoices:
        return "Multiple Choices";
        break;
	
	case Http::scMovedPermanently:
        return "<font color='blue'>Movido Permanentemente <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;

    case Http::scFound:
        return "<font color='blue'>Encontrado <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;

    case Http::scSeeOther:
        return "See Other";
        break;

    case Http::scNotModified:
        return "Not Modified";
        break;

    case Http::scUseProxy:
        return "<font color='red'>Proxy Detectado <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;

    case Http::scTemporaryRedirect:
        return "Temporary Redirect";
        break;

    case Http::scPermanentRedirect:
        return "Permanent Redirect";
        break;

    // 400-499
    case Http::scBadRequest:
        return "Bad Request";
        break;

    case Http::scUnauthorized:
        return "Unauthorized";
        break;

    case Http::scPaymentRequired:
        return "Payment Required";
        break;

    case Http::scForbidden:
        return "<font color='red'>Conexão ao servidor SSH recusada <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;

    case Http::scNotFound:
        return "<font color='orange'>Não Encontrado</font>";
        break;

    case Http::scMethodNotAllowed:
        return "Method Not Allowed";
        break;

    case Http::scNotAcceptable:
        return "Not Acceptable";
        break;

    case Http::scProxyAuthenticationRequired:
        return "<font color='red'>O Proxy requer autenticação <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;

    case Http::scRequestTimeout:
        return "Request Timeout";
        break;

    case Http::scConflict:
        return "Conflict";
        break;

    case Http::scGone:
        return "Gone";
        break;

    case Http::scPreconditionFailed:
        return "<font color='red'>Falha na Precondiçãov</font>";
        break;

    case Http::scPayloadTooLarge:
        return "<font color='red'>Payload Muito Grande</font>";
        break;

    case Http::scUriTooLong:
        return "<font color='red'>URI Muito Longa</font>";
        break;

    case Http::scUnsupportedMediaType:
        return "<font color='red'>Não suportado</font>";
        break;

    case Http::scRequestedRangeNotSatisfied:
        return "Requested Range Not Satisfiable";
        break;

    case Http::scExpectationFailed:
        return "Expectation Failed";
        break;

    case Http::scMisdirectedRequest:
        return "Misdirected Request";
        break;

    case Http::scUnprocessableEntity:
        return "Unprocessable Entity";

    case Http::scLocked:
        return "<font color='red'>Bloqueado</font>";
        break;

		
    case Http::scLengthRequired:
        return "Length Required";
        break;
		
    case Http::scFailedDependency:
        return "<font color='red'>A Dependência falhou</font>";
        break;

    case Http::scUpgradeRequired:
        return "<font color='red'>Atualização Requerida</font>";
        break;

    case Http::scPreconditionRequired:
        return "<font color='red'>Precondição Requerida</font>";
        break;

    case Http::scTooManyRequests:
        return "<font color='red'>Muitas Solicitações</font>";
        break;

    case Http::scRequestHeaderFieldsTooLarge:
        return "Request Header Fields Too Large";
        break;

    case scUnavailableForLegalReasons:
        return "Unavailable For Legal Reasons";
        break;

    // 500-599
    case Http::scInternalServerError:
        return "<font color='red'>Erro Interno no Servidor <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;

    case Http::scNotImplemented:
        return "<font color='red'>Nâo Disponível <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;

    case Http::scBadGateway:
        return "<font color='red'>Erro na Gateway <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;

    case Http::scServiceUnavailable:
        return "<font color='red'>Serviço Indisponível <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;

    case Http::scGatewayTimeout:
        return "<font color='red'>Gateway Offline <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;

    case Http::scHttpVersionNotSupported:
        return "<font color='orange'>Versão HTTP não suportada <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;
    case Http::scVariantAlsoNegotiates:
        return "Variant Also Negotiates";
        break;

    case Http::scInsufficientStorage:
        return "<font color='red'>Armazenamento Cheio <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;

    case Http::scLoopDetected:
        return "<font color='blue'>Loop Detectado</font>";
        break;

    case Http::scNotExtended:
        return "Not Extended";
        break;

    case Http::scNetworkAuthenticationRequired:
        return "<font color='blue'>A Rede requer Autenticação <a href='//t.me/InfinitySSHSmartBot'>William</a></font>";
        break;
    // 600+
    case Http::scInvalidHeader:
    case Http::scHeaderTooLarge:
    // fall through to default.

    default:
        debugs(57, 3, "Unassigned HTTP status code: " << status);
    }
    return "Unassigned";
}

