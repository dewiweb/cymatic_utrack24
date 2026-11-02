// rea decompile_all
// name: FUN_00424f26
// address: 0x424f26
// body: available
// range: 0x424f26-0x4251a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00424f26(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint local_c;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x264) = 0;
  iVar3 = (**(code **)(param_1 + 0x1fc))(param_1,0x45424c43,param_2,0);
  if ((iVar3 == 0) ||
     (iVar3 = (**(code **)(param_1 + 0x1fc))(param_1,0x626c6f63,param_2,0), iVar3 == 0)) {
    iVar4 = FUN_004d021d();
    local_8 = FUN_004111b5();
    iVar3 = local_8;
    if (local_8 == 0) {
      iVar3 = FUN_004112c7();
      local_c = FUN_004112c7();
      FUN_00411249();
      if ((iVar3 == 0x20000) && (local_c < 0x10000)) {
        iVar5 = FUN_00411976(0x30,0,&local_8);
        *(int *)(param_1 + 0x268) = iVar5;
        iVar3 = local_8;
        if (local_8 == 0) {
          *(uint *)(param_1 + 0x264) = local_c;
          iVar3 = FUN_004111b5();
          uVar1 = local_c;
          if (iVar3 == 0) {
            while ((((uVar1 != 0 && (iVar3 = FUN_00411560(param_2,iVar5), iVar3 == 0)) &&
                    (iVar3 = FUN_00411560(param_2,iVar5 + 0x10), iVar3 == 0)) &&
                   ((iVar3 = FUN_00411560(param_2,iVar5 + 0x1c), iVar3 == 0 &&
                    (iVar3 = FUN_00411560(param_2,iVar5), iVar3 == 0))))) {
              iVar5 = iVar5 + 0x30;
              uVar1 = uVar1 - 1;
            }
            FUN_00411249();
            piVar9 = *(int **)(param_1 + 0x268);
            if (local_c != 0) {
              while( true ) {
                param_1 = *piVar9;
                iVar3 = FUN_0041106d();
                if ((iVar3 != 0) || (iVar3 = FUN_004111b5(), iVar3 != 0)) break;
                local_8 = iVar3;
                puVar6 = (undefined2 *)FUN_00411976(0x28,0,&local_8);
                piVar9[1] = (int)puVar6;
                if (local_8 != 0) {
                  return local_8;
                }
                while (param_1 != 0) {
                  uVar2 = FUN_00411277();
                  *puVar6 = uVar2;
                  uVar2 = FUN_00411277();
                  puVar6[1] = uVar2;
                  iVar3 = FUN_004112c7();
                  param_1 = param_1 + -1;
                  *(int *)(puVar6 + 0x12) = iVar3 + piVar9[2] + iVar4;
                  puVar6 = puVar6 + 0x14;
                }
                FUN_00411249();
                iVar5 = piVar9[1];
                for (iVar3 = *piVar9; iVar3 != 0; iVar3 = iVar3 + -1) {
                  iVar7 = FUN_0041106d();
                  if (iVar7 != 0) {
                    return iVar7;
                  }
                  iVar7 = FUN_004111b5();
                  if (iVar7 != 0) {
                    return iVar7;
                  }
                  uVar2 = FUN_00411277();
                  *(undefined2 *)(iVar5 + 4) = uVar2;
                  uVar2 = FUN_00411277();
                  *(undefined2 *)(iVar5 + 6) = uVar2;
                  uVar8 = FUN_004112c7();
                  *(undefined4 *)(iVar5 + 8) = uVar8;
                  FUN_00411249();
                  iVar7 = FUN_00424e25(iVar5,param_2);
                  if (iVar7 != 0) {
                    return iVar7;
                  }
                  iVar5 = iVar5 + 0x28;
                }
                local_c = local_c - 1;
                piVar9 = piVar9 + 0xc;
                if (local_c == 0) {
                  return 0;
                }
              }
            }
          }
        }
      }
      else {
        iVar3 = 3;
      }
    }
  }
  return iVar3;
}

