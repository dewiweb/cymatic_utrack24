// rea decompile_all
// name: FUN_004378be
// address: 0x4378be
// body: available
// range: 0x4378be-0x4379ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004378be(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_c;
  int local_8;
  
  local_8 = FUN_0041106d();
  if (local_8 != 0) {
    return local_8;
  }
  local_8 = FUN_004110b4(&local_c,4);
  if (local_8 != 0) {
    return local_8;
  }
  if (((((char)local_c != '\x1f') || (local_c._1_1_ != -0x75)) || (local_c._2_1_ != '\b')) ||
     ((local_c & 0xe0000000) != 0)) {
    return 3;
  }
  local_8 = FUN_00411095(6);
  if ((local_c & 0x4000000) != 0) {
    uVar1 = FUN_004113d4();
    if (local_8 != 0) {
      return local_8;
    }
    local_8 = FUN_00411095(uVar1);
    if (local_8 != 0) {
      return local_8;
    }
  }
  uVar2 = local_c & 0x8000000;
  do {
    if (uVar2 == 0) {
      uVar2 = local_c & 0x10000000;
      do {
        if (uVar2 == 0) {
          if ((local_c & 0x2000000) == 0) {
            return local_8;
          }
          iVar3 = FUN_00411095(2);
          return iVar3;
        }
        uVar2 = FUN_00411330();
        uVar2 = uVar2 & 0xff;
      } while (local_8 == 0);
      return local_8;
    }
    uVar2 = FUN_00411330();
    uVar2 = uVar2 & 0xff;
  } while (local_8 == 0);
  return local_8;
}

