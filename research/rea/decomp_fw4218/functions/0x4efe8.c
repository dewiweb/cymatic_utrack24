// rea decompile_all
// name: FUN_0004efe8
// address: 0x4efe8
// body: available
// range: 0x4efe8-0x4f0a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0004efe8(int *param_1,int *param_2,int param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)0x0;
  uVar1 = FUN_001c6bc2(param_3);
  iVar2 = FUN_001c103c(uVar1,DAT_0004f0a8);
  if (iVar2 == 0) {
    uVar1 = FUN_001c6bc2(param_3);
    iVar2 = FUN_001c103c(uVar1,DAT_0004f0ac);
    if (iVar2 != 0) {
      for (puVar4 = (undefined4 *)(param_3 + 0x10);
          puVar4 < (undefined4 *)(*(int *)(param_3 + 0xc) * 8 + param_3 + 0x10); puVar4 = puVar4 + 2
          ) {
        iVar2 = (int)puVar4[1] >> 8;
        if ((puVar4[1] & 1) != 0) {
          iVar2 = *(int *)(iVar2 + *param_1);
        }
        if (((int *)(iVar2 + (int)param_1) == param_2) &&
           (iVar3 = FUN_001c103c(*puVar4,param_4), iVar3 != 0)) {
          puVar5 = puVar4;
          if (-1 < (int)(puVar4[1] << 0x1e)) {
            return puVar4;
          }
          goto LAB_0004f070;
        }
        if (((int)(puVar4[1] << 0x1e) < 0) &&
           (puVar5 = (undefined4 *)
                     FUN_0004efe8((int *)(iVar2 + (int)param_1),param_2,*puVar4,param_4,param_5),
           *param_5 != 0)) {
          return puVar5;
        }
      }
    }
  }
  else if ((param_1 == param_2) &&
          (iVar2 = FUN_001c103c(*(undefined4 *)(param_3 + 8),param_4), iVar2 != 0)) {
LAB_0004f070:
    *param_5 = 1;
  }
  else {
    puVar5 = (undefined4 *)
             FUN_0004efe8(param_1,param_2,*(undefined4 *)(param_3 + 8),param_4,param_5);
  }
  return puVar5;
}

