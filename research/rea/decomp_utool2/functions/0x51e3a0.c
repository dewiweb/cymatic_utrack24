// rea decompile_all
// name: FUN_0051e3a0
// address: 0x51e3a0
// body: available
// range: 0x51e3a0-0x51e57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051e3a0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070a2d3;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar10 = FUN_00413340(&local_18);
  iVar6 = (int)((ulonglong)uVar10 >> 0x20);
  iVar9 = *(int *)uVar10;
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_18 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_18)(1,uVar5);
      iVar6 = local_14;
    }
  }
  if (iVar9 != 0) {
    iVar9 = 0;
    while( true ) {
      uVar10 = FUN_00413340(&local_18);
      iVar6 = (int)((ulonglong)uVar10 >> 0x20);
      iVar2 = *(int *)(*(int *)uVar10 + 0x18);
      if (local_18 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_18 + 1;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*local_18)(1);
          iVar6 = local_14;
        }
      }
      if (iVar2 <= iVar9) break;
      FUN_00413340(&local_1c);
      FUN_00410f30(&local_20,iVar9);
      local_8 = 0;
      if (local_1c != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_1c + 1;
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*local_1c)(1);
        }
      }
      puVar4 = local_20;
      if (local_20[3] == 0) {
        operator_new(0x7c);
        local_8 = CONCAT31(local_8._1_3_,2);
        iVar6 = FUN_006f6dd6(*(undefined4 *)(local_14 + -0x74),0,
                             &juce::TreeView::RTTI_Type_Descriptor,
                             &ProjectExplorer::RTTI_Type_Descriptor,0);
        uVar5 = *(uint *)(iVar6 + 0x15c);
        LOCK();
        puVar4[1] = puVar4[1] + 1;
        UNLOCK();
        uVar7 = FUN_0051f5a0(puVar4,uVar5 >> 5 & 1);
        uVar8 = extraout_ECX_00;
      }
      else {
        operator_new(0x7c);
        local_8 = CONCAT31(local_8._1_3_,1);
        iVar6 = FUN_006f6dd6(*(undefined4 *)(local_14 + -0x74),0,
                             &juce::TreeView::RTTI_Type_Descriptor,
                             &ProjectExplorer::RTTI_Type_Descriptor,0);
        uVar5 = *(uint *)(iVar6 + 0x15c);
        LOCK();
        puVar4[1] = puVar4[1] + 1;
        UNLOCK();
        uVar7 = FUN_0051dd50(puVar4,uVar5 >> 5 & 1);
        uVar8 = extraout_ECX;
      }
      local_8 = local_8 & 0xffffff00;
      FUN_006e0040(uVar7,uVar8);
      local_8 = 0xffffffff;
      piVar1 = puVar4 + 1;
      LOCK();
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*puVar4)(1);
      }
      iVar9 = iVar9 + 1;
    }
  }
  FUN_006f6dd6(*(undefined4 *)(iVar6 + -0x74),0,&juce::TreeView::RTTI_Type_Descriptor,
               &ProjectExplorer::RTTI_Type_Descriptor,0);
  FUN_00518cd0();
  ExceptionList = local_10;
  return;
}

