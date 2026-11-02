// rea decompile_all
// name: FUN_0018e804
// address: 0x18e804
// body: available
// range: 0x18e804-0x18e937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 * FUN_0018e804(undefined4 param_1,int param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int extraout_r2;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  puVar2 = (undefined2 *)FUN_001a0808(0xdc,param_1);
  if (puVar2 == (undefined2 *)0x0) {
    return (undefined2 *)0x0;
  }
  *puVar2 = 0xffff;
  *(undefined4 *)(puVar2 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined1 *)(puVar2 + 0x2e) = 0xff;
  *(undefined4 *)(puVar2 + 0x30) = 0xff;
  bVar7 = param_2 != 0;
  iVar4 = extraout_r2;
  if (!bVar7) {
    iVar4 = 0;
  }
  *(char *)((int)puVar2 + 0x65) = (char)param_2;
  iVar3 = 0xff;
  if (!bVar7) {
    iVar3 = iVar4;
  }
  *(undefined1 *)(puVar2 + 0x32) = param_3;
  if (bVar7) {
LAB_0018e910:
    FUN_0019f30c(puVar2);
    puVar2 = (undefined2 *)0x0;
  }
  else {
    do {
      iVar5 = iVar4 + 1;
      iVar3 = iVar3 + 2;
      *(undefined4 *)(puVar2 + iVar4 * 2 + 0x34) = 0xffffffff;
      iVar4 = iVar4 + 2;
      *(undefined4 *)(puVar2 + iVar5 * 2 + 0x34) = 0xffffffff;
    } while (iVar3 < 0x10);
    *(undefined1 *)(puVar2 + 0x58) = 2;
    *(undefined1 *)((int)puVar2 + 0xb1) = 3;
    *(undefined1 *)((int)puVar2 + 0xa9) = 0;
    *(undefined1 *)(puVar2 + 0x54) = 0xff;
    *(undefined4 *)(puVar2 + 0x56) = 0xffffffff;
    *(undefined1 *)(puVar2 + 0x55) = 0xff;
    *(undefined1 *)((int)puVar2 + 0xab) = 0;
    *(undefined1 *)(puVar2 + 0x59) = 0;
    *(undefined4 *)(puVar2 + 0x5a) = 0;
    *(undefined4 *)(puVar2 + 0x5c) = 0;
    *(undefined4 *)(puVar2 + 0x5e) = 0;
    *(undefined1 *)(puVar2 + 0x60) = 0xff;
    *(undefined4 *)(puVar2 + 0x66) = 0;
    *(undefined1 *)(puVar2 + 0x68) = 1;
    *(undefined4 *)(puVar2 + 0x6a) = 0;
    *(undefined1 *)(puVar2 + 0x6c) = 1;
    *(undefined1 *)((int)puVar2 + 0xd9) = 1;
    *(undefined4 *)(puVar2 + 0x62) = 0;
    *(undefined4 *)(puVar2 + 100) = 0;
    puVar1 = DAT_0018e938;
    if (puVar2 != (undefined2 *)0x0) {
      puVar6 = (undefined4 *)*DAT_0018e938;
      if ((undefined4 *)DAT_0018e938[1] != puVar6) {
        do {
          iVar4 = (**(code **)(*(int *)*puVar6 + 8))((int *)*puVar6,puVar2);
          if (iVar4 != 0) goto LAB_0018e910;
          puVar6 = puVar6 + 1;
        } while ((undefined4 *)puVar1[1] != puVar6);
      }
    }
  }
  return puVar2;
}

