// rea decompile_all
// name: FUN_00670980
// address: 0x670980
// body: available
// range: 0x670980-0x6709f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00670980(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  param_5 = param_5 + -1;
  iVar3 = *(int *)(param_1 + 0x24);
  if (-1 < param_5) {
    param_4 = param_4 * 4;
    do {
      puVar6 = (undefined1 *)*param_2;
      param_2 = param_2 + 1;
      iVar4 = *(int *)(param_4 + *param_3);
      param_4 = param_4 + 4;
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + iVar3;
          *(undefined1 *)(uVar5 + iVar4) = uVar1;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

