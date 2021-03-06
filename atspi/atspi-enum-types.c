
/* Generated data (by glib-mkenums) */

#include "atspi-enum-types.h"

/* enumerations from "atspi-constants.h" */
#include "atspi-constants.h"

GType
atspi_locale_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_LOCALE_TYPE_MESSAGES,
			  "ATSPI_LOCALE_TYPE_MESSAGES",
			  "messages" },
			{ ATSPI_LOCALE_TYPE_COLLATE,
			  "ATSPI_LOCALE_TYPE_COLLATE",
			  "collate" },
			{ ATSPI_LOCALE_TYPE_CTYPE,
			  "ATSPI_LOCALE_TYPE_CTYPE",
			  "ctype" },
			{ ATSPI_LOCALE_TYPE_MONETARY,
			  "ATSPI_LOCALE_TYPE_MONETARY",
			  "monetary" },
			{ ATSPI_LOCALE_TYPE_NUMERIC,
			  "ATSPI_LOCALE_TYPE_NUMERIC",
			  "numeric" },
			{ ATSPI_LOCALE_TYPE_TIME,
			  "ATSPI_LOCALE_TYPE_TIME",
			  "time" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiLocaleType"),
				values);
	}
	return the_type;
}

GType
atspi_coord_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_COORD_TYPE_SCREEN,
			  "ATSPI_COORD_TYPE_SCREEN",
			  "screen" },
			{ ATSPI_COORD_TYPE_WINDOW,
			  "ATSPI_COORD_TYPE_WINDOW",
			  "window" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiCoordType"),
				values);
	}
	return the_type;
}

GType
atspi_collection_sort_order_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_Collection_SORT_ORDER_INVALID,
			  "ATSPI_Collection_SORT_ORDER_INVALID",
			  "invalid" },
			{ ATSPI_Collection_SORT_ORDER_CANONICAL,
			  "ATSPI_Collection_SORT_ORDER_CANONICAL",
			  "canonical" },
			{ ATSPI_Collection_SORT_ORDER_FLOW,
			  "ATSPI_Collection_SORT_ORDER_FLOW",
			  "flow" },
			{ ATSPI_Collection_SORT_ORDER_TAB,
			  "ATSPI_Collection_SORT_ORDER_TAB",
			  "tab" },
			{ ATSPI_Collection_SORT_ORDER_REVERSE_CANONICAL,
			  "ATSPI_Collection_SORT_ORDER_REVERSE_CANONICAL",
			  "reverse-canonical" },
			{ ATSPI_Collection_SORT_ORDER_REVERSE_FLOW,
			  "ATSPI_Collection_SORT_ORDER_REVERSE_FLOW",
			  "reverse-flow" },
			{ ATSPI_Collection_SORT_ORDER_REVERSE_TAB,
			  "ATSPI_Collection_SORT_ORDER_REVERSE_TAB",
			  "reverse-tab" },
			{ ATSPI_Collection_SORT_ORDER_LAST_DEFINED,
			  "ATSPI_Collection_SORT_ORDER_LAST_DEFINED",
			  "last-defined" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiCollectionSortOrder"),
				values);
	}
	return the_type;
}

GType
atspi_collection_match_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_Collection_MATCH_INVALID,
			  "ATSPI_Collection_MATCH_INVALID",
			  "invalid" },
			{ ATSPI_Collection_MATCH_ALL,
			  "ATSPI_Collection_MATCH_ALL",
			  "all" },
			{ ATSPI_Collection_MATCH_ANY,
			  "ATSPI_Collection_MATCH_ANY",
			  "any" },
			{ ATSPI_Collection_MATCH_NONE,
			  "ATSPI_Collection_MATCH_NONE",
			  "none" },
			{ ATSPI_Collection_MATCH_EMPTY,
			  "ATSPI_Collection_MATCH_EMPTY",
			  "empty" },
			{ ATSPI_Collection_MATCH_LAST_DEFINED,
			  "ATSPI_Collection_MATCH_LAST_DEFINED",
			  "last-defined" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiCollectionMatchType"),
				values);
	}
	return the_type;
}

GType
atspi_collection_tree_traversal_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_Collection_TREE_RESTRICT_CHILDREN,
			  "ATSPI_Collection_TREE_RESTRICT_CHILDREN",
			  "restrict-children" },
			{ ATSPI_Collection_TREE_RESTRICT_SIBLING,
			  "ATSPI_Collection_TREE_RESTRICT_SIBLING",
			  "restrict-sibling" },
			{ ATSPI_Collection_TREE_INORDER,
			  "ATSPI_Collection_TREE_INORDER",
			  "inorder" },
			{ ATSPI_Collection_TREE_LAST_DEFINED,
			  "ATSPI_Collection_TREE_LAST_DEFINED",
			  "last-defined" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiCollectionTreeTraversalType"),
				values);
	}
	return the_type;
}

GType
atspi_component_layer_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_LAYER_INVALID,
			  "ATSPI_LAYER_INVALID",
			  "invalid" },
			{ ATSPI_LAYER_BACKGROUND,
			  "ATSPI_LAYER_BACKGROUND",
			  "background" },
			{ ATSPI_LAYER_CANVAS,
			  "ATSPI_LAYER_CANVAS",
			  "canvas" },
			{ ATSPI_LAYER_WIDGET,
			  "ATSPI_LAYER_WIDGET",
			  "widget" },
			{ ATSPI_LAYER_MDI,
			  "ATSPI_LAYER_MDI",
			  "mdi" },
			{ ATSPI_LAYER_POPUP,
			  "ATSPI_LAYER_POPUP",
			  "popup" },
			{ ATSPI_LAYER_OVERLAY,
			  "ATSPI_LAYER_OVERLAY",
			  "overlay" },
			{ ATSPI_LAYER_WINDOW,
			  "ATSPI_LAYER_WINDOW",
			  "window" },
			{ ATSPI_LAYER_LAST_DEFINED,
			  "ATSPI_LAYER_LAST_DEFINED",
			  "last-defined" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiComponentLayer"),
				values);
	}
	return the_type;
}

GType
atspi_text_boundary_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_TEXT_BOUNDARY_CHAR,
			  "ATSPI_TEXT_BOUNDARY_CHAR",
			  "char" },
			{ ATSPI_TEXT_BOUNDARY_WORD_START,
			  "ATSPI_TEXT_BOUNDARY_WORD_START",
			  "word-start" },
			{ ATSPI_TEXT_BOUNDARY_WORD_END,
			  "ATSPI_TEXT_BOUNDARY_WORD_END",
			  "word-end" },
			{ ATSPI_TEXT_BOUNDARY_SENTENCE_START,
			  "ATSPI_TEXT_BOUNDARY_SENTENCE_START",
			  "sentence-start" },
			{ ATSPI_TEXT_BOUNDARY_SENTENCE_END,
			  "ATSPI_TEXT_BOUNDARY_SENTENCE_END",
			  "sentence-end" },
			{ ATSPI_TEXT_BOUNDARY_LINE_START,
			  "ATSPI_TEXT_BOUNDARY_LINE_START",
			  "line-start" },
			{ ATSPI_TEXT_BOUNDARY_LINE_END,
			  "ATSPI_TEXT_BOUNDARY_LINE_END",
			  "line-end" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiTextBoundaryType"),
				values);
	}
	return the_type;
}

GType
atspi_text_granularity_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_TEXT_GRANULARITY_CHAR,
			  "ATSPI_TEXT_GRANULARITY_CHAR",
			  "char" },
			{ ATSPI_TEXT_GRANULARITY_WORD,
			  "ATSPI_TEXT_GRANULARITY_WORD",
			  "word" },
			{ ATSPI_TEXT_GRANULARITY_SENTENCE,
			  "ATSPI_TEXT_GRANULARITY_SENTENCE",
			  "sentence" },
			{ ATSPI_TEXT_GRANULARITY_LINE,
			  "ATSPI_TEXT_GRANULARITY_LINE",
			  "line" },
			{ ATSPI_TEXT_GRANULARITY_PARAGRAPH,
			  "ATSPI_TEXT_GRANULARITY_PARAGRAPH",
			  "paragraph" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiTextGranularity"),
				values);
	}
	return the_type;
}

GType
atspi_text_clip_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_TEXT_CLIP_NONE,
			  "ATSPI_TEXT_CLIP_NONE",
			  "none" },
			{ ATSPI_TEXT_CLIP_MIN,
			  "ATSPI_TEXT_CLIP_MIN",
			  "min" },
			{ ATSPI_TEXT_CLIP_MAX,
			  "ATSPI_TEXT_CLIP_MAX",
			  "max" },
			{ ATSPI_TEXT_CLIP_BOTH,
			  "ATSPI_TEXT_CLIP_BOTH",
			  "both" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiTextClipType"),
				values);
	}
	return the_type;
}

GType
atspi_state_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_STATE_INVALID,
			  "ATSPI_STATE_INVALID",
			  "invalid" },
			{ ATSPI_STATE_ACTIVE,
			  "ATSPI_STATE_ACTIVE",
			  "active" },
			{ ATSPI_STATE_ARMED,
			  "ATSPI_STATE_ARMED",
			  "armed" },
			{ ATSPI_STATE_BUSY,
			  "ATSPI_STATE_BUSY",
			  "busy" },
			{ ATSPI_STATE_CHECKED,
			  "ATSPI_STATE_CHECKED",
			  "checked" },
			{ ATSPI_STATE_COLLAPSED,
			  "ATSPI_STATE_COLLAPSED",
			  "collapsed" },
			{ ATSPI_STATE_DEFUNCT,
			  "ATSPI_STATE_DEFUNCT",
			  "defunct" },
			{ ATSPI_STATE_EDITABLE,
			  "ATSPI_STATE_EDITABLE",
			  "editable" },
			{ ATSPI_STATE_ENABLED,
			  "ATSPI_STATE_ENABLED",
			  "enabled" },
			{ ATSPI_STATE_EXPANDABLE,
			  "ATSPI_STATE_EXPANDABLE",
			  "expandable" },
			{ ATSPI_STATE_EXPANDED,
			  "ATSPI_STATE_EXPANDED",
			  "expanded" },
			{ ATSPI_STATE_FOCUSABLE,
			  "ATSPI_STATE_FOCUSABLE",
			  "focusable" },
			{ ATSPI_STATE_FOCUSED,
			  "ATSPI_STATE_FOCUSED",
			  "focused" },
			{ ATSPI_STATE_HAS_TOOLTIP,
			  "ATSPI_STATE_HAS_TOOLTIP",
			  "has-tooltip" },
			{ ATSPI_STATE_HORIZONTAL,
			  "ATSPI_STATE_HORIZONTAL",
			  "horizontal" },
			{ ATSPI_STATE_ICONIFIED,
			  "ATSPI_STATE_ICONIFIED",
			  "iconified" },
			{ ATSPI_STATE_MODAL,
			  "ATSPI_STATE_MODAL",
			  "modal" },
			{ ATSPI_STATE_MULTI_LINE,
			  "ATSPI_STATE_MULTI_LINE",
			  "multi-line" },
			{ ATSPI_STATE_MULTISELECTABLE,
			  "ATSPI_STATE_MULTISELECTABLE",
			  "multiselectable" },
			{ ATSPI_STATE_OPAQUE,
			  "ATSPI_STATE_OPAQUE",
			  "opaque" },
			{ ATSPI_STATE_PRESSED,
			  "ATSPI_STATE_PRESSED",
			  "pressed" },
			{ ATSPI_STATE_RESIZABLE,
			  "ATSPI_STATE_RESIZABLE",
			  "resizable" },
			{ ATSPI_STATE_SELECTABLE,
			  "ATSPI_STATE_SELECTABLE",
			  "selectable" },
			{ ATSPI_STATE_SELECTED,
			  "ATSPI_STATE_SELECTED",
			  "selected" },
			{ ATSPI_STATE_SENSITIVE,
			  "ATSPI_STATE_SENSITIVE",
			  "sensitive" },
			{ ATSPI_STATE_SHOWING,
			  "ATSPI_STATE_SHOWING",
			  "showing" },
			{ ATSPI_STATE_SINGLE_LINE,
			  "ATSPI_STATE_SINGLE_LINE",
			  "single-line" },
			{ ATSPI_STATE_STALE,
			  "ATSPI_STATE_STALE",
			  "stale" },
			{ ATSPI_STATE_TRANSIENT,
			  "ATSPI_STATE_TRANSIENT",
			  "transient" },
			{ ATSPI_STATE_VERTICAL,
			  "ATSPI_STATE_VERTICAL",
			  "vertical" },
			{ ATSPI_STATE_VISIBLE,
			  "ATSPI_STATE_VISIBLE",
			  "visible" },
			{ ATSPI_STATE_MANAGES_DESCENDANTS,
			  "ATSPI_STATE_MANAGES_DESCENDANTS",
			  "manages-descendants" },
			{ ATSPI_STATE_INDETERMINATE,
			  "ATSPI_STATE_INDETERMINATE",
			  "indeterminate" },
			{ ATSPI_STATE_REQUIRED,
			  "ATSPI_STATE_REQUIRED",
			  "required" },
			{ ATSPI_STATE_TRUNCATED,
			  "ATSPI_STATE_TRUNCATED",
			  "truncated" },
			{ ATSPI_STATE_ANIMATED,
			  "ATSPI_STATE_ANIMATED",
			  "animated" },
			{ ATSPI_STATE_INVALID_ENTRY,
			  "ATSPI_STATE_INVALID_ENTRY",
			  "invalid-entry" },
			{ ATSPI_STATE_SUPPORTS_AUTOCOMPLETION,
			  "ATSPI_STATE_SUPPORTS_AUTOCOMPLETION",
			  "supports-autocompletion" },
			{ ATSPI_STATE_SELECTABLE_TEXT,
			  "ATSPI_STATE_SELECTABLE_TEXT",
			  "selectable-text" },
			{ ATSPI_STATE_IS_DEFAULT,
			  "ATSPI_STATE_IS_DEFAULT",
			  "is-default" },
			{ ATSPI_STATE_VISITED,
			  "ATSPI_STATE_VISITED",
			  "visited" },
			{ ATSPI_STATE_CHECKABLE,
			  "ATSPI_STATE_CHECKABLE",
			  "checkable" },
			{ ATSPI_STATE_HAS_POPUP,
			  "ATSPI_STATE_HAS_POPUP",
			  "has-popup" },
			{ ATSPI_STATE_READ_ONLY,
			  "ATSPI_STATE_READ_ONLY",
			  "read-only" },
			{ ATSPI_STATE_LAST_DEFINED,
			  "ATSPI_STATE_LAST_DEFINED",
			  "last-defined" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiStateType"),
				values);
	}
	return the_type;
}

GType
atspi_key_event_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_KEY_PRESSED,
			  "ATSPI_KEY_PRESSED",
			  "pressed" },
			{ ATSPI_KEY_RELEASED,
			  "ATSPI_KEY_RELEASED",
			  "released" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiKeyEventType"),
				values);
	}
	return the_type;
}

GType
atspi_event_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_KEY_PRESSED_EVENT,
			  "ATSPI_KEY_PRESSED_EVENT",
			  "key-pressed-event" },
			{ ATSPI_KEY_RELEASED_EVENT,
			  "ATSPI_KEY_RELEASED_EVENT",
			  "key-released-event" },
			{ ATSPI_BUTTON_PRESSED_EVENT,
			  "ATSPI_BUTTON_PRESSED_EVENT",
			  "button-pressed-event" },
			{ ATSPI_BUTTON_RELEASED_EVENT,
			  "ATSPI_BUTTON_RELEASED_EVENT",
			  "button-released-event" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiEventType"),
				values);
	}
	return the_type;
}

GType
atspi_key_synth_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_KEY_PRESS,
			  "ATSPI_KEY_PRESS",
			  "press" },
			{ ATSPI_KEY_RELEASE,
			  "ATSPI_KEY_RELEASE",
			  "release" },
			{ ATSPI_KEY_PRESSRELEASE,
			  "ATSPI_KEY_PRESSRELEASE",
			  "pressrelease" },
			{ ATSPI_KEY_SYM,
			  "ATSPI_KEY_SYM",
			  "sym" },
			{ ATSPI_KEY_STRING,
			  "ATSPI_KEY_STRING",
			  "string" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiKeySynthType"),
				values);
	}
	return the_type;
}

GType
atspi_modifier_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_MODIFIER_SHIFT,
			  "ATSPI_MODIFIER_SHIFT",
			  "shift" },
			{ ATSPI_MODIFIER_SHIFTLOCK,
			  "ATSPI_MODIFIER_SHIFTLOCK",
			  "shiftlock" },
			{ ATSPI_MODIFIER_CONTROL,
			  "ATSPI_MODIFIER_CONTROL",
			  "control" },
			{ ATSPI_MODIFIER_ALT,
			  "ATSPI_MODIFIER_ALT",
			  "alt" },
			{ ATSPI_MODIFIER_META,
			  "ATSPI_MODIFIER_META",
			  "meta" },
			{ ATSPI_MODIFIER_META2,
			  "ATSPI_MODIFIER_META2",
			  "meta2" },
			{ ATSPI_MODIFIER_META3,
			  "ATSPI_MODIFIER_META3",
			  "meta3" },
			{ ATSPI_MODIFIER_NUMLOCK,
			  "ATSPI_MODIFIER_NUMLOCK",
			  "numlock" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiModifierType"),
				values);
	}
	return the_type;
}

GType
atspi_relation_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_RELATION_NULL,
			  "ATSPI_RELATION_NULL",
			  "null" },
			{ ATSPI_RELATION_LABEL_FOR,
			  "ATSPI_RELATION_LABEL_FOR",
			  "label-for" },
			{ ATSPI_RELATION_LABELLED_BY,
			  "ATSPI_RELATION_LABELLED_BY",
			  "labelled-by" },
			{ ATSPI_RELATION_CONTROLLER_FOR,
			  "ATSPI_RELATION_CONTROLLER_FOR",
			  "controller-for" },
			{ ATSPI_RELATION_CONTROLLED_BY,
			  "ATSPI_RELATION_CONTROLLED_BY",
			  "controlled-by" },
			{ ATSPI_RELATION_MEMBER_OF,
			  "ATSPI_RELATION_MEMBER_OF",
			  "member-of" },
			{ ATSPI_RELATION_TOOLTIP_FOR,
			  "ATSPI_RELATION_TOOLTIP_FOR",
			  "tooltip-for" },
			{ ATSPI_RELATION_NODE_CHILD_OF,
			  "ATSPI_RELATION_NODE_CHILD_OF",
			  "node-child-of" },
			{ ATSPI_RELATION_NODE_PARENT_OF,
			  "ATSPI_RELATION_NODE_PARENT_OF",
			  "node-parent-of" },
			{ ATSPI_RELATION_EXTENDED,
			  "ATSPI_RELATION_EXTENDED",
			  "extended" },
			{ ATSPI_RELATION_FLOWS_TO,
			  "ATSPI_RELATION_FLOWS_TO",
			  "flows-to" },
			{ ATSPI_RELATION_FLOWS_FROM,
			  "ATSPI_RELATION_FLOWS_FROM",
			  "flows-from" },
			{ ATSPI_RELATION_SUBWINDOW_OF,
			  "ATSPI_RELATION_SUBWINDOW_OF",
			  "subwindow-of" },
			{ ATSPI_RELATION_EMBEDS,
			  "ATSPI_RELATION_EMBEDS",
			  "embeds" },
			{ ATSPI_RELATION_EMBEDDED_BY,
			  "ATSPI_RELATION_EMBEDDED_BY",
			  "embedded-by" },
			{ ATSPI_RELATION_POPUP_FOR,
			  "ATSPI_RELATION_POPUP_FOR",
			  "popup-for" },
			{ ATSPI_RELATION_PARENT_WINDOW_OF,
			  "ATSPI_RELATION_PARENT_WINDOW_OF",
			  "parent-window-of" },
			{ ATSPI_RELATION_DESCRIPTION_FOR,
			  "ATSPI_RELATION_DESCRIPTION_FOR",
			  "description-for" },
			{ ATSPI_RELATION_DESCRIBED_BY,
			  "ATSPI_RELATION_DESCRIBED_BY",
			  "described-by" },
			{ ATSPI_RELATION_LAST_DEFINED,
			  "ATSPI_RELATION_LAST_DEFINED",
			  "last-defined" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiRelationType"),
				values);
	}
	return the_type;
}

GType
atspi_role_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ ATSPI_ROLE_INVALID,
			  "ATSPI_ROLE_INVALID",
			  "invalid" },
			{ ATSPI_ROLE_ACCELERATOR_LABEL,
			  "ATSPI_ROLE_ACCELERATOR_LABEL",
			  "accelerator-label" },
			{ ATSPI_ROLE_ALERT,
			  "ATSPI_ROLE_ALERT",
			  "alert" },
			{ ATSPI_ROLE_ANIMATION,
			  "ATSPI_ROLE_ANIMATION",
			  "animation" },
			{ ATSPI_ROLE_ARROW,
			  "ATSPI_ROLE_ARROW",
			  "arrow" },
			{ ATSPI_ROLE_CALENDAR,
			  "ATSPI_ROLE_CALENDAR",
			  "calendar" },
			{ ATSPI_ROLE_CANVAS,
			  "ATSPI_ROLE_CANVAS",
			  "canvas" },
			{ ATSPI_ROLE_CHECK_BOX,
			  "ATSPI_ROLE_CHECK_BOX",
			  "check-box" },
			{ ATSPI_ROLE_CHECK_MENU_ITEM,
			  "ATSPI_ROLE_CHECK_MENU_ITEM",
			  "check-menu-item" },
			{ ATSPI_ROLE_COLOR_CHOOSER,
			  "ATSPI_ROLE_COLOR_CHOOSER",
			  "color-chooser" },
			{ ATSPI_ROLE_COLUMN_HEADER,
			  "ATSPI_ROLE_COLUMN_HEADER",
			  "column-header" },
			{ ATSPI_ROLE_COMBO_BOX,
			  "ATSPI_ROLE_COMBO_BOX",
			  "combo-box" },
			{ ATSPI_ROLE_DATE_EDITOR,
			  "ATSPI_ROLE_DATE_EDITOR",
			  "date-editor" },
			{ ATSPI_ROLE_DESKTOP_ICON,
			  "ATSPI_ROLE_DESKTOP_ICON",
			  "desktop-icon" },
			{ ATSPI_ROLE_DESKTOP_FRAME,
			  "ATSPI_ROLE_DESKTOP_FRAME",
			  "desktop-frame" },
			{ ATSPI_ROLE_DIAL,
			  "ATSPI_ROLE_DIAL",
			  "dial" },
			{ ATSPI_ROLE_DIALOG,
			  "ATSPI_ROLE_DIALOG",
			  "dialog" },
			{ ATSPI_ROLE_DIRECTORY_PANE,
			  "ATSPI_ROLE_DIRECTORY_PANE",
			  "directory-pane" },
			{ ATSPI_ROLE_DRAWING_AREA,
			  "ATSPI_ROLE_DRAWING_AREA",
			  "drawing-area" },
			{ ATSPI_ROLE_FILE_CHOOSER,
			  "ATSPI_ROLE_FILE_CHOOSER",
			  "file-chooser" },
			{ ATSPI_ROLE_FILLER,
			  "ATSPI_ROLE_FILLER",
			  "filler" },
			{ ATSPI_ROLE_FOCUS_TRAVERSABLE,
			  "ATSPI_ROLE_FOCUS_TRAVERSABLE",
			  "focus-traversable" },
			{ ATSPI_ROLE_FONT_CHOOSER,
			  "ATSPI_ROLE_FONT_CHOOSER",
			  "font-chooser" },
			{ ATSPI_ROLE_FRAME,
			  "ATSPI_ROLE_FRAME",
			  "frame" },
			{ ATSPI_ROLE_GLASS_PANE,
			  "ATSPI_ROLE_GLASS_PANE",
			  "glass-pane" },
			{ ATSPI_ROLE_HTML_CONTAINER,
			  "ATSPI_ROLE_HTML_CONTAINER",
			  "html-container" },
			{ ATSPI_ROLE_ICON,
			  "ATSPI_ROLE_ICON",
			  "icon" },
			{ ATSPI_ROLE_IMAGE,
			  "ATSPI_ROLE_IMAGE",
			  "image" },
			{ ATSPI_ROLE_INTERNAL_FRAME,
			  "ATSPI_ROLE_INTERNAL_FRAME",
			  "internal-frame" },
			{ ATSPI_ROLE_LABEL,
			  "ATSPI_ROLE_LABEL",
			  "label" },
			{ ATSPI_ROLE_LAYERED_PANE,
			  "ATSPI_ROLE_LAYERED_PANE",
			  "layered-pane" },
			{ ATSPI_ROLE_LIST,
			  "ATSPI_ROLE_LIST",
			  "list" },
			{ ATSPI_ROLE_LIST_ITEM,
			  "ATSPI_ROLE_LIST_ITEM",
			  "list-item" },
			{ ATSPI_ROLE_MENU,
			  "ATSPI_ROLE_MENU",
			  "menu" },
			{ ATSPI_ROLE_MENU_BAR,
			  "ATSPI_ROLE_MENU_BAR",
			  "menu-bar" },
			{ ATSPI_ROLE_MENU_ITEM,
			  "ATSPI_ROLE_MENU_ITEM",
			  "menu-item" },
			{ ATSPI_ROLE_OPTION_PANE,
			  "ATSPI_ROLE_OPTION_PANE",
			  "option-pane" },
			{ ATSPI_ROLE_PAGE_TAB,
			  "ATSPI_ROLE_PAGE_TAB",
			  "page-tab" },
			{ ATSPI_ROLE_PAGE_TAB_LIST,
			  "ATSPI_ROLE_PAGE_TAB_LIST",
			  "page-tab-list" },
			{ ATSPI_ROLE_PANEL,
			  "ATSPI_ROLE_PANEL",
			  "panel" },
			{ ATSPI_ROLE_PASSWORD_TEXT,
			  "ATSPI_ROLE_PASSWORD_TEXT",
			  "password-text" },
			{ ATSPI_ROLE_POPUP_MENU,
			  "ATSPI_ROLE_POPUP_MENU",
			  "popup-menu" },
			{ ATSPI_ROLE_PROGRESS_BAR,
			  "ATSPI_ROLE_PROGRESS_BAR",
			  "progress-bar" },
			{ ATSPI_ROLE_PUSH_BUTTON,
			  "ATSPI_ROLE_PUSH_BUTTON",
			  "push-button" },
			{ ATSPI_ROLE_RADIO_BUTTON,
			  "ATSPI_ROLE_RADIO_BUTTON",
			  "radio-button" },
			{ ATSPI_ROLE_RADIO_MENU_ITEM,
			  "ATSPI_ROLE_RADIO_MENU_ITEM",
			  "radio-menu-item" },
			{ ATSPI_ROLE_ROOT_PANE,
			  "ATSPI_ROLE_ROOT_PANE",
			  "root-pane" },
			{ ATSPI_ROLE_ROW_HEADER,
			  "ATSPI_ROLE_ROW_HEADER",
			  "row-header" },
			{ ATSPI_ROLE_SCROLL_BAR,
			  "ATSPI_ROLE_SCROLL_BAR",
			  "scroll-bar" },
			{ ATSPI_ROLE_SCROLL_PANE,
			  "ATSPI_ROLE_SCROLL_PANE",
			  "scroll-pane" },
			{ ATSPI_ROLE_SEPARATOR,
			  "ATSPI_ROLE_SEPARATOR",
			  "separator" },
			{ ATSPI_ROLE_SLIDER,
			  "ATSPI_ROLE_SLIDER",
			  "slider" },
			{ ATSPI_ROLE_SPIN_BUTTON,
			  "ATSPI_ROLE_SPIN_BUTTON",
			  "spin-button" },
			{ ATSPI_ROLE_SPLIT_PANE,
			  "ATSPI_ROLE_SPLIT_PANE",
			  "split-pane" },
			{ ATSPI_ROLE_STATUS_BAR,
			  "ATSPI_ROLE_STATUS_BAR",
			  "status-bar" },
			{ ATSPI_ROLE_TABLE,
			  "ATSPI_ROLE_TABLE",
			  "table" },
			{ ATSPI_ROLE_TABLE_CELL,
			  "ATSPI_ROLE_TABLE_CELL",
			  "table-cell" },
			{ ATSPI_ROLE_TABLE_COLUMN_HEADER,
			  "ATSPI_ROLE_TABLE_COLUMN_HEADER",
			  "table-column-header" },
			{ ATSPI_ROLE_TABLE_ROW_HEADER,
			  "ATSPI_ROLE_TABLE_ROW_HEADER",
			  "table-row-header" },
			{ ATSPI_ROLE_TEAROFF_MENU_ITEM,
			  "ATSPI_ROLE_TEAROFF_MENU_ITEM",
			  "tearoff-menu-item" },
			{ ATSPI_ROLE_TERMINAL,
			  "ATSPI_ROLE_TERMINAL",
			  "terminal" },
			{ ATSPI_ROLE_TEXT,
			  "ATSPI_ROLE_TEXT",
			  "text" },
			{ ATSPI_ROLE_TOGGLE_BUTTON,
			  "ATSPI_ROLE_TOGGLE_BUTTON",
			  "toggle-button" },
			{ ATSPI_ROLE_TOOL_BAR,
			  "ATSPI_ROLE_TOOL_BAR",
			  "tool-bar" },
			{ ATSPI_ROLE_TOOL_TIP,
			  "ATSPI_ROLE_TOOL_TIP",
			  "tool-tip" },
			{ ATSPI_ROLE_TREE,
			  "ATSPI_ROLE_TREE",
			  "tree" },
			{ ATSPI_ROLE_TREE_TABLE,
			  "ATSPI_ROLE_TREE_TABLE",
			  "tree-table" },
			{ ATSPI_ROLE_UNKNOWN,
			  "ATSPI_ROLE_UNKNOWN",
			  "unknown" },
			{ ATSPI_ROLE_VIEWPORT,
			  "ATSPI_ROLE_VIEWPORT",
			  "viewport" },
			{ ATSPI_ROLE_WINDOW,
			  "ATSPI_ROLE_WINDOW",
			  "window" },
			{ ATSPI_ROLE_EXTENDED,
			  "ATSPI_ROLE_EXTENDED",
			  "extended" },
			{ ATSPI_ROLE_HEADER,
			  "ATSPI_ROLE_HEADER",
			  "header" },
			{ ATSPI_ROLE_FOOTER,
			  "ATSPI_ROLE_FOOTER",
			  "footer" },
			{ ATSPI_ROLE_PARAGRAPH,
			  "ATSPI_ROLE_PARAGRAPH",
			  "paragraph" },
			{ ATSPI_ROLE_RULER,
			  "ATSPI_ROLE_RULER",
			  "ruler" },
			{ ATSPI_ROLE_APPLICATION,
			  "ATSPI_ROLE_APPLICATION",
			  "application" },
			{ ATSPI_ROLE_AUTOCOMPLETE,
			  "ATSPI_ROLE_AUTOCOMPLETE",
			  "autocomplete" },
			{ ATSPI_ROLE_EDITBAR,
			  "ATSPI_ROLE_EDITBAR",
			  "editbar" },
			{ ATSPI_ROLE_EMBEDDED,
			  "ATSPI_ROLE_EMBEDDED",
			  "embedded" },
			{ ATSPI_ROLE_ENTRY,
			  "ATSPI_ROLE_ENTRY",
			  "entry" },
			{ ATSPI_ROLE_CHART,
			  "ATSPI_ROLE_CHART",
			  "chart" },
			{ ATSPI_ROLE_CAPTION,
			  "ATSPI_ROLE_CAPTION",
			  "caption" },
			{ ATSPI_ROLE_DOCUMENT_FRAME,
			  "ATSPI_ROLE_DOCUMENT_FRAME",
			  "document-frame" },
			{ ATSPI_ROLE_HEADING,
			  "ATSPI_ROLE_HEADING",
			  "heading" },
			{ ATSPI_ROLE_PAGE,
			  "ATSPI_ROLE_PAGE",
			  "page" },
			{ ATSPI_ROLE_SECTION,
			  "ATSPI_ROLE_SECTION",
			  "section" },
			{ ATSPI_ROLE_REDUNDANT_OBJECT,
			  "ATSPI_ROLE_REDUNDANT_OBJECT",
			  "redundant-object" },
			{ ATSPI_ROLE_FORM,
			  "ATSPI_ROLE_FORM",
			  "form" },
			{ ATSPI_ROLE_LINK,
			  "ATSPI_ROLE_LINK",
			  "link" },
			{ ATSPI_ROLE_INPUT_METHOD_WINDOW,
			  "ATSPI_ROLE_INPUT_METHOD_WINDOW",
			  "input-method-window" },
			{ ATSPI_ROLE_TABLE_ROW,
			  "ATSPI_ROLE_TABLE_ROW",
			  "table-row" },
			{ ATSPI_ROLE_TREE_ITEM,
			  "ATSPI_ROLE_TREE_ITEM",
			  "tree-item" },
			{ ATSPI_ROLE_DOCUMENT_SPREADSHEET,
			  "ATSPI_ROLE_DOCUMENT_SPREADSHEET",
			  "document-spreadsheet" },
			{ ATSPI_ROLE_DOCUMENT_PRESENTATION,
			  "ATSPI_ROLE_DOCUMENT_PRESENTATION",
			  "document-presentation" },
			{ ATSPI_ROLE_DOCUMENT_TEXT,
			  "ATSPI_ROLE_DOCUMENT_TEXT",
			  "document-text" },
			{ ATSPI_ROLE_DOCUMENT_WEB,
			  "ATSPI_ROLE_DOCUMENT_WEB",
			  "document-web" },
			{ ATSPI_ROLE_DOCUMENT_EMAIL,
			  "ATSPI_ROLE_DOCUMENT_EMAIL",
			  "document-email" },
			{ ATSPI_ROLE_COMMENT,
			  "ATSPI_ROLE_COMMENT",
			  "comment" },
			{ ATSPI_ROLE_LIST_BOX,
			  "ATSPI_ROLE_LIST_BOX",
			  "list-box" },
			{ ATSPI_ROLE_GROUPING,
			  "ATSPI_ROLE_GROUPING",
			  "grouping" },
			{ ATSPI_ROLE_IMAGE_MAP,
			  "ATSPI_ROLE_IMAGE_MAP",
			  "image-map" },
			{ ATSPI_ROLE_NOTIFICATION,
			  "ATSPI_ROLE_NOTIFICATION",
			  "notification" },
			{ ATSPI_ROLE_INFO_BAR,
			  "ATSPI_ROLE_INFO_BAR",
			  "info-bar" },
			{ ATSPI_ROLE_LEVEL_BAR,
			  "ATSPI_ROLE_LEVEL_BAR",
			  "level-bar" },
			{ ATSPI_ROLE_TITLE_BAR,
			  "ATSPI_ROLE_TITLE_BAR",
			  "title-bar" },
			{ ATSPI_ROLE_BLOCK_QUOTE,
			  "ATSPI_ROLE_BLOCK_QUOTE",
			  "block-quote" },
			{ ATSPI_ROLE_AUDIO,
			  "ATSPI_ROLE_AUDIO",
			  "audio" },
			{ ATSPI_ROLE_VIDEO,
			  "ATSPI_ROLE_VIDEO",
			  "video" },
			{ ATSPI_ROLE_DEFINITION,
			  "ATSPI_ROLE_DEFINITION",
			  "definition" },
			{ ATSPI_ROLE_ARTICLE,
			  "ATSPI_ROLE_ARTICLE",
			  "article" },
			{ ATSPI_ROLE_LANDMARK,
			  "ATSPI_ROLE_LANDMARK",
			  "landmark" },
			{ ATSPI_ROLE_LOG,
			  "ATSPI_ROLE_LOG",
			  "log" },
			{ ATSPI_ROLE_MARQUEE,
			  "ATSPI_ROLE_MARQUEE",
			  "marquee" },
			{ ATSPI_ROLE_MATH,
			  "ATSPI_ROLE_MATH",
			  "math" },
			{ ATSPI_ROLE_RATING,
			  "ATSPI_ROLE_RATING",
			  "rating" },
			{ ATSPI_ROLE_TIMER,
			  "ATSPI_ROLE_TIMER",
			  "timer" },
			{ ATSPI_ROLE_STATIC,
			  "ATSPI_ROLE_STATIC",
			  "static" },
			{ ATSPI_ROLE_MATH_FRACTION,
			  "ATSPI_ROLE_MATH_FRACTION",
			  "math-fraction" },
			{ ATSPI_ROLE_MATH_ROOT,
			  "ATSPI_ROLE_MATH_ROOT",
			  "math-root" },
			{ ATSPI_ROLE_SUBSCRIPT,
			  "ATSPI_ROLE_SUBSCRIPT",
			  "subscript" },
			{ ATSPI_ROLE_SUPERSCRIPT,
			  "ATSPI_ROLE_SUPERSCRIPT",
			  "superscript" },
			{ ATSPI_ROLE_LAST_DEFINED,
			  "ATSPI_ROLE_LAST_DEFINED",
			  "last-defined" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("AtspiRole"),
				values);
	}
	return the_type;
}

GType
atspi_cache_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GFlagsValue values[] = {
			{ ATSPI_CACHE_NONE,
			  "ATSPI_CACHE_NONE",
			  "none" },
			{ ATSPI_CACHE_PARENT,
			  "ATSPI_CACHE_PARENT",
			  "parent" },
			{ ATSPI_CACHE_CHILDREN,
			  "ATSPI_CACHE_CHILDREN",
			  "children" },
			{ ATSPI_CACHE_NAME,
			  "ATSPI_CACHE_NAME",
			  "name" },
			{ ATSPI_CACHE_DESCRIPTION,
			  "ATSPI_CACHE_DESCRIPTION",
			  "description" },
			{ ATSPI_CACHE_STATES,
			  "ATSPI_CACHE_STATES",
			  "states" },
			{ ATSPI_CACHE_ROLE,
			  "ATSPI_CACHE_ROLE",
			  "role" },
			{ ATSPI_CACHE_INTERFACES,
			  "ATSPI_CACHE_INTERFACES",
			  "interfaces" },
			{ ATSPI_CACHE_ATTRIBUTES,
			  "ATSPI_CACHE_ATTRIBUTES",
			  "attributes" },
			{ ATSPI_CACHE_ALL,
			  "ATSPI_CACHE_ALL",
			  "all" },
			{ ATSPI_CACHE_DEFAULT,
			  "ATSPI_CACHE_DEFAULT",
			  "default" },
			{ ATSPI_CACHE_UNDEFINED,
			  "ATSPI_CACHE_UNDEFINED",
			  "undefined" },
			{ 0, NULL, NULL }
		};
		the_type = g_flags_register_static (
				g_intern_static_string ("AtspiCache"),
				values);
	}
	return the_type;
}

/* enumerations from "atspi-types.h" */
#include "atspi-types.h"

GType
atspi_key_listener_sync_type_get_type (void)
{
	static GType the_type = 0;
	
	if (the_type == 0)
	{
		static const GFlagsValue values[] = {
			{ ATSPI_KEYLISTENER_NOSYNC,
			  "ATSPI_KEYLISTENER_NOSYNC",
			  "nosync" },
			{ ATSPI_KEYLISTENER_SYNCHRONOUS,
			  "ATSPI_KEYLISTENER_SYNCHRONOUS",
			  "synchronous" },
			{ ATSPI_KEYLISTENER_CANCONSUME,
			  "ATSPI_KEYLISTENER_CANCONSUME",
			  "canconsume" },
			{ ATSPI_KEYLISTENER_ALL_WINDOWS,
			  "ATSPI_KEYLISTENER_ALL_WINDOWS",
			  "all-windows" },
			{ 0, NULL, NULL }
		};
		the_type = g_flags_register_static (
				g_intern_static_string ("AtspiKeyListenerSyncType"),
				values);
	}
	return the_type;
}


/* Generated data ends here */

