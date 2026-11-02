// rea decompile_all
// name: FUN_0066a850
// address: 0x66a850
// body: available
// range: 0x66a850-0x66a907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066a850(uint param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  int local_10;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  FUN_0066ac00(*(undefined4 *)(param_1 + 0x1c),iVar2 << 4);
  local_10 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      param_1 = 1;
      pbVar3 = (byte *)*param_3;
      puVar4 = *(undefined1 **)(param_4 + local_10 * 4);
      pbVar5 = (byte *)param_3[1];
      for (iVar1 = iVar2 << 3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = (char)((int)((uint)*pbVar3 + *pbVar5 + param_1 + (uint)pbVar5[1] + (uint)pbVar3[1]
                              ) >> 2);
        param_1 = param_1 ^ 3;
        pbVar3 = pbVar3 + 2;
        puVar4 = puVar4 + 1;
        pbVar5 = pbVar5 + 2;
      }
      param_3 = param_3 + 2;
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_2 + 0xc));
  }
  return;
}

