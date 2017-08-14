#include "bare.h"
#include "cuda.h"
#include <string>

namespace bare {

std::string world() { return cuda::world() + ", bare.World!"; }

}  // namespace
