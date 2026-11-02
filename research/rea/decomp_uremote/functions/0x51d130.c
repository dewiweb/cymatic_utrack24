// rea decompile_all
// name: FUN_0051d130
// address: 0x51d130
// body: available
// range: 0x51d130-0x51d244 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0051d130(undefined2 param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  int in_ECX;
  int local_24;
  undefined1 local_14 [12];
  int local_8;
  
  cVar2 = (*(code *)**(undefined4 **)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)))();
  if (cVar2 == '\0') {
    local_24 = 0;
  }
  else if (param_3 == 0) {
    local_24 = 0;
  }
  else {
    FUN_0054f6b0();
    uVar1 = *(undefined4 *)(in_ECX + -0xd4);
    FUN_0052dce0(local_14);
    local_8 = FUN_005526e0(in_ECX + -0x94,local_14,param_1,param_2,1,0,param_3,in_ECX + -0x100,uVar1
                           ,param_4);
    if (local_8 != 0) {
      FUN_00544360();
    }
    FUN_0054f6f0();
    if (local_8 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = local_8 + 0xa4 + *(int *)(*(int *)(local_8 + 0xa4) + 4);
    }
  }
  return local_24;
}

