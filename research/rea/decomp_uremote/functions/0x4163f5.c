// rea decompile_all
// name: FUN_004163f5
// address: 0x4163f5
// body: available
// range: 0x4163f5-0x416489 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004163f5(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  int local_8;
  
  local_8 = 0;
  if (*(int *)(param_3 + 0x4c) == 0) {
    if (param_1 + 1 <= param_2) {
      uVar4 = *param_1 & 0xf;
      iVar1 = (*param_1 >> 4) + uVar4;
      if (param_1 + 1 + iVar1 * 2 <= param_2) {
        puVar2 = (uint *)FUN_00411976(4,0,&local_8);
        if (local_8 != 0) {
          return local_8;
        }
        *(uint **)(param_3 + 0x4c) = puVar2;
        *(uint **)(param_3 + 0x40) = puVar2 + uVar4;
        for (; iVar1 != 0; iVar1 = iVar1 + -1) {
          pbVar3 = param_1 + 1;
          param_1 = param_1 + 2;
          *puVar2 = (int)(short)((short)(char)*pbVar3 << 8) | (uint)*param_1;
          puVar2 = puVar2 + 1;
        }
        return 0;
      }
    }
    local_8 = 8;
  }
  return local_8;
}

