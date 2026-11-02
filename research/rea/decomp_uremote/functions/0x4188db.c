// rea decompile_all
// name: FUN_004188db
// address: 0x4188db
// body: available
// range: 0x4188db-0x418985 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004188db(int *param_1,int param_2,void *param_3,size_t param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (((param_2 < 0) || (param_1[4] <= param_2)) || ((int)param_4 < 0)) {
    iVar2 = 6;
  }
  else {
    uVar1 = param_1[2];
    if (uVar1 < param_1[1] + param_4) {
      uVar3 = (int)param_3 - *param_1;
      if (((int)uVar3 < 0) || (uVar1 <= uVar3)) {
        uVar3 = 0xffffffff;
      }
      if (uVar1 < param_1[1] + param_4) {
        do {
          uVar1 = (uVar1 >> 2) + 0x400 + uVar1 & 0xfffffc00;
        } while (uVar1 < param_1[1] + param_4);
      }
      iVar2 = FUN_00418884(uVar1);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (-1 < (int)uVar3) {
        param_3 = (void *)(*param_1 + uVar3);
      }
    }
    *(int *)(param_2 * 4 + param_1[6]) = param_1[1] + *param_1;
    *(size_t *)(param_2 * 4 + param_1[7]) = param_4;
    _memcpy((void *)(param_1[1] + *param_1),param_3,param_4);
    param_1[1] = param_1[1] + param_4;
    iVar2 = 0;
  }
  return iVar2;
}

