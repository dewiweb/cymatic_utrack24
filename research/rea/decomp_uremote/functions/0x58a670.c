// rea decompile_all
// name: FUN_0058a670
// address: 0x58a670
// body: available
// range: 0x58a670-0x58aa27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0058a670(int *param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_ECX;
  uint *local_6c;
  uint *local_60;
  byte local_12;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d5fd0;
  local_10 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 - *param_1 < 0x1b) {
    uVar4 = 0;
  }
  else {
    FUN_005813b0(param_1);
    cVar2 = FUN_00507db0(param_1,param_2);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      *(undefined1 *)(in_ECX + 0x38) = *(undefined1 *)*param_1;
      *param_1 = *param_1 + 1;
      if (param_2 - *param_1 < (int)((uint)*(byte *)(in_ECX + 0x38) * 8 + 1)) {
        uVar4 = 0;
      }
      else {
        if (*(int *)(in_ECX + 0x3c) != 0) {
          puVar1 = *(undefined4 **)(in_ECX + 0x3c);
          if (puVar1 != (undefined4 *)0x0) {
            if (puVar1[-1] == 0) {
              FUN_005b13e8(puVar1 + -1,uVar3);
            }
            else {
              (**(code **)*puVar1)(3);
            }
          }
          *(undefined4 *)(in_ECX + 0x3c) = 0;
        }
        if (*(char *)(in_ECX + 0x38) != '\0') {
          uVar5 = (uint)*(byte *)(in_ECX + 0x38);
          local_60 = (uint *)FUN_005b04d6(-(uint)(0xfffffffb < uVar5 * 0x10) | uVar5 * 0x10 + 4);
          local_8 = 0;
          if (local_60 == (uint *)0x0) {
            local_60 = (uint *)0x0;
          }
          else {
            *local_60 = uVar5;
            _eh_vector_constructor_iterator_(local_60 + 1,0x10,uVar5,FUN_00506310,FUN_00506380);
            local_60 = local_60 + 1;
          }
          local_8 = 0xffffffff;
          *(uint **)(in_ECX + 0x3c) = local_60;
          if (*(int *)(in_ECX + 0x3c) == 0) {
            ExceptionList = local_10;
            return 0;
          }
          for (local_11 = 0; local_11 < *(byte *)(in_ECX + 0x38); local_11 = local_11 + 1) {
            cVar2 = FUN_00507db0(param_1,param_2);
            if (cVar2 == '\0') {
              ExceptionList = local_10;
              return 0;
            }
          }
        }
        *(undefined1 *)(in_ECX + 0x40) = *(undefined1 *)*param_1;
        *param_1 = *param_1 + 1;
        if (param_2 - *param_1 < (int)((uint)*(byte *)(in_ECX + 0x40) * 8)) {
          uVar4 = 0;
        }
        else {
          if (*(int *)(in_ECX + 0x44) != 0) {
            puVar1 = *(undefined4 **)(in_ECX + 0x44);
            if (puVar1 != (undefined4 *)0x0) {
              if (puVar1[-1] == 0) {
                FUN_005b13e8(puVar1 + -1,uVar3);
              }
              else {
                (**(code **)*puVar1)(3);
              }
            }
            *(undefined4 *)(in_ECX + 0x44) = 0;
          }
          if (*(char *)(in_ECX + 0x40) != '\0') {
            uVar3 = (uint)*(byte *)(in_ECX + 0x40);
            local_6c = (uint *)FUN_005b04d6(-(uint)(0xfffffffb < uVar3 * 0x10) | uVar3 * 0x10 + 4);
            local_8 = 1;
            if (local_6c == (uint *)0x0) {
              local_6c = (uint *)0x0;
            }
            else {
              *local_6c = uVar3;
              _eh_vector_constructor_iterator_(local_6c + 1,0x10,uVar3,FUN_00506310,FUN_00506380);
              local_6c = local_6c + 1;
            }
            local_8 = 0xffffffff;
            *(uint **)(in_ECX + 0x44) = local_6c;
            if (*(int *)(in_ECX + 0x44) == 0) {
              ExceptionList = local_10;
              return 0;
            }
            for (local_12 = 0; local_12 < *(byte *)(in_ECX + 0x40); local_12 = local_12 + 1) {
              cVar2 = FUN_00507db0(param_1,param_2);
              if (cVar2 == '\0') {
                ExceptionList = local_10;
                return 0;
              }
            }
          }
          uVar4 = 1;
        }
      }
    }
  }
  ExceptionList = local_10;
  return uVar4;
}

