// rea decompile_all
// name: FUN_0042d9c7
// address: 0x42d9c7
// body: available
// range: 0x42d9c7-0x42db14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042d9c7(uint param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  iVar2 = param_1;
  local_8 = 0;
  *(undefined1 *)(param_1 + 0x2c4) = 0;
  if ((*(int *)(param_1 + 0x2c8) != 0) || (local_8 = FUN_0042d621(param_1,0), local_8 == 0)) {
    puVar1 = *(uint **)(param_1 + 0x2c8);
    if (param_2 == *(uint *)puVar1[2]) {
      uVar3 = 0;
      if (param_2 != 0) {
        do {
          if ((param_3[uVar3] < -0x10000) || (0x10000 < param_3[uVar3])) goto LAB_0042da81;
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_2);
      }
      if ((puVar1[9] != 0) || (local_8 = FUN_0042d343(), local_8 == 0)) {
        if (puVar1[1] == 0) {
          uVar3 = FUN_00411976(4,0,&local_8);
          puVar1[1] = uVar3;
          if (local_8 != 0) {
            return local_8;
          }
          local_c = 1;
        }
        else {
          local_c = 0;
          param_1 = 0;
          if (param_2 != 0) {
            piVar4 = param_3;
            do {
              if (*(int *)((puVar1[1] - (int)param_3) + (int)piVar4) != *piVar4) {
                local_c = 2;
                break;
              }
              param_1 = param_1 + 1;
              piVar4 = piVar4 + 1;
            } while (param_1 < param_2);
          }
        }
        *puVar1 = param_2;
        _memcpy((void *)puVar1[1],param_3,param_2 << 2);
        *(undefined1 *)(iVar2 + 0x2c4) = 1;
        if (*(int *)(iVar2 + 0x2a0) != 0) {
          if (local_c == 1) {
            FUN_0042dcc6(iVar2);
          }
          else if (local_c == 2) {
            FUN_00411a5c(*(int *)(iVar2 + 0x2a0));
            *(undefined4 *)(iVar2 + 0x2a0) = 0;
            FUN_00426707(iVar2);
          }
        }
      }
    }
    else {
LAB_0042da81:
      local_8 = 6;
    }
  }
  return local_8;
}

