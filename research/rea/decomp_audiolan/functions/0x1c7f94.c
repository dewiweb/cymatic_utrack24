// rea decompile_all
// name: FUN_001c7f94
// address: 0x1c7f94
// body: available
// range: 0x1c7f94-0x1c80e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_001c7f94(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  puVar5 = param_2;
  for (; param_2 != (undefined1 *)0x0; param_2 = *(undefined1 **)(param_2 + 8)) {
    puVar6 = (undefined1 *)param_1[1];
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)param_1[2];
      if (puVar6 == (undefined1 *)param_1[3]) {
        if (*param_1 == 0) {
          uVar7 = 1;
        }
        else {
          uVar1 = *(uint *)(*param_1 + 4);
          uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar7 < uVar1 + 1) {
            uVar7 = uVar1 + 1;
          }
        }
        piVar2 = (int *)FUN_0010f82c(0xc,0);
        iVar3 = FUN_0010f82c(uVar7 * 0x24,0);
        piVar2[2] = iVar3;
        *piVar2 = *param_1;
        piVar2[1] = uVar7;
        *param_1 = (int)piVar2;
        puVar6 = (undefined1 *)piVar2[2];
        param_1[3] = (int)(puVar6 + uVar7 * 0x24);
        param_1[2] = (int)(puVar6 + 0x24);
      }
      else {
        param_1[2] = (int)(puVar6 + 0x24);
      }
    }
    else {
      param_1[1] = *(int *)(puVar6 + 0xc);
    }
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    *puVar6 = 0;
    if (puVar6 + 0x10 != (undefined1 *)0x0) {
      iVar3 = FUN_001da408(puVar6 + 0x10,param_2 + 0x10);
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_2 + 0x14);
      iVar3 = FUN_001da408(iVar3 + 8,param_2 + 0x18);
      iVar3 = FUN_001da408(iVar3 + 4,param_2 + 0x1c);
      *(undefined2 *)(iVar3 + 4) = *(undefined2 *)(param_2 + 0x20);
    }
    *(undefined1 **)(param_3 + 8) = puVar6;
    *(undefined1 **)(puVar6 + 4) = param_3;
    if (puVar5 == param_2) {
      puVar5 = puVar6;
    }
    *puVar6 = *param_2;
    uVar4 = FUN_001c7f94(param_1,*(undefined4 *)(param_2 + 0xc),puVar6);
    *(undefined4 *)(puVar6 + 0xc) = uVar4;
    param_3 = puVar6;
  }
  *(undefined4 *)(param_3 + 8) = 0;
  return puVar5;
}

