// rea decompile_all
// name: FUN_00697900
// address: 0x697900
// body: available
// range: 0x697900-0x697a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00697900(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00721f77;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = (void *)0x0;
  uStack_20 = 0;
  iStack_1c = 0;
  puStack_18 = (undefined4 *)0x0;
  local_8 = 0;
  (**(code **)(*in_ECX + 0xb4))(&local_24,param_1,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar8 = 0;
  iVar7 = iStack_1c + -1;
  if (-1 < iVar7) {
    do {
      iVar6 = iVar8 + 1;
      if (*(char *)(*(int *)((int)local_24 + iVar7 * 4) + 0x26) != '\0') {
        iVar6 = iVar8;
      }
      iVar7 = iVar7 + -1;
      iVar8 = iVar6;
    } while (-1 < iVar7);
    if (0 < iVar6) {
      iVar8 = FUN_006e9580();
      if (iVar8 == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)FUN_004b0700(iVar8);
      }
      puVar2 = puStack_18;
      if (puStack_18 != puVar3) {
        if (puVar3 != (undefined4 *)0x0) {
          LOCK();
          puVar3[1] = puVar3[1] + 1;
          UNLOCK();
        }
        puVar2 = puVar3;
        if (puStack_18 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = puStack_18 + 1;
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            puVar2 = (undefined4 *)*puStack_18;
            puStack_18 = puVar3;
            (*(code *)*puVar2)(1);
            puVar2 = puStack_18;
          }
        }
      }
      puStack_18 = puVar2;
      uVar4 = FUN_004b1f20(param_1);
      uVar5 = FUN_006d1110();
      FUN_006a0120(uVar5,uVar4,0);
    }
  }
  if (puStack_18 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puStack_18 + 1;
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*puStack_18)(1);
    }
  }
  FUN_004b00e0();
  FID_conflict__free(local_24);
  ExceptionList = local_10;
  return;
}

