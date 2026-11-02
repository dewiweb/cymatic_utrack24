// rea decompile_all
// name: FUN_00023c10
// address: 0x23c10
// body: available
// range: 0x23c10-0x23d45 inclusive
// range: 0x23d48-0x23d6d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00023c10(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)(&DAT_00001fc4 + param_1);
  if (iVar3 != 0) {
    uVar1 = FUN_00028288(iVar3 + 4,*(int *)(iVar3 + 0x24) + 4,param_1 + 0x37);
    FUN_0002a1c6(0,s_ClearProxyRecords_ERROR_m_>Curre_00023d70,uVar1);
  }
  *(int *)(&DAT_00001fc4 + param_1) = param_3;
  if (param_3 != 0) {
    iVar3 = param_1 + DAT_00023da8;
    do {
      puVar4 = *(undefined4 **)(&DAT_00001fc4 + param_1);
      if (((((*(int *)(iVar3 + 8) == puVar4[7]) &&
            (*(short *)(param_2 + 2) == *(short *)((int)puVar4 + 0x49))) &&
           (*(short *)(param_2 + 4) == *(short *)((int)puVar4 + 0x4b))) &&
          (*(short *)(param_2 + 6) == *(short *)((int)puVar4 + 0x4d))) &&
         ((puVar2 = puVar4 + 0x10, *(char *)(param_2 + 1) != *(char *)(puVar4 + 0x12) ||
          (*DAT_00023dac * 0x3c < *(int *)(param_1 + 0xdc) - puVar4[0x1c])))) {
        if (*DAT_00023db0 != 0) {
          uVar1 = FUN_00028288(puVar4 + 1,puVar4[9] + 4,param_1 + 0x37);
          FUN_0002a1c6(2,DAT_00023db4,*(undefined4 *)(param_1 + 0x3638),
                       *(undefined1 *)((int)puVar4 + 0x7b),*(undefined1 *)(puVar4 + 1),
                       (int)puVar4 + 0x49,(int)puVar4 + 0x4f,(int)*(char *)(puVar2 + 2),
                       (int)*(char *)(param_2 + 1),uVar1);
        }
        if (*(char *)(puVar4 + 1) == '\x01') {
          *(undefined1 *)(puVar4 + 1) = 8;
        }
        FUN_001c6cb8((int)puVar4 + 0x49,DAT_00023db8);
        *(undefined1 *)(puVar4 + 0x1f) = 0;
        FUN_001e6734(param_1,puVar4,0);
        if ((*(int *)(param_1 + 0x2884) != 0) && (*(int *)(param_1 + 0x2884) != *(int *)(iVar3 + 8))
           ) {
          FUN_001e5ae8(param_1);
        }
        *(undefined4 *)(param_1 + 0x2884) = *(undefined4 *)(iVar3 + 8);
      }
      puVar2 = *(undefined4 **)(&DAT_00001fc4 + param_1);
      if (puVar2 == puVar4) {
        puVar2 = (undefined4 *)*puVar4;
        *(undefined4 **)(&DAT_00001fc4 + param_1) = puVar2;
      }
    } while (puVar2 != (undefined4 *)0x0);
  }
  return;
}

