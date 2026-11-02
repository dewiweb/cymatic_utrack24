// rea decompile_all
// name: FUN_00410ea8
// address: 0x410ea8
// body: available
// range: 0x410ea8-0x410f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00410f67) */

int FUN_00410ea8(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  int local_8;
  
  iVar2 = FUN_0041148f();
  if (local_8 == 0) {
    if (iVar2 == param_1) {
      FUN_0041148f();
      iVar2 = FUN_00411095(0x10);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar1 = FUN_00411377();
      if (uVar1 != 0) {
        local_c = 0;
        if (uVar1 != 0) {
          do {
            iVar2 = FUN_0041148f();
            if (iVar2 == 2) {
              uVar3 = FUN_0041148f();
              FUN_0041148f();
              *param_2 = uVar3;
              return 0;
            }
            iVar2 = FUN_00411095(8);
            if (iVar2 != 0) {
              return iVar2;
            }
            local_c = local_c + 1;
          } while (local_c < (int)(uint)uVar1);
        }
      }
    }
    local_8 = 2;
  }
  return local_8;
}

