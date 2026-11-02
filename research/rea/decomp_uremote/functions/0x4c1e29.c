// rea decompile_all
// name: FUN_004c1e29
// address: 0x4c1e29
// body: available
// range: 0x4c1e29-0x4c1ebe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c1e29(undefined4 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  FUN_004bfbb4(param_2);
  iVar2 = FUN_00460ba2();
  thunk_FUN_004652d6();
  if (iVar2 == 0) {
    if (((param_3 == '\0') || (*(int *)(in_ECX + 0xc) == 0)) ||
       ((*(int *)(in_ECX + 0x34) != 0 &&
        (cVar1 = FUN_004d30c9(*(int *)(in_ECX + 0x34)), cVar1 != '\0')))) {
      thunk_FUN_004c1d58();
      FUN_004d3044();
    }
    else {
      FUN_004c1e29(param_1,param_2,1);
    }
    return param_1;
  }
  FUN_0046173a();
  uVar3 = FUN_0047604f();
  return uVar3;
}

