// rea decompile_all
// name: FUN_004a0655
// address: 0x4a0655
// body: available
// range: 0x4a0655-0x4a0752 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a0655(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de8ac;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0049fe5a();
  local_c = 0;
  FUN_004a0237(local_34,param_3,param_4,param_5,param_6);
  FUN_004a08e1(local_34,0xffffffff);
  FUN_004a05fb(0);
  FUN_004a9263();
  FUN_0049fea0();
  ExceptionList = local_14;
  return;
}

