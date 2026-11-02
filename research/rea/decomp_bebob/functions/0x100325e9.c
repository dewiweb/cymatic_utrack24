// rea decompile_all
// name: CMFCVisualManager::OnDrawSpinButtons
// address: 0x100325e9
// body: available
// range: 0x100325e9-0x100327b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawSpinButtons(class CDC *,class
   CRect,int,int,class CMFCSpinButtonCtrl *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawSpinButtons
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          uint param_7,int param_8)

{
  LONG *pLVar1;
  int iVar2;
  IMAGES_IDS *pIVar3;
  tagRECT *ptVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_64;
  undefined4 local_60;
  CDrawingManager local_5c [4];
  IMAGE_STATE local_58;
  CDrawingManager local_54 [4];
  int local_50;
  CDC *local_4c;
  int local_48;
  tagRECT local_44;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  IMAGES_IDS local_24 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x100325f5;
  local_50 = param_8;
  local_4c = param_1;
  InflateRect((LPRECT)&param_3,-1,-1);
  iVar2 = 1;
  pLVar1 = &local_44.right;
  do {
    ((tagRECT *)(pLVar1 + -2))->left = 0;
    pLVar1[-1] = 0;
    *pLVar1 = 0;
    pLVar1[1] = 0;
    pLVar1 = pLVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  local_34 = param_3;
  local_30 = param_4;
  iStack_2c = param_5;
  iStack_28 = param_6;
  local_44.left = param_3;
  local_44.top = param_4;
  local_44.right = param_5;
  local_44.bottom = param_6;
  if (local_50 == 0) {
    local_44.bottom = param_6 - (param_6 - param_4) / 2;
    local_30 = local_44.bottom + 1;
  }
  else {
    local_44.right = param_5 - (param_5 - param_3) / 2;
    local_34 = local_44.right + 1;
  }
  if (DAT_1016891c == 0) {
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,DAT_10166b6c);
    CDC::Draw3dRect(param_1,(tagRECT *)&param_3,DAT_10166af4,DAT_10166af4);
  }
  else {
    CDrawingManager::CDrawingManager(local_5c,param_1);
    local_8 = 0;
    CDrawingManager::DrawRect(local_5c,(CRect *)&param_3,DAT_10166aec,DAT_10166af4);
    local_8 = 0xffffffff;
    FUN_1009c588((undefined4 *)local_5c);
  }
  iVar2 = (param_7 & 3) - 1;
  local_58 = (IMAGE_STATE)((param_7 & 0x10) != 0);
  local_24[1] = 0;
  local_48 = 0;
  local_24[0] = 7;
  local_24[2] = 9;
  local_24[3] = 1;
  ptVar4 = &local_44;
  pIVar3 = local_24 + (uint)(local_50 != 0) * 2;
  do {
    if (DAT_1016891c == 0) {
      uVar5 = DAT_10166af4;
      uVar6 = DAT_10166af0;
      if (iVar2 == local_48) {
        uVar5 = DAT_10166af0;
        uVar6 = DAT_10166af4;
      }
      CDC::Draw3dRect(local_4c,ptVar4,uVar5,uVar6);
    }
    else {
      CDrawingManager::CDrawingManager(local_54,local_4c);
      local_8 = 1;
      uVar5 = DAT_10166af4;
      if (iVar2 == local_48) {
        uVar5 = DAT_10166af0;
      }
      CDrawingManager::DrawRect(local_54,(CRect *)ptVar4,0xffffffff,uVar5);
      local_8 = 0xffffffff;
      FUN_1009c588((undefined4 *)local_54);
    }
    local_64 = 0;
    local_60 = 0;
    CMenuImages::Draw(local_4c,*pIVar3,(CRect *)ptVar4,local_58,(CSize *)&local_64);
    local_48 = local_48 + 1;
    pIVar3 = pIVar3 + 1;
    ptVar4 = ptVar4 + 1;
  } while (local_48 < 2);
  FUN_100f90cf();
  return;
}

