#ifndef _link_backend_h
#define _link_backend_h

const struct cords_xlink *initialise_and_get_first_link(const char *source_id);
const struct cords_xlink *next_link(const char *source_id);

const struct cords_xlink *initialise_and_get_last_link(const char *source_id);
const struct cords_xlink *previous_link(const char *source_id);

#endif