// rea decompile_all
// name: CMFCVisualManager::OnDrawTabContent
// address: 0x10033c3b
// body: available
// range: 0x10033c3b-0x10033e98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTabContent(class CDC *,class
   CRect,int,int,class CMFCBaseTabCtrl const *,unsigned long)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawTabContent
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          undefined4 param_7,int param_8,int *param_9,int param_10)

{
  tagPOINT tVar1;
  int iVar2;
  undefined **ppuVar3;
  uint uVar4;
  CImageList *this;
  int *piVar5;
  int local_40;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  CDC *local_28;
  int local_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar5 = param_9;
  uStack_4 = 0x44;
  local_8 = 0x10033c47;
  local_34 = param_7;
  local_28 = param_1;
  iVar2 = (**(code **)(*param_9 + 0x280))();
  if ((iVar2 != 0) && (param_8 != 0)) {
    param_5 = piVar5[0x7c];
    (**(code **)(*local_38 + 0x100))
              (local_28,piVar5[0x7c],piVar5[0x7d],piVar5[0x7e],piVar5[0x7f],piVar5,piVar5[0x7a],
               piVar5[0x7b],0);
    param_1 = local_28;
  }
  ppuVar3 = FUN_1000ad47();
  FUN_10005e00(&local_30,(int *)ppuVar3);
  local_8 = 0;
  (**(code **)(*piVar5 + 0x1b8))(local_34,&local_30);
  iVar2 = (**(code **)(*piVar5 + 0x27c))();
  if (iVar2 == 0) {
    (**(code **)(*piVar5 + 0x234))(&local_40);
    local_2c = (**(code **)(*piVar5 + 0x1c0))(local_34);
    iVar2 = (**(code **)(*piVar5 + 0x1d4))(local_34);
    if ((local_2c == -1) && (iVar2 == 0)) {
      local_40 = 0;
    }
    if (param_5 - param_3 < local_40 + DAT_10161744 * 2) goto LAB_10033e86;
    if (iVar2 == 0) {
      this = (CImageList *)(**(code **)(*piVar5 + 0x238))();
      if ((this != (CImageList *)0x0) && (local_2c != -1)) {
        tVar1.y = ((param_6 - param_4) - local_3c) / 2 + param_4;
        tVar1.x = param_3 + 4;
        CImageList::Draw(this,local_28,local_2c,tVar1,1);
      }
    }
    else {
      CDC::DrawState(local_28,param_3 + 4,((param_6 - param_4) - local_3c) / 2 + param_4,local_40,
                     local_3c,iVar2,0,0);
    }
    iStack_20 = param_4;
    local_1c = param_5;
    iStack_18 = param_6;
    local_24 = param_3 + 6 + local_40;
    if ((param_5 - local_24 < local_40 * 2) &&
       (iVar2 = (**(code **)(*piVar5 + 0x28c))(), iVar2 == 0)) {
      local_1c = local_1c + -3;
    }
    iVar2 = param_10;
    if ((param_10 != -1) ||
       (iVar2 = (**(code **)(*local_38 + 0x11c))(piVar5,local_34,param_8), param_1 = local_28,
       iVar2 != -1)) {
      param_1 = local_28;
      (**(code **)(*(int *)local_28 + 0x30))(iVar2);
    }
    uVar4 = 0x8024;
    if (piVar5[0x44] != 0) {
      uVar4 = 0x8824;
    }
    iVar2 = (**(code **)(*piVar5 + 0x284))();
    if ((iVar2 != 0) || (iVar2 = (**(code **)(*piVar5 + 0x288))(), iVar2 != 0)) {
      uVar4 = uVar4 | 1;
    }
    piVar5 = &local_24;
  }
  else {
    uVar4 = 0x25;
    if (piVar5[0x44] != 0) {
      uVar4 = 0x825;
    }
    piVar5 = &param_3;
  }
  (**(code **)(*(int *)param_1 + 0x68))(local_30,*(undefined4 *)(local_30 + -0xc),piVar5,uVar4);
LAB_10033e86:
  FUN_10001030((undefined4 *)(local_30 + -0x10));
  FUN_100f90cf();
  return;
}

