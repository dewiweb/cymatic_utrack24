// rea decompile_all
// name: FUN_0051caf0
// address: 0x51caf0
// body: available
// range: 0x51caf0-0x51cc08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0051caf0(char param_1)

{
  char cVar1;
  int in_ECX;
  undefined1 uVar2;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cfa38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (*(code *)**(undefined4 **)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)))
                    (DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  if (cVar1 == '\0') {
    uVar2 = 0x1b;
  }
  else {
    FUN_0054f6b0();
    FUN_00512300();
    local_8 = 0;
    FUN_00536fd0((param_1 != '\0') + '\x02',in_ECX + -0x94,0,&DAT_0095c868);
    cVar1 = FUN_00529f40(local_68,0);
    uVar2 = cVar1 == '\0';
    FUN_0054f6f0();
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  ExceptionList = local_10;
  return uVar2;
}

