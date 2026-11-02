// rea decompile_all
// name: FUN_006678b0
// address: 0x6678b0
// body: available
// range: 0x6678b0-0x667a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006678b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *local_c;
  
  piVar4 = param_1;
  iVar1 = param_1[0x66];
  if ((((param_1[0x5b] != 0) || (param_1[0x5c] != 0x3f)) || (param_1[0x5d] != 0)) ||
     (param_1[0x5e] != 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x7a;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
  }
  piVar6 = param_1 + 0x49;
  param_1 = (int *)0x0;
  if (0 < *piVar6) {
    local_c = (undefined4 *)(iVar1 + 0x14);
    piVar6 = piVar4 + 0x4a;
    do {
      iVar2 = *(int *)(*piVar6 + 0x14);
      iVar3 = *(int *)(*piVar6 + 0x18);
      FUN_00667550(iVar2,iVar1 + 0x28 + iVar2 * 4);
      FUN_00667550(iVar3,iVar1 + 0x38 + iVar3 * 4);
      param_1 = (int *)((int)param_1 + 1);
      piVar6 = piVar6 + 1;
      *local_c = 0;
      local_c = local_c + 1;
    } while ((int)param_1 < piVar4[0x49]);
  }
  if (0 < piVar4[0x50]) {
    piVar6 = piVar4 + 0x51;
    puVar5 = (undefined1 *)(iVar1 + 0x98);
    puVar7 = (undefined4 *)(iVar1 + 0x70);
    do {
      iVar2 = piVar4[*piVar6 + 0x4a];
      puVar7[-10] = *(undefined4 *)(iVar1 + 0x28 + *(int *)(iVar2 + 0x14) * 4);
      *puVar7 = *(undefined4 *)(iVar1 + 0x38 + *(int *)(iVar2 + 0x18) * 4);
      if (*(char *)(iVar2 + 0x30) == '\0') {
        puVar5[10] = 0;
        *puVar5 = 0;
      }
      else {
        *puVar5 = 1;
        puVar5[10] = 1 < *(int *)(iVar2 + 0x24);
      }
      puVar5 = puVar5 + 1;
      piVar6 = piVar6 + 1;
      puVar7 = puVar7 + 1;
    } while ((int)(puVar5 + (-0x98 - iVar1)) < piVar4[0x50]);
  }
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
  *(int *)(iVar1 + 0x24) = piVar4[0x3f];
  return;
}

