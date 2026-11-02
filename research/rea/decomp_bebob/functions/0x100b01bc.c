// rea decompile_all
// name: CMFCRibbonGallery::OnAfterChangeRect
// address: 0x100b01bc
// body: available
// range: 0x100b01bc-0x100b03aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b0382 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonGallery::OnAfterChangeRect(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonGallery::OnAfterChangeRect(CMFCRibbonGallery *this,CDC *param_1)

{
  int iVar1;
  int iVar2;
  CObject *pCVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  FUN_100ba72c((int *)this);
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  (**(code **)(*(int *)this + 0x1e4))(&local_38);
  if (((local_38 == 0) || (local_34 == 0)) || (iVar1 = IsButtonLook(this), iVar1 != 0)) {
    *(undefined4 *)(this + 0x2c4) = 0;
    *(undefined4 *)(this + 0x2cc) = 0;
    FUN_100af9b1((int *)this);
  }
  else {
    local_2c = (**(code **)(*(int *)this + 0x1a0))();
    local_28.left = *(LONG *)(this + 0x18);
    local_28.top = *(LONG *)(this + 0x1c);
    local_28.right = *(LONG *)(this + 0x20);
    local_28.bottom = *(LONG *)(this + 0x24);
    local_2c = local_2c + 6;
    uVar6 = -(uint)(*(int *)(this + 0x2ec) != 0) & 0xfffffffc;
    InflateRect(&local_28,0,-(uVar6 + 4));
    local_28.right = local_28.right - local_2c;
    iVar1 = uVar6 * 2 + 8;
    iVar2 = (local_28.right - local_28.left) / (iVar1 + local_38);
    *(int *)(this + 0x2c4) = iVar2;
    iVar1 = (local_28.bottom - local_28.top) / (iVar1 + local_34);
    *(int *)(this + 0x2cc) = iVar1;
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x2d4) = 0;
    }
    else {
      iVar1 = *(int *)(this + 0x2e0) / iVar2 - iVar1;
      *(int *)(this + 0x2d4) = iVar1;
      if (*(int *)(this + 0x2e0) % iVar2 != 0) {
        *(int *)(this + 0x2d4) = iVar1 + 1;
      }
    }
    FUN_100af9b1((int *)this);
    local_18.left = *(LONG *)(this + 0x18);
    local_18.top = *(LONG *)(this + 0x1c);
    local_18.right = *(LONG *)(this + 0x20);
    local_18.bottom = *(LONG *)(this + 0x24);
    InflateRect(&local_18,-1,-3);
    iVar1 = local_18.bottom - local_18.top;
    local_30 = local_18.top;
    iVar2 = local_18.right + -2;
    iVar4 = iVar2 - local_2c;
    local_2c = 0;
    local_18.right = iVar2;
    if (0 < *(int *)(this + 0x16c)) {
      do {
        iVar7 = local_2c;
        if ((local_2c < 0) || (*(int *)(this + 0x16c) <= local_2c)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_10132734,
                                    *(CObject **)(*(int *)(this + 0x168) + local_2c * 4));
        if ((pCVar3 != (CObject *)0x0) && (*(int *)(pCVar3 + 0x168) < 0)) {
          iVar5 = iVar1 / 3 + local_30;
          if (iVar7 == *(int *)(this + 0x16c) + -1) {
            iVar5 = local_18.bottom;
          }
          *(int *)(pCVar3 + 0x18) = iVar4;
          *(int *)(pCVar3 + 0x1c) = local_30;
          *(int *)(pCVar3 + 0x20) = iVar2;
          *(int *)(pCVar3 + 0x24) = iVar5;
          iVar7 = local_2c;
          local_30 = iVar5;
        }
        local_2c = iVar7 + 1;
      } while (local_2c < *(int *)(this + 0x16c));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

