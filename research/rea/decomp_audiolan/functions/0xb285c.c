// rea decompile_all
// name: FUN_000b285c
// address: 0xb285c
// body: available
// range: 0xb285c-0xb2ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000b285c(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char acStack_1f8 [412];
  undefined1 auStack_5c [12];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [20];
  
  iVar6 = *DAT_000b2ac8;
  if (iVar6 == 0) {
    return 1;
  }
  uVar3 = FUN_001b987c(auStack_38,0);
  FUN_0014f7b8(auStack_48,uVar3);
  FUN_001b98a8(auStack_38);
  iVar4 = FUN_000034d0(param_2);
  iVar4 = (iVar4 - param_3) + 1;
  FUN_000e1e34(auStack_5c);
  if (0 < iVar4) {
    cVar1 = *param_2;
    if ((cVar1 == '\0') || (cVar1 != '/' && cVar1 != '\\')) {
      FUN_000e1e54(auStack_5c,iVar6 + 0xfc);
    }
    else {
      FUN_0014dae0(iVar6,auStack_5c);
    }
    iVar2 = DAT_000b2acc;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      iVar5 = 0;
      pcVar7 = acStack_1f8;
      for (; cVar1 = *param_2, (cVar1 != '\0' && cVar1 != '/') && cVar1 != '\\';
          param_2 = param_2 + 1) {
        if (iVar4 == 0) goto LAB_000b2a30;
        iVar5 = iVar5 + 1;
        if (iVar2 <= iVar5) {
          FUN_000028a4(s_Directory_name___s__is_to_long_000b2ad0,acStack_1f8);
          FUN_000e1e40(auStack_5c);
          FUN_0014f868(auStack_48);
          return 6;
        }
        iVar4 = iVar4 + -1;
        *pcVar7 = cVar1;
        pcVar7 = pcVar7 + 1;
      }
      if (iVar4 == 0) break;
      *pcVar7 = '\0';
      iVar5 = FUN_000034d0(acStack_1f8);
      if (iVar5 != 0) {
        iVar5 = FUN_00003960(acStack_1f8,&DAT_000b2af0);
        if (iVar5 == 0) {
          FUN_000e1c88(auStack_5c);
        }
        else {
          uStack_50 = 0;
          uStack_4c = 0;
          FUN_0014f7cc(auStack_30,acStack_1f8);
          FUN_001b98a8(&uStack_50);
          iVar5 = FUN_000e1aac(auStack_5c,auStack_30);
          if (iVar5 == 0) {
            FUN_0015ca20(auStack_5c,auStack_48);
            FUN_000028a4(s_Directory___s__does_not_exist_000b2af4,acStack_1f8);
            iVar4 = FUN_000034d0(*(undefined4 *)(iVar6 + 0x10c));
            if (iVar4 != 0) {
              FUN_000038f4(*(undefined4 *)(iVar6 + 0x108),*(undefined4 *)(iVar6 + 0x10c),iVar4 + -1)
              ;
              *(undefined1 *)(*(int *)(iVar6 + 0x108) + iVar4 + -1) = 0;
            }
            FUN_0014f868(auStack_30);
            FUN_000e1e40(auStack_5c);
            FUN_0014f868(auStack_48);
            return 6;
          }
          FUN_0014f868(auStack_30);
        }
      }
      cVar1 = *param_2;
      if (cVar1 == '\0') break;
      if (param_2[1] == '\0') {
        if (cVar1 == '/' || cVar1 == '\\') {
          param_2 = &DAT_000b2b14;
          iVar4 = 1;
        }
      }
      else {
        param_2 = param_2 + 1;
        iVar4 = iVar4 + -1;
      }
      cVar1 = *param_2;
    }
LAB_000b2a30:
    FUN_000e1e54(iVar6 + 0xfc,auStack_5c);
  }
  FUN_000e1e40(auStack_5c);
  FUN_0014f868(auStack_48);
  return 0;
}

