// rea decompile_all
// name: FUN_00670b40
// address: 0x670b40
// body: available
// range: 0x670b40-0x670be4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00670b40(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  param_5 = param_5 + -1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x150) + 8);
  if (-1 < param_5) {
    param_4 = param_4 * 4;
    do {
      iVar3 = *param_2;
      param_2 = param_2 + 1;
      uVar6 = 0;
      iVar4 = *(int *)(param_4 + *param_3);
      param_4 = param_4 + 4;
      if (uVar1 != 0) {
        pbVar5 = (byte *)(iVar3 + 2);
        do {
          *(char *)(uVar6 + iVar4) =
               (char)((uint)(*(int *)(iVar2 + 0x800 + (uint)*pbVar5 * 4) +
                             *(int *)(iVar2 + 0x400 + (uint)pbVar5[-1] * 4) +
                            *(int *)(iVar2 + (uint)pbVar5[-2] * 4)) >> 0x10);
          uVar6 = uVar6 + 1;
          pbVar5 = pbVar5 + 3;
        } while (uVar6 < uVar1);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

