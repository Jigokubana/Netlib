//
// Created by lsmg on 2/20/20.
//

#include "opbase.h"

bool Net::OpBase::Add(int fd, int option, int event_type)
{
    return false;
}

bool Net::OpBase::Del(int fd, int option, int event_type)
{
    return false;
}


bool Net::OpBase::Dispatch(int time)
{
    return false;
}

void Net::OpBase::Dealloc()
{

}

Net::OpBase::OpBase()
{
    io_map_ = new std::map<int, int>;
}

