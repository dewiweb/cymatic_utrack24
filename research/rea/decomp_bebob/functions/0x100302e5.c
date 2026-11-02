// rea decompile_all
// name: CMFCVisualManager::OnDrawCaptionButton
// address: 0x100302e5
// body: available
// range: 0x100302e5-0x1003041d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawCaptionButton(class CDC *,class
   CMFCCaptionButton *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawCaptionButton
          (CMFCVisualManager *this,CDC *param_1,CMFCCaptionButton *param_2,int param_3,int param_4,
          int param_5,int param_6,int param_7)

{
  CDC *this_00;
  IMAGE_STATE IVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 local_38;
  undefined4 local_34;
  CDC *local_30;
  IMAGES_IDS local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_30 = param_1;
  (**(code **)(*(int *)param_2 + 0xc))(&local_18);
  if (param_7 == -1) {
    param_7 = (**(code **)(*(int *)param_2 + 0x14))(param_4,param_5);
  }
  local_28.left = local_18.left;
  local_28.top = local_18.top;
  local_28.right = local_18.right;
  local_28.bottom = local_18.bottom;
  local_2c = param_7;
  if ((*(int *)(param_2 + 4) != 0) &&
     ((*(int *)(param_2 + 8) != 0 || (*(int *)(param_2 + 0x14) != 0)))) {
    OffsetRect(&local_28,1,1);
  }
  this_00 = local_30;
  if (param_6 == 0) {
    if (*(int *)(param_2 + 0x20) == -1) {
      IVar1 = -(uint)(param_3 != 0) & 3;
    }
    else if ((((byte)param_2[0x20] < 0xc1) || ((byte)param_2[0x21] < 0xc1)) ||
            ((byte)param_2[0x22] < 0xc1)) {
      IVar1 = 0;
    }
    else {
      IVar1 = 3;
    }
  }
  else {
    IVar1 = 1;
  }
  local_38 = 0;
  local_34 = 0;
  CMenuImages::Draw(local_30,local_2c,(CRect *)&local_28,IVar1,(CSize *)&local_38);
  if (param_6 == 0) {
    if ((*(int *)(param_2 + 4) == 0) ||
       ((*(int *)(param_2 + 8) == 0 && (*(int *)(param_2 + 0x14) == 0)))) {
      uVar2 = DAT_10166af4;
      uVar3 = DAT_10166af0;
      if ((*(int *)(param_2 + 8) == 0) &&
         ((*(int *)(param_2 + 4) == 0 && (*(int *)(param_2 + 0x14) == 0)))) goto LAB_1003040d;
    }
    else {
      CDC::Draw3dRect(this_00,&local_18,DAT_10166af8,DAT_10166afc);
      InflateRect(&local_18,-1,-1);
      uVar2 = DAT_10166af8;
      uVar3 = DAT_10166af4;
    }
    CDC::Draw3dRect(this_00,&local_18,uVar2,uVar3);
  }
LAB_1003040d:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

