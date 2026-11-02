// rea decompile_all
// name: FUN_005686f0
// address: 0x5686f0
// body: available
// range: 0x5686f0-0x56880a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005686f0(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0x26;
  cVar1 = FUN_00503fe0();
  if (cVar1 == '\0') {
    FUN_00567dc0();
    if ((in_ECX[0x1c] & 0x4000000U) != 0) {
      while ((short)in_ECX[0x16] != 0) {
        FUN_00559900(local_18,0);
        cVar1 = FUN_00503cf0(param_1);
        if (cVar1 == '\0') break;
        FUN_005592d0(0);
        FUN_00567360(local_18);
        cVar1 = FUN_00503fe0();
        if (cVar1 == '\0') {
          (**(code **)(*in_ECX + 0x1c))(0,local_18);
        }
      }
    }
    cVar1 = FUN_00559080(param_1,&local_8);
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x20))(0,param_1);
      FUN_005672f0(param_1);
      (**(code **)(*in_ECX + 0x30))();
      FUN_00560e50();
    }
  }
  return local_8;
}

