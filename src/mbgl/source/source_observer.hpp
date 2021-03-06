#ifndef MBGL_MAP_SOURCE_OBSERVER
#define MBGL_MAP_SOURCE_OBSERVER

#include <exception>

namespace mbgl {

class Source;
class OverscaledTileID;

class SourceObserver {
public:
    virtual ~SourceObserver() = default;

    virtual void onSourceLoaded(Source&) {}
    virtual void onSourceError(Source&, std::exception_ptr) {}
    virtual void onTileLoaded(Source&, const OverscaledTileID&, bool /* isNewTile */) {}
    virtual void onTileError(Source&, const OverscaledTileID&, std::exception_ptr) {}
    virtual void onPlacementRedone() {}
};

} // namespace mbgl

#endif
