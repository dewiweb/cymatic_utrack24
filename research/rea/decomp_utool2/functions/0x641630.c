// rea decompile_all
// name: FUN_00641630
// address: 0x641630
// body: available
// range: 0x641630-0x64173c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00641630(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *in_ECX;
  byte *pbVar3;
  int in_EDX;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_10;
  uint local_c;
  
  if (0 < param_1) {
    do {
      if (-1 < param_3 + -1) {
        local_10 = param_3 + -1;
        do {
          bVar2 = *in_ECX;
          *in_ECX = (byte)(((uint)bVar2 + in_ECX[1] + 1) / 3);
          pbVar3 = in_ECX + 1;
          iVar4 = in_EDX + -2;
          local_c = (uint)bVar2;
          do {
            uVar5 = (uint)*pbVar3;
            pbVar1 = pbVar3 + 1;
            iVar4 = iVar4 + -1;
            *pbVar3 = (byte)((local_c + 1 + *pbVar1 + uVar5) / 3);
            pbVar3 = pbVar1;
            local_c = uVar5;
          } while (0 < iVar4);
          local_10 = local_10 + -1;
          *pbVar1 = (byte)((*pbVar1 + 1 + uVar5) / 3);
        } while (-1 < local_10);
      }
      in_ECX = in_ECX + param_2;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  iVar6 = 0;
  iVar4 = param_3;
  if (0 < in_EDX) {
    do {
      while (-1 < iVar4 + -1) {
        FUN_00641740(param_2);
        iVar4 = iVar4 + -1;
      }
      iVar6 = iVar6 + 1;
      iVar4 = param_3;
    } while (iVar6 < in_EDX);
  }
  return;
}

