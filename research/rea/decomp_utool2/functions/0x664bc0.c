// rea decompile_all
// name: FUN_00664bc0
// address: 0x664bc0
// body: available
// range: 0x664bc0-0x664c74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00664bc0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)param_1[6];
  iVar6 = puVar2[1];
  pbVar4 = (byte *)*puVar2;
  if (iVar6 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar4 = (byte *)*puVar2;
    iVar6 = puVar2[1];
  }
  bVar1 = *pbVar4;
  pbVar4 = pbVar4 + 1;
  iVar6 = iVar6 + -1;
  if (iVar6 == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') {
      return 0;
    }
    pbVar4 = (byte *)*puVar2;
    iVar6 = puVar2[1];
  }
  iVar5 = (uint)*pbVar4 + (uint)bVar1 * 0x100 + -2;
  *(undefined4 *)(*param_1 + 0x14) = 0x5b;
  *(int *)(*param_1 + 0x18) = param_1[0x5f];
  *(int *)(*param_1 + 0x1c) = iVar5;
  (**(code **)(*param_1 + 4))(param_1,1);
  *puVar2 = pbVar4 + 1;
  puVar2[1] = iVar6 + -1;
  if (0 < iVar5) {
    (**(code **)(param_1[6] + 0x10))(param_1,iVar5);
  }
  return 1;
}

