// rea decompile_all
// name: CMFCEditBrowseCtrl::OnDrawBrowseButton
// address: 0x1005040e
// body: available
// range: 0x1005040e-0x100505ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCEditBrowseCtrl::OnDrawBrowseButton(class CDC *,class
   CRect,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCEditBrowseCtrl::OnDrawBrowseButton
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  tagPOINT tVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  undefined4 uVar4;
  LONG LVar5;
  LONG LVar6;
  undefined4 local_28;
  CImageList *local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  if (param_7 == 0) {
    if (param_8 != 0) {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 1;
  }
  local_28 = DAT_10166ac0;
  pCVar2 = CMFCVisualManager::GetInstance();
  iVar3 = (**(code **)(*(int *)pCVar2 + 0x1b8))
                    (param_1,param_3,param_4,param_5,param_6,local_20,uVar4,&local_28);
  if (iVar3 != 0) {
    local_24 = (CImageList *)(local_20 + 0xb0);
    local_1c = 0;
    if ((local_24 == (CImageList *)0x0) || (*(int *)(local_20 + 0xb4) == 0)) {
      if (*(int *)(*(int *)(local_20 + 0xa0) + -0xc) != 0) {
        local_24 = (CImageList *)(**(code **)(*(int *)param_1 + 0x30))(local_28);
        local_1c = CDC::SetBkMode(param_1,1);
        uVar4 = (**(code **)(*(int *)param_1 + 0x24))(0x11);
        local_18.left = param_3;
        local_18.top = param_4;
        local_18.right = param_5;
        local_18.bottom = param_6;
        InflateRect(&local_18,-1,-2);
        OffsetRect(&local_18,0,-2);
        if (param_7 != 0) {
          OffsetRect(&local_18,1,1);
        }
        (**(code **)(*(int *)param_1 + 0x68))
                  (*(int *)(local_20 + 0xa0),*(undefined4 *)(*(int *)(local_20 + 0xa0) + -0xc),
                   &local_18,0x25);
        (**(code **)(*(int *)param_1 + 0x30))(local_24);
        CDC::SetBkMode(param_1,local_1c);
        (**(code **)(*(int *)param_1 + 0x28))(uVar4);
      }
    }
    else {
      if (*(int *)(local_20 + 0x84) != 0) {
        if (*(int *)(local_20 + 0xac) == 2) {
          local_1c = 1;
        }
        else if (*(int *)(local_20 + 0xac) == 3) {
          local_1c = 0;
        }
      }
      LVar5 = (param_3 + param_5) / 2 - *(int *)(local_20 + 0x98) / 2;
      LVar6 = (param_6 + param_4) / 2 - *(int *)(local_20 + 0x9c) / 2;
      if (param_7 != 0) {
        pCVar2 = CMFCVisualManager::GetInstance();
        iVar3 = (**(code **)(*(int *)pCVar2 + 0x2e0))();
        if (iVar3 != 0) {
          LVar5 = LVar5 + 1;
          LVar6 = LVar6 + 1;
        }
      }
      tVar1.y = LVar6;
      tVar1.x = LVar5;
      CImageList::Draw(local_24,param_1,local_1c,tVar1,0);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

