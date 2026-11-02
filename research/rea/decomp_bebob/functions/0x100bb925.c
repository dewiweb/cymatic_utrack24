// rea decompile_all
// name: FUN_100bb925
// address: 0x100bb925
// body: available
// range: 0x100bb925-0x100bbb09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bbb05 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100bb925(void *this,CMFCRibbonBaseElement *param_1)

{
  undefined4 *puVar1;
  CRuntimeClass *this_00;
  CObject *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(int *)((int)this + 0x10c) != 0) && (*(HMENU *)((int)this + 0xf8) != (HMENU)0x0)) {
    DestroyMenu(*(HMENU *)((int)this + 0xf8));
  }
  if (*(int *)((int)this + 0x11c) != 0) {
    if (*(HICON *)((int)this + 0xfc) != (HICON)0x0) {
      DestroyIcon(*(HICON *)((int)this + 0xfc));
    }
    if ((*(int *)((int)this + 0x11c) != 0) && (*(HICON *)((int)this + 0x100) != (HICON)0x0)) {
      DestroyIcon(*(HICON *)((int)this + 0x100));
    }
  }
  FUN_100bb383((int)this);
  CMFCRibbonBaseElement::CopyFrom(this,param_1);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)((int)this + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  if (0 < *(int *)(param_1 + 0x158)) {
    do {
      if ((iVar3 < 0) || (*(int *)(param_1 + 0x158) <= iVar3)) goto LAB_100bbb05;
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x154) + iVar3 * 4);
      this_00 = (CRuntimeClass *)(**(code **)*puVar1)();
      pCVar2 = CRuntimeClass::CreateObject(this_00);
      (**(code **)(*(int *)pCVar2 + 200))(puVar1);
      CArray<int,int>::SetAtGrow
                ((CArray<int,int> *)((int)this + 0x150),*(int *)((int)this + 0x158),(int)pCVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x158));
  }
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  CArray<int,int>::SetSize((CArray<int,int> *)((int)this + 0x13c),0,-1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x144)) {
    do {
      if ((iVar3 < 0) || (*(int *)(param_1 + 0x144) <= iVar3)) {
LAB_100bbb05:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      CArray<int,int>::SetAtGrow
                ((CArray<int,int> *)((int)this + 0x13c),*(int *)((int)this + 0x144),
                 *(int *)(*(int *)(param_1 + 0x140) + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x144));
  }
  return;
}

