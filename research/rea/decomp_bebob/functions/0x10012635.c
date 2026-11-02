// rea decompile_all
// name: CWnd::ReflectLastMsg
// address: 0x10012635
// body: available
// range: 0x10012635-0x100126d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: static int __stdcall CWnd::ReflectLastMsg(struct HWND__ *,long *)
   
   Library: Visual Studio 2010 Release */

int CWnd::ReflectLastMsg(HWND__ *param_1,long *param_2)

{
  CHandleMap *pCVar1;
  CWnd *this;
  HWND pHVar2;
  void *pvVar3;
  int iVar4;
  CWnd local_84 [32];
  undefined4 local_64;
  void *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x74;
  local_8 = 0x10012641;
  pCVar1 = afxMapHWND(0);
  if (pCVar1 != (CHandleMap *)0x0) {
    this = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),param_1);
    if (this != (CWnd *)0x0) {
      iVar4 = SendChildNotifyLastMsg(this,param_2);
      return iVar4;
    }
    pHVar2 = GetParent(param_1);
    pvVar3 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),pHVar2);
    if (((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 0x68) != 0)) &&
       (local_18 = CMapPtrToPtr::GetValueAt
                             ((CMapPtrToPtr *)(*(int *)((int)pvVar3 + 0x68) + 0x24),param_1),
       local_18 != (void *)0x0)) {
      CWnd(local_84,param_1);
      local_8 = 0;
      iVar4 = SendChildNotifyLastMsg(local_84,param_2);
      local_64 = 0;
      local_8 = 0xffffffff;
      ~CWnd(local_84);
      return (uint)(iVar4 != 0);
    }
  }
  return 0;
}

