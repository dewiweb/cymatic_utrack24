// rea decompile_all
// name: COleDropTarget::XDropTarget::DragOver
// address: 0x100e2fa4
// body: available
// range: 0x100e2fa4-0x100e3080 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall COleDropTarget::XDropTarget::DragOver(unsigned long,struct
   _POINTL,unsigned long *)
   
   Library: Visual Studio 2010 Release */

long COleDropTarget::XDropTarget::DragOver(ulong param_1,_POINTL param_2,ulong *param_3)

{
  CWnd *pCVar1;
  ulong uVar2;
  ulong *extraout_EDX;
  ulong *in_stack_00000014;
  COleDataObject local_38 [16];
  AFX_MAINTAIN_STATE2 local_28 [8];
  tagPOINT local_20 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100e2fb0;
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(local_28,*(AFX_MODULE_STATE **)(param_1 - 0x18));
  if (in_stack_00000014 == (ulong *)0x0) {
    param_1 = 0x80070057;
  }
  else {
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    pCVar1 = CWnd::FromHandle(*(HWND__ **)(param_1 - 0x14));
    local_20[0].x = param_2.y;
    local_20[0].y = (LONG)param_3;
    ScreenToClient(*(HWND *)(pCVar1 + 0x20),local_20);
    uVar2 = (**(code **)(*(int *)(param_1 - 0x34) + 0x68))
                      (pCVar1,param_2.x,local_20[0].x,local_20[0].y);
    if (-1 < (int)uVar2) {
      COleDataObject::COleDataObject(local_38);
      local_8._0_1_ = 2;
      COleDataObject::Attach(local_38,*(IDataObject **)(param_1 - 0x10),0);
      uVar2 = (**(code **)(*(int *)(param_1 - 0x34) + 0x58))
                        (pCVar1,local_38,param_2.x,local_20[0].x,local_20[0].y);
      local_8._0_1_ = 1;
      COleDataObject::Release(local_38);
    }
    uVar2 = _AfxFilterDropEffect(uVar2,*in_stack_00000014);
    param_1 = 0;
    *extraout_EDX = uVar2;
  }
  local_8 = 0xffffffff;
  FUN_1000a3b1((ULONG_PTR *)local_28);
  return param_1;
}

