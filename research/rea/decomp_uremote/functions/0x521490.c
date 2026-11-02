// rea decompile_all
// name: FUN_00521490
// address: 0x521490
// body: available
// range: 0x521490-0x521577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00521490(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  int *in_ECX;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cfd05;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(short *)((int)in_ECX + 0x16) != 0) {
    FUN_00512300(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    FUN_0055a6e0(param_2,local_68,0x2300,param_1,*(undefined4 *)(*in_ECX + 0xd8));
    FUN_00536cb0(0x9204,param_3,param_4,param_5,0,0,&DAT_0095c854);
    FUN_00529f40(local_68,0);
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  ExceptionList = local_10;
  return;
}

