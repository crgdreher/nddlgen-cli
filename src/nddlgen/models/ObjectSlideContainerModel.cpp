/**
 * Copyright 2015 Christian Dreher (dreher@charlydelta.org)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <nddlgen/models/ObjectSlideContainerModel.h>

nddlgen::models::ObjectSlideContainerModel::ObjectSlideContainerModel()
{
	this->setClassName("ObjectSlideContainer");
}

nddlgen::models::ObjectSlideContainerModel::~ObjectSlideContainerModel()
{

}

void nddlgen::models::ObjectSlideContainerModel::initSubObjects()
{
	nddlgen::models::ObjectSlideContainerStateModelPtr oscs(new nddlgen::models::ObjectSlideContainerStateModel());
	nddlgen::models::ProcessModelPtr process1(new nddlgen::models::ProcessModel());
	nddlgen::models::ProcessModelPtr process2(new nddlgen::models::ProcessModel());

	oscs->setName("oscs");
	process1->setName("preparation_process_1");
	process2->setName("preparation_process_2");

	this->addSubObject(oscs);
	this->addSubObject(process1);
	this->addSubObject(process2);
}
