// rea decompile_all
// name: FUN_0042ef33
// address: 0x42ef33
// body: available
// range: 0x42ef33-0x42efc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042ef33(uint param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_8;
  
  puVar1 = *(uint **)(param_1 + 0x214);
  uVar2 = 6;
  if ((puVar1 != (uint *)0x0) && (puVar1[1] == param_2)) {
    param_1 = 0;
    if (*puVar1 != 0) {
      do {
        uVar4 = 0;
        uVar2 = 0x10000;
        local_8 = 0x10000;
        if (puVar1[1] != 0) {
          do {
            iVar3 = *(int *)(param_3 + uVar4 * 4);
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            if (0x10000 < iVar3) {
              iVar3 = 0x10000;
            }
            if ((param_1 & 1 << ((byte)uVar4 & 0x1f)) == 0) {
              iVar3 = 0x10000 - iVar3;
            }
            uVar2 = thunk_FUN_00401000(local_8,iVar3);
            uVar4 = uVar4 + 1;
            local_8 = uVar2;
          } while (uVar4 < puVar1[1]);
        }
        *(undefined4 *)(puVar1[0x22] + param_1 * 4) = uVar2;
        param_1 = param_1 + 1;
      } while (param_1 < *puVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

