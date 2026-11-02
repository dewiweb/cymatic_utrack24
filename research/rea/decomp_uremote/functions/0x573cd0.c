// rea decompile_all
// name: FUN_00573cd0
// address: 0x573cd0
// body: available
// range: 0x573cd0-0x573dde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00573cd0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 *puVar3;
  undefined1 local_84 [28];
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4d14;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00512300(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  puVar3 = local_84;
  uVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28 +
                               *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28) + 0xc)) + 0x98))
                    (puVar3,*(undefined2 *)(in_ECX + 0xf0),param_1,*(undefined4 *)(in_ECX + 0x2c));
  uVar2 = FUN_00503c30(uVar2,puVar3);
  cVar1 = FUN_0056b240(local_68,uVar2);
  if (cVar1 != '\0') {
    FUN_00529f40(local_68,0);
  }
  local_8 = 0xffffffff;
  FUN_005123f0();
  ExceptionList = local_10;
  return;
}

