// rea decompile_all
// name: FUN_006708e0
// address: 0x6708e0
// body: available
// range: 0x6708e0-0x670973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006708e0(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int local_c;
  
  param_5 = param_5 + -1;
  uVar2 = *(uint *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x3c);
  if (-1 < param_5) {
    param_4 = param_4 * 4;
    do {
      local_c = 0;
      if (0 < iVar3) {
        do {
          iVar4 = *(int *)(param_4 + *(int *)(param_3 + local_c * 4));
          uVar5 = 0;
          if (uVar2 != 0) {
            puVar6 = (undefined1 *)(*param_2 + local_c);
            do {
              uVar1 = *puVar6;
              puVar6 = puVar6 + iVar3;
              *(undefined1 *)(uVar5 + iVar4) = uVar1;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar2);
          }
          local_c = local_c + 1;
        } while (local_c < iVar3);
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 4;
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

