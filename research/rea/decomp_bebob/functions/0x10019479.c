// rea decompile_all
// name: CMemDC::CMemDC
// address: 0x10019479
// body: available
// range: 0x10019479-0x100195cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMemDC::CMemDC(class CDC &,class CWnd *)
   
   Library: Visual Studio 2010 Release */

CMemDC * __thiscall CMemDC::CMemDC(CMemDC *this,CDC *param_1,CWnd *param_2)

{
  CMenu *this_00;
  LPRECT lpRect;
  int iVar1;
  undefined4 uVar2;
  HBITMAP pHVar3;
  CGdiObject *pCVar4;
  void *pvVar5;
  
  *(undefined ***)this = vftable;
  *(CDC **)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  FUN_1001714b((undefined4 *)(this + 0x10));
  this_00 = (CMenu *)(this + 0x20);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this_00 = CBitmap::vftable;
  *(undefined4 *)(this + 0x28) = 0;
  lpRect = (LPRECT)(this + 0x2c);
  lpRect->left = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  GetClientRect(*(HWND *)(param_2 + 0x20),lpRect);
  iVar1 = CWnd::GetScrollPos(param_2,0);
  *(int *)(this + 0x34) = *(int *)(this + 0x34) + iVar1;
  iVar1 = CWnd::GetScrollPos(param_2,1);
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + iVar1;
  if ((DAT_10166ca4 == (code *)0x0) || (DAT_10166ca8 == 0)) {
    if (DAT_10160010 != 0) {
      iVar1 = CDC::CreateCompatibleDC((CDC *)(this + 0x10),*(CDC **)(this + 4));
      if (iVar1 != 0) {
        pHVar3 = CreateCompatibleBitmap
                           (*(HDC *)(*(int *)(this + 4) + 4),*(int *)(this + 0x34) - lpRect->left,
                            *(int *)(this + 0x38) - *(int *)(this + 0x30));
        iVar1 = CMenu::Attach(this_00,(HMENU__ *)pHVar3);
        if (iVar1 != 0) {
          *(undefined4 *)(this + 8) = 1;
          pvVar5 = (void *)0x0;
          if (this_00 != (CMenu *)0x0) {
            pvVar5 = *(void **)(this + 0x24);
          }
          pCVar4 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x14),pvVar5);
          *(CGdiObject **)(this + 0x28) = pCVar4;
        }
      }
    }
  }
  else {
    param_2 = (CWnd *)0x0;
    if (((DAT_10166c88 == 0) && (DAT_10166c9c != (code *)0x0)) && (DAT_10166ca0 != 0)) {
      (*DAT_10166c9c)();
      DAT_10166c88 = 1;
    }
    if (param_1 == (CDC *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 4);
    }
    iVar1 = (*DAT_10166ca4)(uVar2,lpRect,2,0,&param_2);
    *(int *)(this + 0xc) = iVar1;
    if ((iVar1 != 0) && (param_2 != (CWnd *)0x0)) {
      *(undefined4 *)(this + 8) = 1;
      CDC::Attach((CDC *)(this + 0x10),(HDC__ *)param_2);
    }
  }
  return this;
}

