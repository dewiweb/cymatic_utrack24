// rea decompile_all
// name: FUN_0050e640
// address: 0x50e640
// body: available
// range: 0x50e640-0x50e7eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0050e640(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_2c;
  int local_28;
  undefined1 local_20 [12];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((param_2 == 0) || (param_1 == (int *)0x0)) {
    local_8 = 0;
  }
  else {
    local_8 = 0;
    (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))();
    if (param_1 == (int *)0x0) {
      local_c = 0;
    }
    else {
      local_c = (**(code **)(*(int *)((int)param_1 + *(int *)(*param_1 + 4)) + 0x24))();
    }
    if (*(int *)(in_ECX + -0xa44) == 3) {
      if (*(char *)(local_c + 0x48) == '\0') {
        iVar3 = in_ECX + -0xb5c;
        iVar2 = local_c + 0x4c;
        uVar4 = 0;
        uVar1 = FUN_0052dce0(local_20);
        local_14 = FUN_00545ba0(uVar1,uVar4,iVar2,param_2,iVar3,param_3);
        if (local_14 != 0) {
          FUN_00544360();
        }
        if (local_14 == 0) {
          local_2c = 0;
        }
        else {
          local_2c = local_14 + 0xd0 + *(int *)(*(int *)(local_14 + 0xd0) + 4);
        }
        local_8 = local_2c;
      }
      else {
        local_10 = FUN_00546a90(local_c + 0xa4,param_2,in_ECX + -0xb5c,param_3);
        if (local_10 != 0) {
          FUN_00544360();
        }
        if (local_10 == 0) {
          local_28 = 0;
        }
        else {
          local_28 = local_10 + 0x60 + *(int *)(*(int *)(local_10 + 0x60) + 4);
        }
        local_8 = local_28;
      }
    }
    (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  }
  return local_8;
}

