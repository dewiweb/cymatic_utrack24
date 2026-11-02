// rea decompile_all
// name: FUN_0004050c
// address: 0x4050c
// body: available
// range: 0x4050c-0x405f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0004050c(int param_1,undefined1 param_2,int param_3,undefined1 *param_4,undefined4 param_5,
                 undefined1 *param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar4 = param_1 + DAT_000405f8;
  puVar3 = *(undefined4 **)(&DAT_00001fcc + param_1);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      uVar2 = FUN_00028288(param_3 + 4,*(int *)(param_3 + 0x24) + 4,param_1 + 0x37);
      FUN_0002a1c6(0,s_SendARP__No_interface_with_Inter_00040600,*(undefined4 *)(param_3 + 0x1c),
                   uVar2);
      return;
    }
    if (puVar3[0x500] == *(int *)(param_3 + 0x1c)) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  FUN_001c6cb8(iVar4,param_7);
  puVar5 = (undefined1 *)(iVar4 + 5);
  iVar1 = 3;
  do {
    puVar5[1] = *(undefined1 *)(puVar3 + 0x50b);
    puVar5 = puVar5 + 2;
    iVar1 = iVar1 + -1;
    *puVar5 = *(undefined1 *)(puVar3 + 0x50b);
  } while (iVar1 != 0);
  *(undefined1 *)(iVar4 + 0xc) = 8;
  *(undefined1 *)(iVar4 + 0xd) = 6;
  *(undefined1 *)(iVar4 + 0xe) = 0;
  *(undefined1 *)(iVar4 + 0xf) = 1;
  *(undefined1 *)(iVar4 + 0x10) = 8;
  *(undefined1 *)(iVar4 + 0x11) = 0;
  *(undefined1 *)(iVar4 + 0x12) = 6;
  *(undefined1 *)(iVar4 + 0x13) = 4;
  *(undefined1 *)(iVar4 + 0x14) = 0;
  *(undefined1 *)(iVar4 + 0x15) = param_2;
  FUN_001c6cb8(iVar4 + 0x16,(int)puVar3 + DAT_000405fc);
  *(undefined1 *)(iVar4 + 0x1c) = *param_4;
  *(undefined1 *)(iVar4 + 0x1d) = param_4[1];
  *(undefined1 *)(iVar4 + 0x1e) = param_4[2];
  *(undefined1 *)(iVar4 + 0x1f) = param_4[3];
  FUN_001c6cb8(iVar4 + 0x20,param_5);
  *(undefined1 *)(iVar4 + 0x26) = *param_6;
  *(undefined1 *)(iVar4 + 0x27) = param_6[1];
  *(undefined1 *)(iVar4 + 0x28) = param_6[2];
  *(undefined1 *)(iVar4 + 0x29) = param_6[3];
  FUN_001e58ec(iVar4,iVar4 + 0x2a,*(undefined4 *)(param_3 + 0x1c));
  return;
}

