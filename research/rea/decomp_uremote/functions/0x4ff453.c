// rea decompile_all
// name: FUN_004ff453
// address: 0x4ff453
// body: available
// range: 0x4ff453-0x4ff4dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ff453(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int local_10;
  int local_8;
  
  FUN_004a6644(param_4 * in_EAX);
  if (0 < in_EAX) {
    pbVar3 = (byte *)(param_2 + 1);
    iVar2 = (in_EAX * 4 + -4) * param_4;
    local_10 = in_EAX;
    do {
      iVar1 = *param_1;
      local_8 = 0;
      pbVar4 = pbVar3;
      if (0 < param_4) {
        do {
          *(uint *)(iVar1 + iVar2 + local_8 * 4) =
               ((pbVar4[1] | 0xffffff00) << 8 | (uint)*pbVar4) << 8 | (uint)pbVar4[-1];
          local_8 = local_8 + 1;
          pbVar4 = pbVar4 + 3;
        } while (local_8 < param_4);
      }
      pbVar3 = pbVar3 + param_3;
      iVar2 = iVar2 + param_4 * -4;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

