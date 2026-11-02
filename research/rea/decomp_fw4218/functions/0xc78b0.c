// rea decompile_all
// name: FUN_000c78b0
// address: 0xc78b0
// body: available
// range: 0xc78b0-0xc79cd inclusive
// range: 0xc79d0-0xc7a09 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000c7926) */
/* WARNING: Removing unreachable block (ram,0x000c792a) */

int * FUN_000c78b0(int *param_1,int param_2)

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
  FUN_001f0168(param_1 + 3,s_WebSocketHandler_000c7a0c);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar1 = FUN_001f01c4(DAT_000c7a20,1);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_001af480();
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
        puVar5 = (undefined4 *)FUN_00173860(uVar4 * 4,0);
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
        FUN_00173a54(iVar1,param_1[2] - iVar1 >> 2,0);
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

