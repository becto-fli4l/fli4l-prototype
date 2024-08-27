/*****************************************************************************
 * @file src/fli4ld/cmd/V1.0/CommandQueue.cc
 *  fli4ld: Command queue (V1.0).
 *
 *  Copyright (c) 2015 - fli4l-Team <team@fli4l.de>
 *
 *  This file is part of fli4l.
 *
 *  fli4l is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  fli4l is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with fli4l.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Last Update: $Id: CommandQueue.cc 44446 2016-02-06 10:28:00Z kristov $
 *****************************************************************************
 */

#include <fli4ld/cmd/V1.0/CommandQueue.hh>

using namespace std;

namespace fli4ld {
namespace cmd {

namespace V1_0 {

void
CommandQueue::queue(std::shared_ptr<Command> cmd) {
	Mutex::Lock lock(m_queueMutex);
	m_queue.push_back(cmd);
	m_sem.up();
}

shared_ptr<Command>
CommandQueue::dequeue()
{
	m_sem.down();
	Mutex::Lock lock(m_queueMutex);
	shared_ptr<Command> const result(m_queue.front());
	m_queue.pop_front();
	return result;
}

bool
CommandQueue::isEmpty() const noexcept {
	Mutex::Lock lock(m_queueMutex);
	return m_queue.empty();
}

} // V1_0

} // cmd
} // fli4ld