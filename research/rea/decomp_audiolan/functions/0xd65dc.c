// rea decompile_all
// name: FUN_000d65dc
// address: 0xd65dc
// body: available
// range: 0xd65dc-0xd6a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d65dc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int *local_40;
  int local_3c;
  undefined1 auStack_38 [4];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0007b98c(auStack_38);
  iVar1 = param_2[1];
  local_34 = *(undefined1 *)(iVar1 + 0x30);
  local_33 = *(undefined1 *)(iVar1 + 0x31);
  local_32 = *(undefined1 *)(iVar1 + 0x32);
  local_31 = *(undefined1 *)(iVar1 + 0x33);
  iVar1 = FUN_00156078(auStack_38);
  if (((iVar1 == 5 || iVar1 == 6) || (iVar1 == 7 || iVar1 == 0)) || (iVar1 == 1 || iVar1 == 2)) {
    iVar1 = 0;
    local_30 = DAT_000d6a38;
    do {
      iVar6 = *param_2;
      iVar4 = param_2[1];
      iVar2 = FUN_0014d24c(iVar4,iVar1);
      if (iVar2 != 0) {
        piVar8 = *(int **)(param_1 + 0x118);
        if (*(int **)(param_1 + 0x11c) != piVar8) {
          do {
            iVar5 = *piVar8;
            *(undefined1 *)(iVar5 + 0x15) = 1;
            if ((*(int *)(iVar5 + 8) == iVar2) && (*(int *)(iVar5 + 0x10) != 0)) goto LAB_000d688c;
            piVar8 = piVar8 + 1;
          } while (*(int **)(param_1 + 0x11c) != piVar8);
        }
        iVar5 = FUN_001a0808(0x20,1);
        if (iVar5 != 0) {
          local_2c = *(undefined4 *)(DAT_000d6a3c + 0x10);
          uVar9 = *(undefined4 *)(DAT_000d6a3c + 0x14);
          local_3c = param_1;
          puVar7 = (undefined4 *)FUN_0014fb44(iVar5,iVar2 + 0x50);
          *puVar7 = local_30;
          puVar7[5] = iVar2;
          puVar7[2] = local_3c;
          puVar7[3] = iVar6;
          puVar7[4] = iVar4;
          puVar7[6] = local_2c;
          puVar7[7] = uVar9;
          local_40 = (int *)FUN_001a0808(0x18,1);
          if (local_40 != (int *)0x0) {
            *(undefined1 *)(local_40 + 3) = 0;
            *(undefined1 *)((int)local_40 + 0xd) = 0;
            *(undefined1 *)(local_40 + 5) = 0xff;
            *(undefined1 *)((int)local_40 + 0x15) = 1;
            local_40[2] = iVar2;
            local_40[4] = (int)puVar7;
            *local_40 = iVar6;
            local_40[1] = iVar4;
          }
          FUN_001e032c(param_1 + 0x118,&local_40);
          if (*(char *)(iVar2 + 0x6d) != '\0') {
            *(undefined1 *)(param_1 + 0x156) = 0;
            **(uint **)(iVar6 + 0x18) = **(uint **)(iVar6 + 0x18) & 0xffefffff;
            local_3c = *(int *)(*(int *)(param_1 + 0x11c) + -4);
            *(undefined1 *)(local_3c + 0xd) = 0;
            *(undefined1 *)(local_3c + 0xc) = 0;
            *(undefined1 *)(local_3c + 0x14) = 0xff;
            FUN_001e032c(param_1 + 0x124,&local_3c);
          }
        }
      }
LAB_000d688c:
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    if (*(int *)(param_1 + 0x140) == 0) {
      piVar8 = (int *)FUN_001a0808(0x10,1);
      if (piVar8 != (int *)0x0) {
        *piVar8 = param_1;
        piVar8[1] = param_1 + 0x164;
        *(undefined1 *)(piVar8 + 2) = 1;
        piVar8[3] = 0;
        local_40 = (int *)0x0;
        (**(code **)(*(int *)(param_1 + 0x164) + 0x24))(param_1 + 0x164,0,0,100);
      }
      *(int **)(param_1 + 0x140) = piVar8;
      if (piVar8 == (int *)0x0) goto LAB_000d6a28;
    }
    else {
      local_40 = (int *)0x0;
      piVar8 = *(int **)(*(int *)(param_1 + 0x140) + 4);
      (**(code **)(*piVar8 + 0x24))(piVar8,0,0,100);
      *(undefined1 *)(*(int *)(param_1 + 0x140) + 8) = 1;
    }
    if (*(int *)(param_1 + 0x144) == 0) {
      piVar8 = (int *)FUN_001a0808(0x10,1);
      if (piVar8 != (int *)0x0) {
        *piVar8 = param_1;
        piVar8[1] = param_1 + 0x164;
        *(undefined1 *)(piVar8 + 2) = 1;
        piVar8[3] = 0;
        local_40 = (int *)0x0;
        (**(code **)(*(int *)(param_1 + 0x164) + 0x24))(param_1 + 0x164,1,0,100);
      }
      *(int **)(param_1 + 0x144) = piVar8;
    }
    else {
      local_40 = (int *)0x0;
      piVar8 = *(int **)(*(int *)(param_1 + 0x144) + 4);
      (**(code **)(*piVar8 + 0x24))(piVar8,1,0,100);
      *(undefined1 *)(*(int *)(param_1 + 0x144) + 8) = 1;
    }
  }
  else {
    puVar7 = *(undefined4 **)(param_1 + 0x118);
    if (*(undefined4 **)(param_1 + 0x11c) != puVar7) {
      do {
        if (*(int *)*puVar7 == *param_2) {
          FUN_000d60b4(param_1);
        }
        puVar7 = puVar7 + 1;
      } while (*(undefined4 **)(param_1 + 0x11c) != puVar7);
    }
    iVar1 = 0;
    do {
      iVar2 = FUN_0014d24c(param_2[1],iVar1);
      for (piVar8 = *(int **)(param_1 + 0x118); *(int **)(param_1 + 0x11c) != piVar8;
          piVar8 = piVar8 + 1) {
        if (*(int *)(*piVar8 + 8) == iVar2) {
          FUN_000d60b4(param_1,*piVar8);
          if (*(int **)(*piVar8 + 0x10) != (int *)0x0) {
            (**(code **)(**(int **)(*piVar8 + 0x10) + 4))();
          }
          FUN_0019f30c(*piVar8);
          piVar10 = *(int **)(param_1 + 0x11c);
          if (*(int **)(param_1 + 0x118) != piVar10) {
            piVar3 = piVar8 + 1;
            if (piVar3 != piVar10) {
              iVar2 = (int)piVar10 - (int)piVar3 >> 2;
              if (0 < iVar2) {
                iVar6 = 0;
                if (piVar3 < piVar10) {
                  iVar4 = -(((int)piVar10 - (int)piVar3) * 0x20000000 >> 0x1f);
                  if (iVar4 == 1) {
                    iVar6 = 1;
                    *piVar8 = *piVar3;
                  }
                }
                else {
                  iVar4 = 0;
                }
                for (; iVar4 < iVar2; iVar4 = iVar4 + 2) {
                  piVar8[iVar6] = piVar3[iVar6];
                  piVar8[iVar6 + 1] = piVar3[iVar6 + 1];
                  iVar6 = iVar6 + 2;
                }
              }
            }
            *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + -4;
          }
          break;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
  }
LAB_000d6a28:
  FUN_0007b9a4(auStack_38);
  return;
}

