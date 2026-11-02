// rea decompile_all
// name: FUN_0058f8f0
// address: 0x58f8f0
// body: available
// range: 0x58f8f0-0x58fb41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058f8f0(undefined2 param_1,int param_2,int param_3,ushort param_4,char param_5,
                 byte *param_6)

{
  byte bVar1;
  int iVar2;
  int *in_ECX;
  uint local_18;
  byte *local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  if (param_4 < 8) {
    FUN_0058f500();
    (**(code **)(*(int *)(*in_ECX + 0x28 + *(int *)(*(int *)(*in_ECX + 0x28) + 0xc)) + 0x1a0))
              (param_1,0x1a,0);
  }
  else {
    local_14 = param_6;
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      bVar1 = *local_14;
      local_14 = local_14 + 1;
      if ((int)(char)(&DAT_005ef5cc)[local_18] != (uint)bVar1) {
        FUN_0058f500();
        (**(code **)(*(int *)(*in_ECX + 0x28 + *(int *)(*(int *)(*in_ECX + 0x28) + 0xc)) + 0x1a0))
                  (param_1,1,0);
        return;
      }
    }
    local_8 = *(int *)local_14;
    local_14 = local_14 + 4;
    local_c = 8;
    if (param_3 == 0) {
      FUN_0058f500();
      in_ECX[1] = local_8;
      iVar2 = FUN_005b04d6(in_ECX[1]);
      in_ECX[2] = iVar2;
    }
    if ((uint)in_ECX[1] < param_2 + -8 + (uint)param_4) {
      FUN_0058f500();
      (**(code **)(*(int *)(*in_ECX + 0x28 + *(int *)(*(int *)(*in_ECX + 0x28) + 0xc)) + 0x1a0))
                (param_1,0x13,0);
    }
    else {
      _memcpy((void *)(in_ECX[2] + param_2),local_14,param_4 - 8);
      local_10 = 0;
      if (param_5 != '\0') {
        local_14 = (byte *)in_ECX[2];
        local_8 = in_ECX[1];
        local_10 = FUN_00569fa0(&local_14,&local_8);
        if (local_10 == 0x10) {
          local_10 = FUN_00569fa0(&local_14,&local_8);
        }
        FUN_0058f500();
      }
      (**(code **)(*(int *)(*in_ECX + 0x28 + *(int *)(*(int *)(*in_ECX + 0x28) + 0xc)) + 0x1a0))
                (param_1,local_10,param_3 + -8 + (uint)param_4);
    }
  }
  return;
}

