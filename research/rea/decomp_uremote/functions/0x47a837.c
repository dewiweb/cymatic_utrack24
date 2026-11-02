// rea decompile_all
// name: FUN_0047a837
// address: 0x47a837
// body: available
// range: 0x47a837-0x47a9ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0047a837(float param_1,float param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int unaff_EDI;
  bool bVar3;
  int local_7c;
  int local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d7fcd;
  local_14 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xffffff78;
  ExceptionList = &local_14;
  bVar3 = false;
  if (*(float *)(unaff_EDI + 0xc) < param_1) {
    bVar3 = false;
    if (*(float *)(unaff_EDI + 0x10) < param_1 == (*(float *)(unaff_EDI + 0x10) == param_1)) {
      bVar3 = false;
      if (*(float *)(unaff_EDI + 0x14) < param_2) {
        bVar3 = false;
        if (*(float *)(unaff_EDI + 0x18) < param_2 == (*(float *)(unaff_EDI + 0x18) == param_2)) {
          FUN_0047b417(param_3);
          local_c = 0;
          local_7c = 0;
          local_78 = 0;
          while (cVar1 = FUN_0047b4ad(uVar2), cVar1 != '\0') {
            if ((((local_6c <= param_2) && (param_2 < local_64)) ||
                ((local_64 < param_2 != (local_64 == param_2) && (param_2 < local_6c)))) &&
               (local_70 + ((local_68 - local_70) * (param_2 - local_6c)) / (local_64 - local_6c) <=
                param_1)) {
              if (local_64 <= local_6c) {
                local_78 = local_78 + 1;
              }
              else {
                local_7c = local_7c + 1;
              }
            }
          }
          if (*(char *)(unaff_EDI + 0x1c) == '\0') {
            bVar3 = (bool)((char)local_7c + (char)local_78 & 1);
          }
          else {
            bVar3 = local_78 != local_7c;
          }
          local_c = 0xffffffff;
          FUN_0047b476();
        }
      }
    }
  }
  ExceptionList = local_14;
  return bVar3;
}

