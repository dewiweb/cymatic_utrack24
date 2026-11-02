// rea decompile_all
// name: FUN_00578cd0
// address: 0x578cd0
// body: available
// range: 0x578cd0-0x578ddc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00578cd0(int param_1,undefined2 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_78 [16];
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d506c;
  local_10 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar1 = FUN_005a2600(param_1);
  if (cVar1 != '\0') {
    FUN_00512300(uVar2);
    local_8 = 0;
    uVar3 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x48))
                      (local_78,in_ECX + 0x74,*(undefined4 *)(in_ECX + 0x2c),
                       *(undefined2 *)(param_1 + 0x54),param_2);
    cVar1 = FUN_0056c8e0(local_68,uVar3);
    if (cVar1 != '\0') {
      FUN_00529f40(local_68,0);
    }
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  ExceptionList = local_10;
  return;
}

