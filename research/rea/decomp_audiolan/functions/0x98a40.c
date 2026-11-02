// rea decompile_all
// name: FUN_00098a40
// address: 0x98a40
// body: available
// range: 0x98a40-0x98b5d inclusive
// range: 0x98b60-0x98b99 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00098ab6) */
/* WARNING: Removing unreachable block (ram,0x00098aba) */

int * FUN_00098a40(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  FUN_001a07ac(param_1 + 3,s_WebSocketHandler_00098b9c);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar1 = FUN_001a0808(DAT_00098bb0,1);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_00150d7c();
    }
    puVar3 = (undefined4 *)param_1[1];
    if (puVar3 == (undefined4 *)param_1[2]) {
      uVar10 = (int)puVar3 - *param_1 >> 2;
      if (uVar10 < (uint)(param_1[2] - *param_1 >> 2)) {
        param_1[1] = (int)(puVar3 + 1);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = puVar3[-1];
        }
        *puVar3 = uVar2;
      }
      else {
        uVar6 = (uVar10 >> 1) + uVar10 + (uVar10 >> 3);
        uVar4 = uVar10 + 1;
        if (uVar10 + 1 <= uVar6) {
          uVar4 = uVar6;
        }
        puVar5 = (undefined4 *)FUN_0010f82c(uVar4 * 4,0);
        puVar9 = puVar5;
        for (puVar7 = (undefined4 *)*param_1; puVar7 != puVar3; puVar7 = puVar7 + 1) {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = *puVar7;
          }
          puVar9 = puVar9 + 1;
        }
        puVar7 = (undefined4 *)(((int)puVar3 - *param_1 & 0xfffffffcU) + (int)puVar5);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = uVar2;
        }
        puVar9 = (undefined4 *)param_1[1];
        puVar7 = (undefined4 *)(((int)puVar3 - *param_1 & 0xfffffffcU) + (int)puVar5);
        for (; puVar3 != puVar9; puVar3 = puVar3 + 1) {
          puVar7 = puVar7 + 1;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar3;
          }
        }
        iVar8 = param_1[1];
        iVar1 = *param_1;
        FUN_0010fa20(iVar1,param_1[2] - iVar1 >> 2,0);
        *param_1 = (int)puVar5;
        param_1[1] = (int)(puVar5 + (iVar8 - iVar1 >> 2) + 1);
        param_1[2] = (int)(puVar5 + uVar4);
      }
    }
    else {
      param_1[1] = (int)(puVar3 + 1);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = uVar2;
      }
    }
  }
  puVar3 = (undefined4 *)*param_1;
  if ((undefined4 *)param_1[1] != puVar3) {
    do {
      (**(code **)(*(int *)*puVar3 + 8))();
      puVar3 = puVar3 + 1;
    } while ((undefined4 *)param_1[1] != puVar3);
  }
  return param_1;
}

