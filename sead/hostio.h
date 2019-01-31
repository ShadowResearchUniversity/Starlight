/**
 * @file hostio.h
 * @brief Host I/O Node Implementation.
 */

#pragma once

namespace sead
{
    namespace hostio
    {
        class Context;
        class FileInfo;
        struct PropertyEvent;

        class Node
        {
        public:
            virtual s32 getNodeClassType() const;
        };
    };
};