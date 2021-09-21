/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Elab.PreDefinition.Basic
namespace Lean
namespace Elab
open Meta

def wfRecursion (preDefs : Array PreDefinition) (terminationBy? : Option Syntax) : TermElabM Bool :=
  throwError "well founded recursion has not been implemented yet"

end Elab
end Lean
