// rea decompile_all
// name: FUN_0062a070
// address: 0x62a070
// body: available
// range: 0x62a070-0x62a1aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0062a070(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  undefined **ppuVar5;
  int *piVar6;
  uint uVar7;
  void *local_28;
  uint local_20;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071dd14;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar7 = 0x62a0a8;
  FUN_0041b050(in_ECX);
  local_8 = 0;
  uVar2 = local_20;
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    if (local_20 <= uVar2) {
      ppuVar5 = &PTR_DAT_00c7ed68;
    }
    else {
      ppuVar5 = (undefined **)((int)local_28 + uVar2 * 4);
    }
    in_ECX = (int *)*ppuVar5;
    uVar7 = 0x62a0e8;
    iVar4 = FUN_0045c230(in_ECX,uVar3);
    if (-1 < iVar4) {
      if (local_20 <= uVar2) {
        ppuVar5 = &PTR_DAT_00c7ed68;
      }
      else {
        ppuVar5 = (undefined **)((int)local_28 + uVar2 * 4);
      }
      in_ECX = (int *)FUN_00620de0(&local_14,ppuVar5);
      uVar7 = uVar2;
      FUN_00459080(uVar2,in_ECX);
      piVar6 = (int *)(local_14 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          uVar7 = 0x62a138;
          FID_conflict__free(piVar6);
          in_ECX = piVar6;
        }
      }
    }
  }
  FUN_00636260(param_1,&DAT_00c00dcc,uVar7,in_ECX);
  iVar4 = 0;
  if (0 < (int)local_20) {
    do {
      piVar6 = (int *)(*(int *)((int)local_28 + iVar4 * 4) + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)local_20);
  }
  FID_conflict__free(local_28);
  ExceptionList = local_10;
  return param_1;
}

