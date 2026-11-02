// rea decompile_all
// name: FUN_0052e4b0
// address: 0x52e4b0
// body: available
// range: 0x52e4b0-0x52e663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0052e4b0(undefined4 param_1,ushort param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 local_20 [8];
  char *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d04f1;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00501870("V?    ");
  local_8 = 1;
  local_18 = (char *)0x0;
  local_11 = '\0';
  if (param_2 < 0x1403) {
    if (param_2 < 0x1101) {
      cVar1 = (char)param_2;
      if (param_2 < 0x100) {
        if (param_2 < 0x19) {
          if (4 < param_2) {
            local_18 = "RC2.0(";
            local_11 = cVar1 + '\x06';
          }
        }
        else {
          local_18 = "RC3.0(";
          if (param_2 == 0x19) {
            local_11 = '\x01';
          }
          else {
            local_11 = cVar1 + -0x1e;
          }
        }
      }
      else {
        local_18 = "1.0(";
        local_11 = cVar1 + '\x01';
      }
    }
    else {
      FUN_00502380((int)(uint)param_2 >> 0xc);
      FUN_00502720(&DAT_00916bd4);
      FUN_00502ce0((int)(uint)param_2 >> 8 & 0xf);
      FUN_00502720(&DAT_00917188);
      FUN_00502ce0(param_2 & 0xff);
      FUN_00502720(&DAT_0090f544);
    }
    if (local_18 != (char *)0x0) {
      FUN_00501f30(local_18);
      FUN_00502ce0(local_11);
      FUN_00502720(&DAT_0090f544);
    }
    FUN_005018d0(local_20);
    local_8 = local_8 & 0xffffff00;
    FUN_00501900(uVar2);
  }
  else {
    FUN_005018d0(local_20);
    local_8 = local_8 & 0xffffff00;
    FUN_00501900(uVar2);
  }
  ExceptionList = local_10;
  return param_1;
}

