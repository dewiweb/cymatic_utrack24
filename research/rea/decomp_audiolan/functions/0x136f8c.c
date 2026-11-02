// rea decompile_all
// name: FUN_00136f8c
// address: 0x136f8c
// body: available
// range: 0x136f8c-0x13708b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00136f8c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 4)) {
    iVar4 = *(int *)(param_1 + 4) + 8;
    puVar1 = (undefined4 *)FUN_0016d774(iVar4 * 0x1c + 8,DAT_0013708c);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    *puVar1 = 0x1c;
    puVar1[1] = iVar4;
    iVar4 = FUN_0016dd70(puVar1 + 2,DAT_00137090,0x1c,iVar4);
    if (iVar4 == 0) {
      return;
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar5 * 0x1c);
        puVar6 = (undefined4 *)(iVar4 + iVar5 * 0x1c);
        *puVar6 = *puVar1;
        FUN_0010e820(puVar6 + 1,puVar1 + 1);
        iVar5 = iVar5 + 1;
        *(undefined2 *)(puVar6 + 3) = *(undefined2 *)(puVar1 + 3);
        uVar2 = puVar1[5];
        uVar3 = puVar1[6];
        puVar6[4] = puVar1[4];
        puVar6[5] = uVar2;
        puVar6[6] = uVar3;
      } while (iVar5 < *(int *)(param_1 + 4));
    }
    FUN_00003c70(*(undefined4 *)(param_1 + 0xc),DAT_00137094);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
    *(int *)(param_1 + 0xc) = iVar4;
  }
  FUN_0010e498(*(int *)(param_1 + 8) * 0x1c + 4 + *(int *)(param_1 + 0xc),param_2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

