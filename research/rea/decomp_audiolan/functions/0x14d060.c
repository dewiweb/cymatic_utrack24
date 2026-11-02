// rea decompile_all
// name: FUN_0014d060
// address: 0x14d060
// body: available
// range: 0x14d060-0x14d23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0014d11c) */
/* WARNING: Removing unreachable block (ram,0x0014d128) */

undefined4 FUN_0014d060(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  
  puVar7 = *(undefined4 **)(param_1 + 0xe4);
  while( true ) {
    if (*(undefined4 **)(param_1 + 0xe8) == puVar7) {
      (**(code **)*param_2)
                (param_2,(int)*(undefined4 **)(param_1 + 0xe8) -
                         (int)*(undefined4 **)(param_1 + 0xe4) >> 2);
      puVar7 = *(undefined4 **)(param_1 + 0xe8);
      piVar8 = (int *)(param_1 + 0xe4);
      if (puVar7 == *(undefined4 **)(param_1 + 0xec)) {
        uVar1 = (int)puVar7 - *piVar8 >> 2;
        if (uVar1 < (uint)((int)*(undefined4 **)(param_1 + 0xec) - *piVar8 >> 2)) {
          *(undefined4 **)(param_1 + 0xe8) = puVar7 + 1;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = puVar7[-1];
          }
          *puVar7 = param_2;
        }
        else {
          uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar9 < uVar1 + 1) {
            uVar9 = uVar1 + 1;
          }
          puVar2 = (undefined4 *)FUN_0010f82c(uVar9 << 2,0);
          puVar5 = puVar2;
          for (puVar4 = (undefined4 *)*piVar8; puVar4 != puVar7; puVar4 = puVar4 + 1) {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar4;
            }
            puVar5 = puVar5 + 1;
          }
          puVar4 = (undefined4 *)(((int)puVar7 - *piVar8 & 0xfffffffcU) + (int)puVar2);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = param_2;
          }
          puVar5 = *(undefined4 **)(param_1 + 0xe8);
          puVar4 = (undefined4 *)(((int)puVar7 - *piVar8 & 0xfffffffcU) + (int)puVar2);
          for (; puVar7 != puVar5; puVar7 = puVar7 + 1) {
            puVar4 = puVar4 + 1;
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar7;
            }
          }
          iVar3 = *piVar8;
          iVar6 = *(int *)(param_1 + 0xe8);
          FUN_0010fa20(iVar3,*(int *)(param_1 + 0xec) - iVar3 >> 2,0);
          *(undefined4 **)(param_1 + 0xec) = puVar2 + uVar9;
          *(undefined4 **)(param_1 + 0xe8) = puVar2 + (iVar6 - iVar3 >> 2) + 1;
          *piVar8 = (int)puVar2;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0xe8) = puVar7 + 1;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = param_2;
        }
      }
      (**(code **)(*param_2 + 4))(param_2,param_1);
      return 1;
    }
    if ((int *)*puVar7 == param_2) break;
    puVar7 = puVar7 + 1;
  }
  return 0;
}

