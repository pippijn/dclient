/* transport.hh
 * This file is part of ndk library
 * Copyright (c) 2003 by Stanislav Ievlev
 *
 * This file is covered by the GNU Library General Public License,
 * which should be included with libndk as the file COPYING.
 */
#pragma once

#include <ndk/events.hh>
#include <ndk/support.hh>

#include <deque>

namespace ndk
{
  typedef functor<void>                 button_command;
  typedef std::deque<button_command>    click_actions;

  struct panel;

  /**
   * event transport subsystem in NDK engine
   * unfortunaly this transport system need to know panel object, because
   * mouse works global over all widgets
   */
  struct engine
  {
    /* hide dangerous operations */
    engine (const engine &) = delete;
    engine &operator = (const engine &) = delete;

  private:
    typedef std::deque<engine *> child_items;

  public:
    enum possible_events
    {
      // system events generated by ndk event engine
      enter_focus,
      leave_focus
    };

    typedef functor<event::result, mouse> mouse_event;
    typedef functor<event::result, keyboard> keyboard_event;
    typedef functor<event::result, event> system_event;

    engine (engine *parent, panel *geometry);  // create parent-child tree structure
    engine ();                                          // empty constructor to the head of object's tree
    ~engine ();


    void update ();
    void process (int ch);
    void in_focus (engine *);
    void switch_to (engine *item);                      // delegate focus to other object

    void set_accept (bool);
    bool accept () const;                               // this widget doesn't accept focus

    void emit (int);                                    // emit system event

    /* run callbacks */
    void rat (const mouse &);
    event::result kbd (const keyboard &);
    event::result system (const event &);

    /* register callbacks */
    void on_mouse (const mouse_event &, bool front = false);            // register mouse event callback
    void on_keyboard (const keyboard_event &, bool front = false);      // register keyboard event callback
    void on_system (const system_event &, bool front = false);          //  register system event callback

  private:
    key readkey (int ch);

    void add_child (engine *item);                      // create Transports tree, add child
    void del_child (engine *item);                      // update Transports tree, remove child from the list

    void process (const keyboard &);                    // default work of switching focus here
    void process (const mouse &);                       // default work of switching focus here
    event::result process_system (const event &);       // default work of passing event between objects here
    void big_switch (engine *item);                     // big focus switching
    engine *current ();                                 // current self-focused subwidget

    std::string esc_;
    engine *parent_;                                    // parent object

  private:
    typedef std::deque<mouse_event> ms_events;
    typedef std::deque<keyboard_event> kbd_events;
    typedef std::deque<system_event> sys_events;

    void find_over (const mouse &ev, child_items *list);
    void find_leafs (child_items *list);
    engine *head ();                                    // return head of the Transport event support tree
    void little_switch (engine *item);                  // simple switch focus to other widget

    void leave_all ();
    void enter_all ();

    /* helpers for algorithms */
    static bool higher (engine *lhs, engine *rhs);

    child_items childs_;
    ms_events mouse_;                                   // mouse event callback
    kbd_events keyboard_;                               // keyboard event callback
    sys_events system_;                                 // registered system event callbacks

    panel *geometry_;                          // geometry for the mouse events
    engine *in_focus_;                                  // are this widget in focus now
    bool accept_;
  };
}
