#include <utility>

#include "DocumentStructureException.h"

namespace qtv {
    DocumentStructureException::DocumentStructureException(string reason, int line) : reason(std::move(reason)),
                                                                                      line(line) {
    }

    string DocumentStructureException::what() {
        return "DocumentStructureException: " + reason + " on line " + to_string(line);
    }

}
