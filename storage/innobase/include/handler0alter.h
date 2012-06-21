/*****************************************************************************

Copyright (c) 2005, 2012, Oracle and/or its affiliates. All Rights Reserved.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; version 2 of the License.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Suite 500, Boston, MA 02110-1335 USA

*****************************************************************************/

/**************************************************//**
@file include/handler0alter.h
Smart ALTER TABLE
*******************************************************/

/*************************************************************//**
Copies an InnoDB record to table->record[0]. */
UNIV_INTERN
void
innobase_rec_to_mysql(
/*==================*/
	struct TABLE*		table,	/*!< in/out: MySQL table */
	const ulint*		col_map,/*!< in: mapping of column
					numbers in table to the
					rebuilt table (index->table),
					or NULL if not rebuilding table */
	const rec_t*		rec,	/*!< in: record */
	const dict_index_t*	index,	/*!< in: index */
	const ulint*		offsets)/*!< in: rec_get_offsets(
					rec, index, ...) */
	__attribute__((nonnull(1,3,4,5)));

/*************************************************************//**
Resets table->record[0]. */
UNIV_INTERN
void
innobase_rec_reset(
/*===============*/
	struct TABLE*		table)		/*!< in/out: MySQL table */
	__attribute__((nonnull));
