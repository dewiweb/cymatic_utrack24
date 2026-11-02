// rea decompile_all
// name: _AfxDispatchCmdMsg
// address: 0x1000dc9c
// body: available
// range: 0x1000dc9c-0x1000dda2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000dca8 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall _AfxDispatchCmdMsg(class CCmdTarget *,unsigned int,int,void (__thiscall
   CCmdTarget::*)(void),void *,unsigned int,struct AFX_CMDHANDLERINFO *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int _AfxDispatchCmdMsg(CCmdTarget *param_1,uint param_2,int param_3,_func_void *param_4,
                      void *param_5,uint param_6,AFX_CMDHANDLERINFO *param_7)

{
  uint uVar1;
  
  if (param_1 == (CCmdTarget *)0x0) {
LAB_1000dca8:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  uVar1 = 1;
  if (param_7 != (AFX_CMDHANDLERINFO *)0x0) {
    *(CCmdTarget **)param_7 = param_1;
    *(_func_void **)(param_7 + 4) = param_4;
    return 1;
  }
  switch(param_6) {
  case 0x39:
    (*param_4)();
    break;
  case 0x3a:
    uVar1 = (*param_4)();
    break;
  case 0x3b:
    param_5 = (void *)param_2;
    goto LAB_1000dcf1;
  case 0x3c:
    param_5 = (void *)param_2;
    goto LAB_1000dd92;
  case 0x3d:
    if (param_5 == (void *)0x0) goto LAB_1000dca8;
    (*param_4)(*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x3e:
    if (param_5 == (void *)0x0) goto LAB_1000dca8;
    uVar1 = (*param_4)(*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x3f:
    if (param_5 == (void *)0x0) goto LAB_1000dca8;
    (*param_4)(param_2,*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x40:
    if (param_5 == (void *)0x0) goto LAB_1000dca8;
    uVar1 = (*param_4)(param_2,*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x41:
    if (param_5 == (void *)0x0) goto LAB_1000dca8;
    (*param_4)(param_5);
    goto LAB_1000dd65;
  case 0x42:
    if (param_5 == (void *)0x0) goto LAB_1000dca8;
    (*param_4)(param_5,param_2);
LAB_1000dd65:
    uVar1 = (uint)(*(int *)((int)param_5 + 0x1c) == 0);
    *(undefined4 *)((int)param_5 + 0x1c) = 0;
    break;
  case 0x43:
LAB_1000dcf1:
    (*param_4)(param_5);
    break;
  case 0x44:
LAB_1000dd92:
    uVar1 = (*param_4)(param_5);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}

