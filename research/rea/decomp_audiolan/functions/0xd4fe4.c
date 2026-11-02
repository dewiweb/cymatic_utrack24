// rea decompile_all
// name: FUN_000d4fe4
// address: 0xd4fe4
// body: available
// range: 0xd4fe4-0xd52c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000d4fe4(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  
  piVar1 = *(int **)(param_1 + 0x5ac);
  while( true ) {
    if (*(int **)(param_1 + 0x5b0) == piVar1) {
      FUN_000028a4(DAT_000d52c8,param_3);
                    /* WARNING: Could not recover jumptable at 0x000d52c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,0x1b);
      return;
    }
    if (*piVar1 == param_3) break;
    piVar1 = piVar1 + 1;
  }
  piVar1 = *(int **)(param_1 + 0x5b8);
  if (*(int **)(param_1 + 0x5bc) != piVar1) {
    piVar4 = *(int **)(param_1 + 0x5bc);
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_3) {
        if (piVar1 != piVar4) {
          piVar1 = piVar6 + 1;
          if ((piVar1 != piVar4) && (iVar5 = (int)piVar4 - (int)piVar1, 0 < iVar5 >> 2)) {
            piVar4 = piVar6 + -1;
            if (iVar5 * 0x20000000 < 0) {
              *piVar6 = *piVar1;
              piVar4 = piVar6;
              piVar6 = piVar1;
            }
            for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
              piVar4[1] = piVar6[1];
              piVar6 = piVar6 + 2;
              piVar4 = piVar4 + 2;
              *piVar4 = *piVar6;
            }
          }
          *(int *)(param_1 + 0x5bc) = *(int *)(param_1 + 0x5bc) + -4;
        }
        break;
      }
      piVar6 = piVar6 + 1;
    } while (piVar4 != piVar6);
  }
  local_38 = (undefined4 *)0x0;
  local_34 = (int *)0x0;
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  local_24 = 0;
  puVar2 = (undefined4 *)FUN_0010f82c(0xc,0);
  uVar3 = FUN_0010f82c(0x18,0);
  puVar2[2] = uVar3;
  *puVar2 = local_38;
  puVar2[1] = 1;
  local_28 = (int *)puVar2[2];
  local_30 = local_28 + 6;
  *local_28 = (int)local_28;
  local_28[1] = (int)local_28;
  local_38 = puVar2;
  local_2c = local_30;
  piVar1 = (int *)FUN_0006a6e4();
  iVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,param_3,&local_38);
  if ((iVar5 != 0) && (piVar1 = (int *)*local_28, uVar7 = 0, piVar1 != local_28)) {
    do {
      (**(code **)(**(int **)(param_1 + 0x118) + 0xbc))
                (*(int **)(param_1 + 0x118),param_2,uVar7,piVar1 + 2);
      piVar1 = (int *)*piVar1;
      uVar7 = uVar7 + 1 & 0xfffeffff;
    } while (piVar1 != local_28);
  }
  (**(code **)(**(int **)(param_1 + 0x118) + 0xc0))(*(int **)(param_1 + 0x118),param_2);
  piVar1 = local_28;
  if (local_28 == (int *)0x0) {
    return;
  }
  piVar6 = (int *)*local_28;
  while (piVar4 = piVar6, piVar4 != piVar1) {
    piVar6 = local_28;
    if (piVar4 != local_28) {
      piVar6 = (int *)*piVar4;
      *(int **)piVar4[1] = piVar6;
      *(int *)(*piVar4 + 4) = piVar4[1];
      local_24 = local_24 + -1;
      iVar5 = FUN_001da44c(piVar4 + 4);
      iVar5 = FUN_001da44c(iVar5 + -4);
      FUN_001da44c(iVar5 + -4);
      *piVar4 = (int)local_34;
      local_34 = piVar4;
    }
  }
  *local_28 = (int)local_34;
  local_34 = local_28;
  piVar1 = local_38;
  while (piVar1 != (int *)0x0) {
    local_38 = (undefined4 *)*piVar1;
    FUN_0010fa20(piVar1[2],piVar1[1],0);
    FUN_0010fa20(piVar1,1,0);
    piVar1 = local_38;
  }
  return;
}

