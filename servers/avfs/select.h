#ifndef __VFS_SELECT_H__
#define __VFS_SELECT_H__

/* return codes for select_request_* and select_cancel_* */
#define SEL_OK		0	/* ready */
#define SEL_ERROR	1	/* failed */
#define SEL_DEFERRED	2	/* request is sent to driver */

#endif
