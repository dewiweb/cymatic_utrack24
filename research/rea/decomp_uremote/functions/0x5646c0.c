// rea decompile_all
// name: FUN_005646c0
// address: 0x5646c0
// body: available
// range: 0x5646c0-0x5648f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005646c0(short param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_8;
  
  switch(param_1) {
  case 0x80:
    uVar1 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x110))
                      ();
    *param_2 = uVar1 & 0xffff;
    param_2[1] = 0;
    uVar2 = 0;
    break;
  case 0x81:
    uVar1 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xec))
                      ();
    *param_2 = uVar1 & 0xffff;
    param_2[1] = 0;
    uVar2 = 0;
    break;
  case 0x82:
    uVar1 = FUN_005627f0(1,0);
    *param_2 = uVar1 & 0xffff;
    param_2[1] = 0;
    uVar2 = 0;
    break;
  case 0x83:
    uVar1 = FUN_005627f0(0,1);
    *param_2 = uVar1 & 0xffff;
    param_2[1] = 0;
    uVar2 = 0;
    break;
  case 0x84:
    uVar1 = FUN_00562840(1);
    *param_2 = uVar1 & 0xff;
    param_2[1] = 0;
    uVar2 = 0;
    break;
  case 0x85:
    *param_2 = (uint)*(ushort *)(**(int **)(in_ECX + 0x88) + 0xb0);
    param_2[1] = 0;
    uVar2 = 0;
    break;
  case 0x86:
    *param_2 = 0x1402;
    param_2[1] = 0;
    uVar2 = 0;
    break;
  case 0x87:
    uVar1 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xc4))
                      ();
    *param_2 = uVar1;
    param_2[1] = (int)uVar1 >> 0x1f;
    uVar2 = 0;
    break;
  case 0x88:
    uVar1 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x130))
                      ();
    *param_2 = uVar1 & 0xffff;
    param_2[1] = 0;
    uVar2 = 0;
    break;
  case 0x89:
    uVar1 = FUN_00565dc0();
    *param_2 = uVar1 & 0xffff;
    param_2[1] = 0;
    uVar2 = 0;
    break;
  default:
    for (local_8 = *(int *)(in_ECX + 0x164); (local_8 != 0 && (*(short *)(local_8 + 4) != param_1));
        local_8 = *(int *)(local_8 + 0xc)) {
    }
    if ((local_8 == 0) || (*(int *)(local_8 + 8) != 0)) {
      uVar2 = 2;
    }
    else {
      *param_2 = *(uint *)(local_8 + 0x10);
      param_2[1] = *(uint *)(local_8 + 0x14);
      uVar2 = 0;
    }
  }
  return uVar2;
}

