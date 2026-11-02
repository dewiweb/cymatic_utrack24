// rea decompile_all
// name: FUN_0050f330
// address: 0x50f330
// body: available
// range: 0x50f330-0x50f3e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0050f330(undefined4 param_1,ushort param_2,ushort param_3,int *param_4)

{
  undefined4 uVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  int local_1c;
  undefined1 local_14 [12];
  int local_8;
  
  if (param_4 == (int *)0x0) {
    local_1c = 0;
  }
  else {
    local_8 = 0;
    if (*(int *)(in_ECX + 0x118) == 3) {
      uVar2 = (uint)param_3;
      uVar3 = (uint)param_2;
      uVar1 = FUN_0052dce0(local_14);
      local_8 = FUN_00547630(uVar1,param_1,uVar3,uVar2,param_4);
    }
    else {
      (**(code **)(*param_4 + 4))(0,0x80,0);
    }
    if (local_8 != 0) {
      FUN_00544360();
    }
    if (local_8 == 0) {
      local_1c = 0;
    }
    else {
      local_1c = local_8 + 0x60 + *(int *)(*(int *)(local_8 + 0x60) + 4);
    }
  }
  return local_1c;
}

