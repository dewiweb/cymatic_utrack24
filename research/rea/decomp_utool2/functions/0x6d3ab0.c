// rea decompile_all
// name: FUN_006d3ab0
// address: 0x6d3ab0
// body: available
// range: 0x6d3ab0-0x6d3eb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006d3b38) */
/* WARNING: Removing unreachable block (ram,0x006d3b6d) */

undefined4 FUN_006d3ab0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  bool bVar6;
  int local_70;
  int local_6c;
  void *local_48;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00727190;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00635720(*param_1);
  for (iVar5 = -1; -1 < iVar5; iVar5 = iVar5 + -1) {
    FUN_00629eb0();
  }
  FUN_0062c6c0();
  FUN_0044ec90();
  iVar5 = FUN_0045e120();
  bVar6 = iVar5 == 0;
  if (bVar6 == 0xfffffffc) {
    iVar5 = FID_conflict__atoi(PTR_DAT_00c7ed68);
    iVar2 = FID_conflict__atoi(PTR_DAT_00c7ed68);
    FID_conflict__atoi(PTR_DAT_00c7ed68);
    FID_conflict__atoi(PTR_DAT_00c7ed68);
    if ((0 < iVar2) && (0 < iVar5)) {
      if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_006d1d80();
        if (piVar3 != (int *)0x0) {
          if ((undefined **)*piVar3 != juce::HWNDComponentPeer::vftable) {
            (*(code *)((undefined **)*piVar3)[0x13])();
          }
          FUN_004af390();
        }
      }
      if (DAT_00c8a67c == 0) {
        operator_new(0xd0);
        local_8._0_1_ = 1;
        DAT_00c8a67c = FUN_006cb960();
        local_8 = (uint)local_8._1_3_ << 8;
      }
      FUN_006cab60();
      FUN_0046f070();
      FUN_0046ef00();
      if (local_6c * local_70 < 0x400) {
        FUN_006cac60();
      }
      FID_conflict__free(local_48);
      if (piVar3 != (int *)0x0) {
        if ((undefined **)*piVar3 != juce::HWNDComponentPeer::vftable) {
          (*(code *)((undefined **)*piVar3)[0x13])();
        }
        piVar4 = (int *)FUN_004107c0();
        iVar5 = piVar4[1];
        iVar2 = piVar4[2];
        iVar1 = piVar4[3];
        piVar3[3] = *piVar4;
        piVar3[4] = iVar5;
        piVar3[5] = iVar2;
        piVar3[6] = iVar1;
      }
      FUN_0068b060();
      if (bVar6) {
        FUN_0068b600();
      }
      FUN_0068b2a0();
      if (!bVar6) {
        FUN_0068b600();
      }
      FUN_0040f7f0();
      FID_conflict__free((void *)0x0);
      ExceptionList = local_10;
      return 1;
    }
  }
  FUN_0040f7f0();
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return 0;
}

