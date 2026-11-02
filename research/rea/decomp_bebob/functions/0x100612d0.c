// rea decompile_all
// name: CFrameImpl::OnNcHitTest
// address: 0x100612d0
// body: available
// range: 0x100612d0-0x10061470 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10061454 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: unsigned int __thiscall CFrameImpl::OnNcHitTest(class CPoint)
   
   Library: Visual Studio 2010 Release */

uint __thiscall CFrameImpl::OnNcHitTest(CFrameImpl *this,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  code *pcVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  RECT *lprc;
  uint uVar7;
  HWND__ *pHVar8;
  undefined1 local_38 [16];
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((((*(int *)(this + 0xfc) == 0) ||
       (BVar4 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar4 == 0)) ||
      (*(int *)(*(int *)(this + 0xfc) + 0x314) == 0)) ||
     ((*(int *)(*(int *)(this + 0xfc) + 0x2f4) == 0 ||
      (iVar5 = AFX_GLOBAL_DATA::DwmIsCompositionEnabled((AFX_GLOBAL_DATA *)&DAT_10166aa0),
      iVar5 == 0)))) {
    iVar5 = IsOwnerDrawCaption(this);
    if (iVar5 != 0) {
      ScreenToClient(*(HWND *)(*(int *)(this + 0xb0) + 0x20),(LPPOINT)&param_2);
      pcVar3 = GetSystemMetrics_exref;
      iVar5 = GetSystemMetrics(0x21);
      local_18.bottom = iVar5;
      iVar6 = GetSystemMetrics(0x20);
      BVar4 = IsIconic(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
      if (BVar4 == 0) {
        iVar5 = GetSystemMetrics(4);
        iVar5 = iVar5 + local_18.bottom;
      }
      param_3 = param_3 + iVar5;
      puVar2 = *(undefined4 **)(this + 0x90);
      param_2 = param_2 + iVar6;
      do {
        if (puVar2 == (undefined4 *)0x0) {
          GetCaptionRect(this);
          pt_00.y = param_3;
          pt_00.x = param_2;
          BVar4 = PtInRect(&local_28,pt_00);
          if (BVar4 != 0) {
            local_18.left = local_28.left;
            local_18.top = local_28.top;
            local_18.right = local_28.right;
            local_18.bottom = local_28.bottom;
            iVar5 = (*pcVar3)(4);
            local_18.right = iVar5 + local_18.left + iVar6 * 2;
            pt_01.y = param_3;
            pt_01.x = param_2;
            PtInRect(&local_18,pt_01);
          }
          break;
        }
        if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        puVar1 = puVar2 + 2;
        puVar2 = (undefined4 *)*puVar2;
        local_18.right = param_2;
        local_18.bottom = param_3;
        lprc = (RECT *)(**(code **)(*(int *)*puVar1 + 0xc))(local_38);
        pt.y = local_18.bottom;
        pt.x = local_18.right;
        BVar4 = PtInRect(lprc,pt);
        pcVar3 = GetSystemMetrics_exref;
      } while (BVar4 == 0);
    }
  }
  else {
    if (*(int *)(this + 0xb0) == 0) {
      pHVar8 = (HWND__ *)0x0;
    }
    else {
      pHVar8 = *(HWND__ **)(*(int *)(this + 0xb0) + 0x20);
    }
    AFX_GLOBAL_DATA::DwmDefWindowProc
              ((AFX_GLOBAL_DATA *)&DAT_10166aa0,pHVar8,0x84,0,
               CONCAT22((undefined2)param_3,(undefined2)param_2));
  }
  uVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar7;
}

