// rea decompile_all
// name: FUN_001a8814
// address: 0x1a8814
// body: available
// range: 0x1a8814-0x1a89bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a8814(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  if (param_2 == (char *)0x0) {
    FUN_00002898(DAT_001a89bc);
    return 0;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00002898(DAT_001a89c0);
  }
  else {
    cVar1 = *param_2;
    while( true ) {
      if (cVar1 == '\0') {
        return 1;
      }
      FUN_00144470(auStack_38,**(undefined1 **)(param_2 + 4));
      pcVar5 = *(char **)(*(int *)(param_2 + 4) + 4);
      cVar1 = *pcVar5;
      while (cVar1 != -1) {
        if (*(int *)(pcVar5 + 0xc) == 0) {
          uVar3 = DAT_001a89c4;
          if (*(int *)(pcVar5 + 8) == 0) {
            uVar3 = DAT_001a89c8;
          }
          FUN_00002898(uVar3,*(undefined4 *)(pcVar5 + 4));
          goto LAB_001a88c8;
        }
        iVar2 = FUN_0014897c(auStack_58,*(undefined4 *)(pcVar5 + 4),*pcVar5,pcVar5[1]);
        pcVar4 = *(char **)(pcVar5 + 0xc);
        while( true ) {
          if (pcVar4[1] == '\0') {
            iVar2 = *(int *)(pcVar4 + 4);
          }
          if (pcVar4[1] == '\0' && iVar2 == 0) break;
          FUN_00072aa0(auStack_28,*(undefined4 *)(pcVar4 + 4),*pcVar4 + '\x01');
          iVar2 = FUN_00148918(auStack_58,auStack_28);
          if (iVar2 == 0) {
            FUN_00002898(DAT_001a89cc,*(undefined4 *)(pcVar4 + 4),*pcVar4,*param_2);
            FUN_00072ad0(auStack_28);
            FUN_001489ac(auStack_58);
            goto LAB_001a88c8;
          }
          pcVar4 = pcVar4 + 8;
          iVar2 = FUN_00072ad0(auStack_28);
        }
        FUN_001443c4(auStack_38,auStack_58);
        FUN_001489ac(auStack_58);
        pcVar5 = pcVar5 + 0x10;
        cVar1 = *pcVar5;
      }
      iVar2 = FUN_00088b68(*(undefined4 *)(param_1 + 0x44),*param_2,param_3,auStack_38);
      if (iVar2 == 0) break;
      FUN_001444a4(auStack_38);
      param_2 = param_2 + 8;
      cVar1 = *param_2;
    }
    FUN_00002898(DAT_001a89d0,*param_2);
LAB_001a88c8:
    FUN_001444a4(auStack_38);
  }
  return 0;
}

