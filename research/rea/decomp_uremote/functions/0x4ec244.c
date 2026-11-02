// rea decompile_all
// name: FUN_004ec244
// address: 0x4ec244
// body: available
// range: 0x4ec244-0x4ec355 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004ec244(float param_1,float param_2)

{
  char cVar1;
  int in_ECX;
  float10 fVar2;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005deab1;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  fVar2 = (float10)FUN_004e9f43(DAT_00955fd4 ^ (uint)&stack0xffffffa0);
  if ((float)fVar2 <= 0.0) {
LAB_004ec30a:
    local_58 = FUN_004ec153();
  }
  else {
    FUN_004e8518(&local_58,in_ECX + 0xfc,(float)fVar2,*(undefined4 *)(in_ECX + 0x110));
    local_c = 0;
    do {
      do {
        cVar1 = FUN_004e85f8();
        if (cVar1 == '\0') {
          FUN_004652d6();
          goto LAB_004ec30a;
        }
      } while (local_50 + local_54 <= param_2);
      if (param_2 < local_54) {
        local_58 = FUN_00439b5a(0);
        goto LAB_004ec331;
      }
      if (param_1 < local_48 != (param_1 == local_48)) goto LAB_004ec331;
    } while (local_44 <= param_1);
    local_58 = FUN_004e8e98(param_1);
LAB_004ec331:
    FUN_004652d6();
  }
  ExceptionList = local_14;
  return local_58;
}

