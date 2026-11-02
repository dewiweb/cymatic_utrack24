// rea decompile_all
// name: FUN_006e8e70
// address: 0x6e8e70
// body: available
// range: 0x6e8e70-0x6e8f7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_006e8e70(undefined1 *param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  piVar1 = (int *)FUN_0048d620();
  piVar5 = *(int **)(in_ECX + 0x58);
  piVar4 = piVar5 + *(int *)(in_ECX + 0x60) * 6;
  if (piVar5 != piVar4) {
    do {
      if (*piVar5 == *piVar1) {
        piVar5 = piVar5 + 2;
        goto LAB_006e8ead;
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != piVar4);
  }
  piVar5 = (int *)0x0;
LAB_006e8ead:
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (piVar5 != (int *)0x0) {
    uVar2 = (**(code **)(*(int *)*piVar5 + 4))(piVar5 + 2);
    param_1[1] = (char)((uint)uVar2 >> 8);
    *param_1 = (char)uVar2;
    param_1[3] = (char)((uint)uVar2 >> 0x18);
    param_1[2] = (char)((uint)uVar2 >> 0x10);
    return param_1;
  }
  if ((param_3 != '\0') && (*(int *)(in_ECX + 0xc) != 0)) {
    if (*(int *)(in_ECX + 0x34) != 0) {
      local_14 = param_2;
      local_10 = 0;
      iVar3 = FUN_004ae580(&local_14);
      if (-1 < iVar3) goto LAB_006e8f5b;
    }
    FUN_006e8e70(param_1,param_2,1);
    return param_1;
  }
LAB_006e8f5b:
  puVar6 = param_1;
  FUN_006e9580(param_1,param_2);
  FUN_006ab460(puVar6,param_2);
  return param_1;
}

