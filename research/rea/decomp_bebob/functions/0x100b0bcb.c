// rea decompile_all
// name: CMFCRibbonGalleryIcon::SetACCData
// address: 0x100b0bcb
// body: available
// range: 0x100b0bcb-0x100b0cfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonGalleryIcon::SetACCData(class CWnd *,class
   CAccessibilityData &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonGalleryIcon::SetACCData
          (CMFCRibbonGalleryIcon *this,CWnd *param_1,CAccessibilityData *param_2)

{
  code *pcVar1;
  CAccessibilityData *this_00;
  int iVar2;
  undefined4 uVar3;
  CAccessibilityData *pCVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  this_00 = param_2;
  uStack_4 = 0;
  local_8 = 0x100b0bd7;
  CMFCRibbonButton::SetACCData((CMFCRibbonButton *)this,param_1,param_2);
  puVar6 = auStack_20;
  iVar2 = *(int *)(this + 0x168);
  if (iVar2 == -3) {
    *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 0x40000000;
    *(undefined4 *)(this_00 + 0x18) = 0x3a;
    FUN_100022b0(this_00 + 0x14,L"Open");
    puVar6 = &stack0xffffffdc;
    iVar2 = (**(code **)(*(int *)this + 0x40))();
    if (iVar2 != 0) {
      *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 8;
      *(wchar_t **)(puVar6 + -4) = L"Close";
      *(undefined4 *)(puVar6 + -8) = 0x100b0c98;
      FUN_100022b0(this_00 + 0x14,*(short **)(puVar6 + -4));
    }
  }
  else if ((iVar2 < -2) || (-1 < iVar2)) {
    *(undefined4 *)(this_00 + 0x1c) = 0x300000;
    puVar6 = &stack0xffffffdc;
    iVar2 = (**(code **)(*(int *)this + 0x2c))();
    if (iVar2 != 0) {
      *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 6;
    }
    pcVar1 = *(code **)(*(int *)this + 0x3c);
    puVar5 = puVar6 + -4;
    *(undefined4 *)(puVar6 + -4) = 0x100b0c17;
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      *(uint *)(this_00 + 0x1c) = *(uint *)(this_00 + 0x1c) | 0x10;
    }
    iVar2 = *(int *)this;
    *(CAccessibilityData ***)(puVar5 + -4) = &param_2;
    pcVar1 = *(code **)(iVar2 + 0x1c);
    puVar7 = puVar5 + -8;
    *(undefined4 *)(puVar5 + -8) = 0x100b0c2a;
    uVar3 = (*pcVar1)();
    *(undefined4 *)(puVar7 + -4) = uVar3;
    local_8 = 1;
    *(undefined4 *)(puVar7 + -8) = 0x100b0c39;
    FUN_10007c90(this_00,*(undefined4 **)(puVar7 + -4));
    local_8 = 0xffffffff;
    pCVar4 = param_2 + -0x10;
    *(undefined4 *)(puVar7 + -4) = 0x100b0c48;
    FUN_10001030((undefined4 *)pCVar4);
    *(wchar_t **)(puVar7 + -4) = L"DoubleClick";
    *(undefined4 *)(this_00 + 0x18) = 0x22;
    *(undefined4 *)(puVar7 + -8) = 0x100b0c5c;
    FUN_100022b0(this_00 + 0x14,*(short **)(puVar7 + -4));
    goto LAB_100b0cf2;
  }
  if (*(int *)(this + 0x168) == -3) {
    if (*(int *)(this + 0x164) != 0) {
      *(undefined4 *)(puVar6 + -4) = *(undefined4 *)(*(int *)(this + 0x164) + 4);
      *(undefined4 *)(puVar6 + -8) = 0x100b0cb7;
      FUN_100022b0(this_00,*(short **)(puVar6 + -4));
    }
  }
  else {
    *(uint *)(puVar6 + -4) = (*(int *)(this + 0x168) != -1) + 0x42db;
    *(undefined4 *)(puVar6 + -8) = 0x100b0ccf;
    FUN_100064e0(this_00,*(uint *)(puVar6 + -4));
  }
  iVar2 = *(int *)this;
  *(CWnd ***)(puVar6 + -4) = &param_1;
  pcVar1 = *(code **)(iVar2 + 0x1c);
  puVar7 = puVar6 + -8;
  *(undefined4 *)(puVar6 + -8) = 0x100b0cda;
  uVar3 = (*pcVar1)();
  local_8 = 0;
  *(undefined4 *)(puVar7 + -4) = uVar3;
  *(undefined4 *)(puVar7 + -8) = 0x100b0ce7;
  FUN_10007c90(this_00 + 4,*(undefined4 **)(puVar7 + -4));
  *(undefined4 *)(puVar7 + -4) = 0x100b0cf2;
  FUN_10001030((undefined4 *)(param_1 + -0x10));
LAB_100b0cf2:
  *(undefined4 *)(puVar7 + -4) = 0x100b0cfa;
  return 1;
}

