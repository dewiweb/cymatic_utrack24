// rea decompile_all
// name: CMFCPopupMenuBar::FindDropIndex
// address: 0x1009fec7
// body: available
// range: 0x1009fec7-0x1009ffb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009ff5d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCPopupMenuBar::FindDropIndex(class CPoint,class CRect
   &)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCPopupMenuBar::FindDropIndex
          (CMFCPopupMenuBar *this,undefined4 param_2,int param_3,LPRECT param_4)

{
  int iVar1;
  LONG LVar2;
  int iVar3;
  undefined4 *puVar4;
  LPRECT lprc;
  int iVar5;
  int local_8;
  
  lprc = param_4;
  if (*(int *)(this + 0xd00) == 0) {
    GetClientRect(*(HWND *)(this + 0x20),param_4);
    if (*(int *)(this + 0xbd4) == 0) {
      param_4->bottom = param_4->top + 6;
      iVar5 = 0;
    }
    else {
      local_8 = param_3;
      if (param_3 < 0) {
        local_8 = 0;
      }
      puVar4 = *(undefined4 **)(this + 0xbcc);
      param_4 = (LPRECT)0x0;
      while (puVar4 != (undefined4 *)0x0) {
        if (puVar4 == (undefined4 *)0x0) {
LAB_1009ff5d:
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        iVar5 = puVar4[2];
        puVar4 = (undefined4 *)*puVar4;
        if (iVar5 == 0) goto LAB_1009ff5d;
        iVar1 = *(int *)(iVar5 + 0x58);
        LVar2 = *(LONG *)(iVar5 + 0x5c);
        iVar3 = *(int *)(iVar5 + 0x60);
        if (local_8 < iVar1) {
LAB_1009ff83:
          lprc->top = iVar1;
          iVar5 = (int)param_4;
LAB_1009ff89:
          if (iVar5 != -1) goto LAB_1009ff9a;
          break;
        }
        if (local_8 <= iVar3) {
          lprc->left = *(LONG *)(iVar5 + 0x54);
          lprc->top = iVar1;
          lprc->right = LVar2;
          lprc->bottom = iVar3;
          if (local_8 - iVar1 <= iVar3 - local_8) goto LAB_1009ff83;
          lprc->top = lprc->bottom;
          iVar5 = (int)param_4 + 1;
          goto LAB_1009ff89;
        }
        param_4 = (LPRECT)((int)param_4 + 1);
      }
      lprc->top = lprc->bottom + -6;
      iVar5 = (int)param_4;
LAB_1009ff9a:
      lprc->bottom = lprc->top + 6;
      OffsetRect(lprc,0,-3);
    }
  }
  else {
    iVar5 = -1;
  }
  return iVar5;
}

