// rea decompile_all
// name: FUN_005e2ec0
// address: 0x5e2ec0
// body: available
// range: 0x5e2ec0-0x5e2f72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_005e2ec0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char *in_EDX;
  char *pcVar7;
  char *pcVar8;
  undefined2 *puVar9;
  undefined4 uStack_1c;
  
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  pcVar7 = in_EDX;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uStack_1c = 0x5e2f04;
  iVar2 = -(int)(pcVar5 + (int)(pcVar7 + ((2 - (int)(in_EDX + 1)) - (int)(param_1 + 1))));
  iVar3 = iVar2 - (int)in_EDX;
  do {
    cVar1 = *in_EDX;
    in_EDX = in_EDX + 1;
    in_EDX[(int)&uStack_1c + iVar3 + 3] = cVar1;
  } while (cVar1 != '\0');
  puVar9 = (undefined2 *)((int)&uStack_1c + iVar2 + 3);
  do {
    pcVar7 = (char *)((int)puVar9 + 1);
    puVar9 = (undefined2 *)((int)puVar9 + 1);
  } while (*pcVar7 != '\0');
  *puVar9 = 0x3d;
  pcVar7 = param_1;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)((int)&uStack_1c + iVar2 + 3);
  do {
    pcVar8 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = param_1;
  for (uVar6 = (uint)((int)pcVar7 - (int)param_1) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = (int)pcVar7 - (int)param_1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)((int)&uStack_1c + iVar2) = 0x5e2f5f;
  FUN_005e2f80();
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}

