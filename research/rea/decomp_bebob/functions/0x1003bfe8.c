// rea decompile_all
// name: CPaneFrameWnd::PreTranslateMessage
// address: 0x1003bfe8
// body: available
// range: 0x1003bfe8-0x1003c089 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneFrameWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPaneFrameWnd::PreTranslateMessage(CPaneFrameWnd *this,tagMSG *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1->message;
  if (uVar1 < 0x105) {
    if ((uVar1 != 0x104) &&
       ((uVar1 < 0xa1 ||
        ((0xa2 < uVar1 &&
         ((uVar1 < 0xa4 ||
          ((0xa5 < uVar1 && ((uVar1 < 0xa7 || ((0xa8 < uVar1 && (uVar1 != 0x100))))))))))))))
    goto LAB_1003c07c;
  }
  else if ((uVar1 < 0x200) ||
          ((0x202 < uVar1 && ((uVar1 < 0x204 || ((0x205 < uVar1 && (1 < uVar1 - 0x207))))))))
  goto LAB_1003c07c;
  iVar2 = *(int *)(this + 0x118);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
    SendMessageW(*(HWND *)(iVar2 + 0x20),0x407,0,(LPARAM)param_1);
  }
LAB_1003c07c:
  iVar2 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  return iVar2;
}

