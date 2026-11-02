// rea decompile_all
// name: FUN_00568af0
// address: 0x568af0
// body: available
// range: 0x568af0-0x568ba1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00568af0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int *in_ECX;
  int local_8;
  
  local_8 = 0x15;
  cVar1 = FUN_00503fe0();
  if (cVar1 == '\0') {
    FUN_0054f6b0();
    FUN_00567dc0();
    cVar1 = FUN_005593c0(param_1,param_2);
    local_8 = (-(uint)(cVar1 != '\0') & 0xfffffffe) + 2;
    if (local_8 == 0) {
      FUN_00567360(param_1);
      (**(code **)(*in_ECX + 0x1c))(1,param_1);
      (**(code **)(*in_ECX + 0x20))(1,param_2);
      FUN_005672f0(param_2);
      FUN_00560e50();
    }
    FUN_0054f6f0();
  }
  return local_8;
}

