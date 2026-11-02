// rea decompile_all
// name: FUN_0003a450
// address: 0x3a450
// body: available
// range: 0x3a450-0x3a539 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003a450(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  undefined1 auStack_1c [8];
  
  iVar5 = param_1 + 0x284;
  iVar4 = 0;
  FUN_0002f734(iVar5,auStack_1c);
  FUN_0002f734(iVar5,&local_20);
  while (iVar2 = FUN_0002f836(iVar5,local_20), iVar2 == 0) {
    iVar2 = FUN_0002f778(iVar5,local_20);
    if (iVar2 != 0) {
      iVar3 = FUN_0002ce12();
      if (iVar3 == 0) {
        iVar3 = FUN_000366e0(DAT_0003a53c);
        if (iVar3 != 0) {
          FUN_0002f9bc(DAT_0003a53c);
          FUN_0002f9fc(6,_DAT_0003a540,*(undefined2 *)(param_1 + 2));
        }
        FUN_0002f89e(iVar5,iVar2);
        FUN_0002ce42(iVar2);
        FUN_0002f734(iVar5,&local_20);
      }
      else if ((*(int *)(iVar2 + 0xc) != 0) &&
              (iVar2 = (int)*(char *)(*(int *)(iVar2 + 0xc) + 0x21), iVar4 < iVar2)) {
        iVar4 = iVar2;
      }
    }
    FUN_0002f888(iVar5,&local_20);
  }
  iVar5 = FUN_0002f7ea(iVar5);
  uVar1 = DAT_0003a53c;
  if (iVar5 == 0) {
    iVar5 = FUN_000366e0(DAT_0003a53c);
    if (iVar5 != 0) {
      FUN_0002f9bc(uVar1);
      FUN_0002f9fc(6,s___PORT__d__Foreign_Master_list_i_0003a542 + 2,*(undefined2 *)(param_1 + 2));
    }
    FUN_0003c8a4(param_1 + 0x370);
  }
  if (iVar4 < *(char *)(param_1 + 0x269)) {
    iVar4 = (int)*(char *)(param_1 + 0x269);
  }
  if (*(char *)(param_1 + 0x26a) != iVar4) {
    *(char *)(param_1 + 0x26a) = (char)iVar4;
    iVar4 = FUN_001e11e8(iVar4);
    FUN_0003c83c(param_1 + 0x370,iVar4 << 2);
  }
  return;
}

