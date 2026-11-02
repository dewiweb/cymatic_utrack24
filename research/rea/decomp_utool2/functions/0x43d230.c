// rea decompile_all
// name: FUN_0043d230
// address: 0x43d230
// body: available
// range: 0x43d230-0x43d2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0043d230(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int *in_ECX;
  int **ppiVar7;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  
  local_c = 0;
  if ((((*in_ECX == 0) && ((short)in_ECX[1] == 0)) && (in_ECX[3] == 0)) &&
     (((short)in_ECX[4] == 0 && (*(short *)((int)in_ECX + 0x12) == 0)))) {
    local_18 = (int *)0x0;
    ppiVar7 = &local_18;
    local_14 = 0;
    bVar6 = true;
    bVar5 = false;
  }
  else {
    local_c = 0x18;
    FID_conflict__free((void *)0x0);
    local_10 = (int *)FUN_004c554b(0x18);
    iVar2 = in_ECX[1];
    iVar3 = in_ECX[2];
    iVar4 = in_ECX[3];
    ppiVar7 = &local_10;
    bVar6 = false;
    bVar5 = true;
    *local_10 = *in_ECX;
    local_10[1] = iVar2;
    local_10[2] = iVar3;
    local_10[3] = iVar4;
    *(undefined8 *)(local_10 + 4) = *(undefined8 *)(in_ECX + 4);
  }
  piVar1 = *ppiVar7;
  *ppiVar7 = (int *)0x0;
  *param_1 = piVar1;
  param_1[1] = ppiVar7[1];
  if (bVar5) {
    FID_conflict__free(local_10);
  }
  if (bVar6) {
    FID_conflict__free(local_18);
  }
  return param_1;
}

